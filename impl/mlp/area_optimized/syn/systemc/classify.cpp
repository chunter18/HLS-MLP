// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "classify.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic classify::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic classify::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<4> classify::ap_ST_fsm_state1 = "1";
const sc_lv<4> classify::ap_ST_fsm_state2 = "10";
const sc_lv<4> classify::ap_ST_fsm_state3 = "100";
const sc_lv<4> classify::ap_ST_fsm_state4 = "1000";
const sc_lv<32> classify::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> classify::ap_const_lv32_1 = "1";
const sc_lv<32> classify::ap_const_lv32_2 = "10";
const sc_lv<32> classify::ap_const_lv32_3 = "11";
const sc_lv<4> classify::ap_const_lv4_0 = "0000";
const sc_lv<64> classify::ap_const_lv64_0 = "0000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<4> classify::ap_const_lv4_A = "1010";
const sc_lv<4> classify::ap_const_lv4_1 = "1";
const sc_lv<1> classify::ap_const_lv1_1 = "1";
const bool classify::ap_const_boolean_1 = true;

classify::classify(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_activated_L2_V_address0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_s_fu_87_p1 );

    SC_METHOD(thread_activated_L2_V_ce0);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_state1);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_fu_75_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_fu_75_p2 );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_fu_75_p2 );
    sensitive << ( result_write_assign_reg_52 );

    SC_METHOD(thread_max_V_2_fu_101_p3);
    sensitive << ( activated_L2_V_q0 );
    sensitive << ( p_0_reg_42 );
    sensitive << ( tmp_16_fu_92_p2 );

    SC_METHOD(thread_network_digit_1_fu_109_p3);
    sensitive << ( result_write_assign_reg_52 );
    sensitive << ( tmp_16_fu_92_p2 );
    sensitive << ( network_digit_2_cast_fu_98_p1 );

    SC_METHOD(thread_network_digit_2_cast_fu_98_p1);
    sensitive << ( network_digit_reg_130 );

    SC_METHOD(thread_network_digit_fu_81_p2);
    sensitive << ( k_reg_64 );

    SC_METHOD(thread_tmp_16_fu_92_p2);
    sensitive << ( activated_L2_V_q0 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( p_0_reg_42 );

    SC_METHOD(thread_tmp_fu_75_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( k_reg_64 );

    SC_METHOD(thread_tmp_s_fu_87_p1);
    sensitive << ( k_reg_64 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_fu_75_p2 );

    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "0001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "classify_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, activated_L2_V_address0, "(port)activated_L2_V_address0");
    sc_trace(mVcdFile, activated_L2_V_ce0, "(port)activated_L2_V_ce0");
    sc_trace(mVcdFile, activated_L2_V_q0, "(port)activated_L2_V_q0");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, ap_block_state1, "ap_block_state1");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, network_digit_fu_81_p2, "network_digit_fu_81_p2");
    sc_trace(mVcdFile, network_digit_reg_130, "network_digit_reg_130");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_fu_75_p2, "tmp_fu_75_p2");
    sc_trace(mVcdFile, max_V_2_fu_101_p3, "max_V_2_fu_101_p3");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, network_digit_1_fu_109_p3, "network_digit_1_fu_109_p3");
    sc_trace(mVcdFile, p_0_reg_42, "p_0_reg_42");
    sc_trace(mVcdFile, result_write_assign_reg_52, "result_write_assign_reg_52");
    sc_trace(mVcdFile, k_reg_64, "k_reg_64");
    sc_trace(mVcdFile, tmp_s_fu_87_p1, "tmp_s_fu_87_p1");
    sc_trace(mVcdFile, tmp_16_fu_92_p2, "tmp_16_fu_92_p2");
    sc_trace(mVcdFile, network_digit_2_cast_fu_98_p1, "network_digit_2_cast_fu_98_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

classify::~classify() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void classify::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(tmp_fu_75_p2.read(), ap_const_lv1_1) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        k_reg_64 = network_digit_reg_130.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        k_reg_64 = ap_const_lv4_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        p_0_reg_42 = max_V_2_fu_101_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        p_0_reg_42 = activated_L2_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        result_write_assign_reg_52 = network_digit_1_fu_109_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        result_write_assign_reg_52 = ap_const_lv32_1;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        network_digit_reg_130 = network_digit_fu_81_p2.read();
    }
}

void classify::thread_activated_L2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        activated_L2_V_address0 =  (sc_lv<4>) (tmp_s_fu_87_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        activated_L2_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        activated_L2_V_address0 = "XXXX";
    }
}

void classify::thread_activated_L2_V_ce0() {
    if (((!(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        activated_L2_V_ce0 = ap_const_logic_1;
    } else {
        activated_L2_V_ce0 = ap_const_logic_0;
    }
}

void classify::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void classify::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void classify::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void classify::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void classify::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void classify::thread_ap_done() {
    if ((esl_seteq<1,1,1>(tmp_fu_75_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void classify::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void classify::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(tmp_fu_75_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void classify::thread_ap_return() {
    ap_return = result_write_assign_reg_52.read();
}

void classify::thread_max_V_2_fu_101_p3() {
    max_V_2_fu_101_p3 = (!tmp_16_fu_92_p2.read()[0].is_01())? sc_lv<18>(): ((tmp_16_fu_92_p2.read()[0].to_bool())? activated_L2_V_q0.read(): p_0_reg_42.read());
}

void classify::thread_network_digit_1_fu_109_p3() {
    network_digit_1_fu_109_p3 = (!tmp_16_fu_92_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_16_fu_92_p2.read()[0].to_bool())? network_digit_2_cast_fu_98_p1.read(): result_write_assign_reg_52.read());
}

void classify::thread_network_digit_2_cast_fu_98_p1() {
    network_digit_2_cast_fu_98_p1 = esl_zext<32,4>(network_digit_reg_130.read());
}

void classify::thread_network_digit_fu_81_p2() {
    network_digit_fu_81_p2 = (!k_reg_64.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(k_reg_64.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void classify::thread_tmp_16_fu_92_p2() {
    tmp_16_fu_92_p2 = (!activated_L2_V_q0.read().is_01() || !p_0_reg_42.read().is_01())? sc_lv<1>(): (sc_bigint<18>(activated_L2_V_q0.read()) > sc_bigint<18>(p_0_reg_42.read()));
}

void classify::thread_tmp_fu_75_p2() {
    tmp_fu_75_p2 = (!k_reg_64.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(k_reg_64.read() == ap_const_lv4_A);
}

void classify::thread_tmp_s_fu_87_p1() {
    tmp_s_fu_87_p1 = esl_zext<64,4>(k_reg_64.read());
}

void classify::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((!(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(tmp_fu_75_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        default : 
            ap_NS_fsm = "XXXX";
            break;
    }
}

}

