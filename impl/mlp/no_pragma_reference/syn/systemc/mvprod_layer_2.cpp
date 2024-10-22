// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "mvprod_layer_2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic mvprod_layer_2::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic mvprod_layer_2::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<9> mvprod_layer_2::ap_ST_fsm_state1 = "1";
const sc_lv<9> mvprod_layer_2::ap_ST_fsm_state2 = "10";
const sc_lv<9> mvprod_layer_2::ap_ST_fsm_state3 = "100";
const sc_lv<9> mvprod_layer_2::ap_ST_fsm_state4 = "1000";
const sc_lv<9> mvprod_layer_2::ap_ST_fsm_state5 = "10000";
const sc_lv<9> mvprod_layer_2::ap_ST_fsm_state6 = "100000";
const sc_lv<9> mvprod_layer_2::ap_ST_fsm_state7 = "1000000";
const sc_lv<9> mvprod_layer_2::ap_ST_fsm_state8 = "10000000";
const sc_lv<9> mvprod_layer_2::ap_ST_fsm_state9 = "100000000";
const sc_lv<32> mvprod_layer_2::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> mvprod_layer_2::ap_const_lv32_1 = "1";
const sc_lv<1> mvprod_layer_2::ap_const_lv1_0 = "0";
const sc_lv<32> mvprod_layer_2::ap_const_lv32_2 = "10";
const sc_lv<32> mvprod_layer_2::ap_const_lv32_3 = "11";
const sc_lv<32> mvprod_layer_2::ap_const_lv32_4 = "100";
const sc_lv<32> mvprod_layer_2::ap_const_lv32_5 = "101";
const sc_lv<32> mvprod_layer_2::ap_const_lv32_7 = "111";
const sc_lv<4> mvprod_layer_2::ap_const_lv4_0 = "0000";
const sc_lv<1> mvprod_layer_2::ap_const_lv1_1 = "1";
const sc_lv<9> mvprod_layer_2::ap_const_lv9_0 = "000000000";
const sc_lv<5> mvprod_layer_2::ap_const_lv5_0 = "00000";
const sc_lv<32> mvprod_layer_2::ap_const_lv32_8 = "1000";
const sc_lv<18> mvprod_layer_2::ap_const_lv18_0 = "000000000000000000";
const sc_lv<9> mvprod_layer_2::ap_const_lv9_1A = "11010";
const sc_lv<4> mvprod_layer_2::ap_const_lv4_A = "1010";
const sc_lv<4> mvprod_layer_2::ap_const_lv4_1 = "1";
const sc_lv<5> mvprod_layer_2::ap_const_lv5_1A = "11010";
const sc_lv<5> mvprod_layer_2::ap_const_lv5_1 = "1";
const sc_lv<5> mvprod_layer_2::ap_const_lv5_19 = "11001";
const sc_lv<17> mvprod_layer_2::ap_const_lv17_0 = "00000000000000000";
const sc_lv<32> mvprod_layer_2::ap_const_lv32_11 = "10001";
const sc_lv<32> mvprod_layer_2::ap_const_lv32_22 = "100010";
const bool mvprod_layer_2::ap_const_boolean_1 = true;

mvprod_layer_2::mvprod_layer_2(sc_module_name name) : sc_module(name), mVcdFile(0) {
    mlp_mul_mul_18s_1cud_U6 = new mlp_mul_mul_18s_1cud<1,3,18,18,36>("mlp_mul_mul_18s_1cud_U6");
    mlp_mul_mul_18s_1cud_U6->clk(ap_clk);
    mlp_mul_mul_18s_1cud_U6->reset(ap_rst);
    mlp_mul_mul_18s_1cud_U6->din0(matrix_V_load_reg_325);
    mlp_mul_mul_18s_1cud_U6->din1(input_V_load_reg_320);
    mlp_mul_mul_18s_1cud_U6->ce(ap_var_for_const0);
    mlp_mul_mul_18s_1cud_U6->dout(grp_fu_257_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state9);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_144_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_144_p2 );

    SC_METHOD(thread_input_V_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_3_fu_189_p1 );

    SC_METHOD(thread_input_V_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_m_1_fu_150_p2);
    sensitive << ( m_reg_98 );

    SC_METHOD(thread_matrix_V_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_9_cast_fu_194_p1 );

    SC_METHOD(thread_matrix_V_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_n_1_fu_167_p2);
    sensitive << ( n_reg_121 );

    SC_METHOD(thread_next_mul_fu_138_p2);
    sensitive << ( phi_mul_reg_109 );

    SC_METHOD(thread_p_Val2_1_fu_235_p2);
    sensitive << ( tmp_28_cast4_fu_228_p1 );
    sensitive << ( tmp_5_fu_232_p1 );

    SC_METHOD(thread_result_V_address0);
    sensitive << ( result_V_addr_reg_283 );
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_result_V_ce0);
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_result_V_d0);
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( p_Val2_1_fu_235_p2 );

    SC_METHOD(thread_result_V_we0);
    sensitive << ( tmp_7_reg_316 );
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_tmp_1_fu_161_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( n_reg_121 );

    SC_METHOD(thread_tmp_28_cast4_fu_228_p1);
    sensitive << ( tmp_4_fu_220_p3 );

    SC_METHOD(thread_tmp_2_fu_183_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( n_reg_121 );

    SC_METHOD(thread_tmp_3_cast_fu_173_p1);
    sensitive << ( n_reg_121 );

    SC_METHOD(thread_tmp_3_fu_189_p1);
    sensitive << ( n_reg_121 );

    SC_METHOD(thread_tmp_4_fu_220_p3);
    sensitive << ( tmp_6_fu_213_p3 );

    SC_METHOD(thread_tmp_5_fu_232_p1);
    sensitive << ( p_Val2_s_reg_340 );

    SC_METHOD(thread_tmp_6_fu_213_p3);
    sensitive << ( tmp_2_reg_301 );
    sensitive << ( acc_V_1_fu_56 );

    SC_METHOD(thread_tmp_7_fu_198_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( n_reg_121 );

    SC_METHOD(thread_tmp_9_cast_fu_194_p1);
    sensitive << ( tmp_9_reg_296 );

    SC_METHOD(thread_tmp_9_fu_177_p2);
    sensitive << ( phi_mul_reg_109 );
    sensitive << ( tmp_3_cast_fu_173_p1 );

    SC_METHOD(thread_tmp_fu_144_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( m_reg_98 );

    SC_METHOD(thread_tmp_s_fu_156_p1);
    sensitive << ( m_reg_98 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_144_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_1_fu_161_p2 );

    SC_THREAD(thread_ap_var_for_const0);

    ap_CS_fsm = "000000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "mvprod_layer_2_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, matrix_V_address0, "(port)matrix_V_address0");
    sc_trace(mVcdFile, matrix_V_ce0, "(port)matrix_V_ce0");
    sc_trace(mVcdFile, matrix_V_q0, "(port)matrix_V_q0");
    sc_trace(mVcdFile, input_V_address0, "(port)input_V_address0");
    sc_trace(mVcdFile, input_V_ce0, "(port)input_V_ce0");
    sc_trace(mVcdFile, input_V_q0, "(port)input_V_q0");
    sc_trace(mVcdFile, result_V_address0, "(port)result_V_address0");
    sc_trace(mVcdFile, result_V_ce0, "(port)result_V_ce0");
    sc_trace(mVcdFile, result_V_we0, "(port)result_V_we0");
    sc_trace(mVcdFile, result_V_d0, "(port)result_V_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, next_mul_fu_138_p2, "next_mul_fu_138_p2");
    sc_trace(mVcdFile, next_mul_reg_270, "next_mul_reg_270");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, m_1_fu_150_p2, "m_1_fu_150_p2");
    sc_trace(mVcdFile, m_1_reg_278, "m_1_reg_278");
    sc_trace(mVcdFile, result_V_addr_reg_283, "result_V_addr_reg_283");
    sc_trace(mVcdFile, tmp_fu_144_p2, "tmp_fu_144_p2");
    sc_trace(mVcdFile, n_1_fu_167_p2, "n_1_fu_167_p2");
    sc_trace(mVcdFile, n_1_reg_291, "n_1_reg_291");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_9_fu_177_p2, "tmp_9_fu_177_p2");
    sc_trace(mVcdFile, tmp_9_reg_296, "tmp_9_reg_296");
    sc_trace(mVcdFile, tmp_1_fu_161_p2, "tmp_1_fu_161_p2");
    sc_trace(mVcdFile, tmp_2_fu_183_p2, "tmp_2_fu_183_p2");
    sc_trace(mVcdFile, tmp_2_reg_301, "tmp_2_reg_301");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, tmp_7_fu_198_p2, "tmp_7_fu_198_p2");
    sc_trace(mVcdFile, tmp_7_reg_316, "tmp_7_reg_316");
    sc_trace(mVcdFile, input_V_load_reg_320, "input_V_load_reg_320");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, matrix_V_load_reg_325, "matrix_V_load_reg_325");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, grp_fu_257_p2, "grp_fu_257_p2");
    sc_trace(mVcdFile, p_Val2_s_reg_340, "p_Val2_s_reg_340");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, m_reg_98, "m_reg_98");
    sc_trace(mVcdFile, phi_mul_reg_109, "phi_mul_reg_109");
    sc_trace(mVcdFile, n_reg_121, "n_reg_121");
    sc_trace(mVcdFile, ap_CS_fsm_state9, "ap_CS_fsm_state9");
    sc_trace(mVcdFile, tmp_s_fu_156_p1, "tmp_s_fu_156_p1");
    sc_trace(mVcdFile, tmp_9_cast_fu_194_p1, "tmp_9_cast_fu_194_p1");
    sc_trace(mVcdFile, tmp_3_fu_189_p1, "tmp_3_fu_189_p1");
    sc_trace(mVcdFile, acc_V_1_fu_56, "acc_V_1_fu_56");
    sc_trace(mVcdFile, tmp_3_cast_fu_173_p1, "tmp_3_cast_fu_173_p1");
    sc_trace(mVcdFile, tmp_6_fu_213_p3, "tmp_6_fu_213_p3");
    sc_trace(mVcdFile, tmp_4_fu_220_p3, "tmp_4_fu_220_p3");
    sc_trace(mVcdFile, tmp_28_cast4_fu_228_p1, "tmp_28_cast4_fu_228_p1");
    sc_trace(mVcdFile, tmp_5_fu_232_p1, "tmp_5_fu_232_p1");
    sc_trace(mVcdFile, p_Val2_1_fu_235_p2, "p_Val2_1_fu_235_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

mvprod_layer_2::~mvprod_layer_2() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete mlp_mul_mul_18s_1cud_U6;
}

void mvprod_layer_2::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void mvprod_layer_2::thread_ap_clk_no_reset_() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        acc_V_1_fu_56 = p_Val2_1_fu_235_p2.read().range(34, 17);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        acc_V_1_fu_56 = ap_const_lv18_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(tmp_1_fu_161_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        m_reg_98 = m_1_reg_278.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        m_reg_98 = ap_const_lv4_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        n_reg_121 = n_1_reg_291.read();
    } else if ((esl_seteq<1,1,1>(tmp_fu_144_p2.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        n_reg_121 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(tmp_1_fu_161_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        phi_mul_reg_109 = next_mul_reg_270.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        phi_mul_reg_109 = ap_const_lv9_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        input_V_load_reg_320 = input_V_q0.read();
        matrix_V_load_reg_325 = matrix_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        m_1_reg_278 = m_1_fu_150_p2.read();
        next_mul_reg_270 = next_mul_fu_138_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        n_1_reg_291 = n_1_fu_167_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        p_Val2_s_reg_340 = grp_fu_257_p2.read();
    }
    if ((esl_seteq<1,1,1>(tmp_fu_144_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        result_V_addr_reg_283 =  (sc_lv<4>) (tmp_s_fu_156_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        tmp_2_reg_301 = tmp_2_fu_183_p2.read();
        tmp_7_reg_316 = tmp_7_fu_198_p2.read();
    }
    if ((esl_seteq<1,1,1>(tmp_1_fu_161_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        tmp_9_reg_296 = tmp_9_fu_177_p2.read();
    }
}

void mvprod_layer_2::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void mvprod_layer_2::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void mvprod_layer_2::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void mvprod_layer_2::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void mvprod_layer_2::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void mvprod_layer_2::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void mvprod_layer_2::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void mvprod_layer_2::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void mvprod_layer_2::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(tmp_fu_144_p2.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void mvprod_layer_2::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void mvprod_layer_2::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(tmp_fu_144_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void mvprod_layer_2::thread_input_V_address0() {
    input_V_address0 =  (sc_lv<5>) (tmp_3_fu_189_p1.read());
}

void mvprod_layer_2::thread_input_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        input_V_ce0 = ap_const_logic_1;
    } else {
        input_V_ce0 = ap_const_logic_0;
    }
}

void mvprod_layer_2::thread_m_1_fu_150_p2() {
    m_1_fu_150_p2 = (!m_reg_98.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(m_reg_98.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void mvprod_layer_2::thread_matrix_V_address0() {
    matrix_V_address0 =  (sc_lv<9>) (tmp_9_cast_fu_194_p1.read());
}

void mvprod_layer_2::thread_matrix_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        matrix_V_ce0 = ap_const_logic_1;
    } else {
        matrix_V_ce0 = ap_const_logic_0;
    }
}

void mvprod_layer_2::thread_n_1_fu_167_p2() {
    n_1_fu_167_p2 = (!n_reg_121.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(n_reg_121.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void mvprod_layer_2::thread_next_mul_fu_138_p2() {
    next_mul_fu_138_p2 = (!phi_mul_reg_109.read().is_01() || !ap_const_lv9_1A.is_01())? sc_lv<9>(): (sc_biguint<9>(phi_mul_reg_109.read()) + sc_biguint<9>(ap_const_lv9_1A));
}

void mvprod_layer_2::thread_p_Val2_1_fu_235_p2() {
    p_Val2_1_fu_235_p2 = (!tmp_28_cast4_fu_228_p1.read().is_01() || !tmp_5_fu_232_p1.read().is_01())? sc_lv<37>(): (sc_biguint<37>(tmp_28_cast4_fu_228_p1.read()) + sc_biguint<37>(tmp_5_fu_232_p1.read()));
}

void mvprod_layer_2::thread_result_V_address0() {
    result_V_address0 = result_V_addr_reg_283.read();
}

void mvprod_layer_2::thread_result_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        result_V_ce0 = ap_const_logic_1;
    } else {
        result_V_ce0 = ap_const_logic_0;
    }
}

void mvprod_layer_2::thread_result_V_d0() {
    result_V_d0 = p_Val2_1_fu_235_p2.read().range(34, 17);
}

void mvprod_layer_2::thread_result_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         esl_seteq<1,1,1>(tmp_7_reg_316.read(), ap_const_lv1_1))) {
        result_V_we0 = ap_const_logic_1;
    } else {
        result_V_we0 = ap_const_logic_0;
    }
}

void mvprod_layer_2::thread_tmp_1_fu_161_p2() {
    tmp_1_fu_161_p2 = (!n_reg_121.read().is_01() || !ap_const_lv5_1A.is_01())? sc_lv<1>(): sc_lv<1>(n_reg_121.read() == ap_const_lv5_1A);
}

void mvprod_layer_2::thread_tmp_28_cast4_fu_228_p1() {
    tmp_28_cast4_fu_228_p1 = esl_zext<37,35>(tmp_4_fu_220_p3.read());
}

void mvprod_layer_2::thread_tmp_2_fu_183_p2() {
    tmp_2_fu_183_p2 = (!n_reg_121.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(n_reg_121.read() == ap_const_lv5_0);
}

void mvprod_layer_2::thread_tmp_3_cast_fu_173_p1() {
    tmp_3_cast_fu_173_p1 = esl_zext<9,5>(n_reg_121.read());
}

void mvprod_layer_2::thread_tmp_3_fu_189_p1() {
    tmp_3_fu_189_p1 = esl_zext<64,5>(n_reg_121.read());
}

void mvprod_layer_2::thread_tmp_4_fu_220_p3() {
    tmp_4_fu_220_p3 = esl_concat<18,17>(tmp_6_fu_213_p3.read(), ap_const_lv17_0);
}

void mvprod_layer_2::thread_tmp_5_fu_232_p1() {
    tmp_5_fu_232_p1 = esl_zext<37,36>(p_Val2_s_reg_340.read());
}

void mvprod_layer_2::thread_tmp_6_fu_213_p3() {
    tmp_6_fu_213_p3 = (!tmp_2_reg_301.read()[0].is_01())? sc_lv<18>(): ((tmp_2_reg_301.read()[0].to_bool())? ap_const_lv18_0: acc_V_1_fu_56.read());
}

void mvprod_layer_2::thread_tmp_7_fu_198_p2() {
    tmp_7_fu_198_p2 = (!n_reg_121.read().is_01() || !ap_const_lv5_19.is_01())? sc_lv<1>(): sc_lv<1>(n_reg_121.read() == ap_const_lv5_19);
}

void mvprod_layer_2::thread_tmp_9_cast_fu_194_p1() {
    tmp_9_cast_fu_194_p1 = esl_zext<64,9>(tmp_9_reg_296.read());
}

void mvprod_layer_2::thread_tmp_9_fu_177_p2() {
    tmp_9_fu_177_p2 = (!tmp_3_cast_fu_173_p1.read().is_01() || !phi_mul_reg_109.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_3_cast_fu_173_p1.read()) + sc_biguint<9>(phi_mul_reg_109.read()));
}

void mvprod_layer_2::thread_tmp_fu_144_p2() {
    tmp_fu_144_p2 = (!m_reg_98.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(m_reg_98.read() == ap_const_lv4_A);
}

void mvprod_layer_2::thread_tmp_s_fu_156_p1() {
    tmp_s_fu_156_p1 = esl_zext<64,4>(m_reg_98.read());
}

void mvprod_layer_2::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(tmp_fu_144_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(tmp_1_fu_161_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        default : 
            ap_NS_fsm = "XXXXXXXXX";
            break;
    }
}

}

