#include "mlp.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void mlp::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"weights_L1_0_V_address0\" :  \"" << weights_L1_0_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_0_V_ce0\" :  \"" << weights_L1_0_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_0_V_d0\" :  \"" << weights_L1_0_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_0_V_q0\" :  \"" << weights_L1_0_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_0_V_we0\" :  \"" << weights_L1_0_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_0_V_address1\" :  \"" << weights_L1_0_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_0_V_ce1\" :  \"" << weights_L1_0_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_0_V_d1\" :  \"" << weights_L1_0_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_0_V_q1\" :  \"" << weights_L1_0_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_0_V_we1\" :  \"" << weights_L1_0_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_1_V_address0\" :  \"" << weights_L1_1_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_1_V_ce0\" :  \"" << weights_L1_1_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_1_V_d0\" :  \"" << weights_L1_1_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_1_V_q0\" :  \"" << weights_L1_1_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_1_V_we0\" :  \"" << weights_L1_1_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_1_V_address1\" :  \"" << weights_L1_1_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_1_V_ce1\" :  \"" << weights_L1_1_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_1_V_d1\" :  \"" << weights_L1_1_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_1_V_q1\" :  \"" << weights_L1_1_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_1_V_we1\" :  \"" << weights_L1_1_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_2_V_address0\" :  \"" << weights_L1_2_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_2_V_ce0\" :  \"" << weights_L1_2_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_2_V_d0\" :  \"" << weights_L1_2_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_2_V_q0\" :  \"" << weights_L1_2_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_2_V_we0\" :  \"" << weights_L1_2_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_2_V_address1\" :  \"" << weights_L1_2_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_2_V_ce1\" :  \"" << weights_L1_2_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_2_V_d1\" :  \"" << weights_L1_2_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_2_V_q1\" :  \"" << weights_L1_2_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_2_V_we1\" :  \"" << weights_L1_2_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_3_V_address0\" :  \"" << weights_L1_3_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_3_V_ce0\" :  \"" << weights_L1_3_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_3_V_d0\" :  \"" << weights_L1_3_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_3_V_q0\" :  \"" << weights_L1_3_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_3_V_we0\" :  \"" << weights_L1_3_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_3_V_address1\" :  \"" << weights_L1_3_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_3_V_ce1\" :  \"" << weights_L1_3_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_3_V_d1\" :  \"" << weights_L1_3_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_3_V_q1\" :  \"" << weights_L1_3_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_3_V_we1\" :  \"" << weights_L1_3_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_4_V_address0\" :  \"" << weights_L1_4_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_4_V_ce0\" :  \"" << weights_L1_4_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_4_V_d0\" :  \"" << weights_L1_4_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_4_V_q0\" :  \"" << weights_L1_4_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_4_V_we0\" :  \"" << weights_L1_4_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_4_V_address1\" :  \"" << weights_L1_4_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_4_V_ce1\" :  \"" << weights_L1_4_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_4_V_d1\" :  \"" << weights_L1_4_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_4_V_q1\" :  \"" << weights_L1_4_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_4_V_we1\" :  \"" << weights_L1_4_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_5_V_address0\" :  \"" << weights_L1_5_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_5_V_ce0\" :  \"" << weights_L1_5_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_5_V_d0\" :  \"" << weights_L1_5_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_5_V_q0\" :  \"" << weights_L1_5_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_5_V_we0\" :  \"" << weights_L1_5_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_5_V_address1\" :  \"" << weights_L1_5_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_5_V_ce1\" :  \"" << weights_L1_5_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_5_V_d1\" :  \"" << weights_L1_5_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_5_V_q1\" :  \"" << weights_L1_5_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_5_V_we1\" :  \"" << weights_L1_5_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_6_V_address0\" :  \"" << weights_L1_6_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_6_V_ce0\" :  \"" << weights_L1_6_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_6_V_d0\" :  \"" << weights_L1_6_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_6_V_q0\" :  \"" << weights_L1_6_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_6_V_we0\" :  \"" << weights_L1_6_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_6_V_address1\" :  \"" << weights_L1_6_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_6_V_ce1\" :  \"" << weights_L1_6_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_6_V_d1\" :  \"" << weights_L1_6_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_6_V_q1\" :  \"" << weights_L1_6_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_6_V_we1\" :  \"" << weights_L1_6_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_7_V_address0\" :  \"" << weights_L1_7_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_7_V_ce0\" :  \"" << weights_L1_7_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_7_V_d0\" :  \"" << weights_L1_7_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_7_V_q0\" :  \"" << weights_L1_7_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_7_V_we0\" :  \"" << weights_L1_7_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_7_V_address1\" :  \"" << weights_L1_7_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_7_V_ce1\" :  \"" << weights_L1_7_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_7_V_d1\" :  \"" << weights_L1_7_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_7_V_q1\" :  \"" << weights_L1_7_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_7_V_we1\" :  \"" << weights_L1_7_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_8_V_address0\" :  \"" << weights_L1_8_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_8_V_ce0\" :  \"" << weights_L1_8_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_8_V_d0\" :  \"" << weights_L1_8_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_8_V_q0\" :  \"" << weights_L1_8_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_8_V_we0\" :  \"" << weights_L1_8_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_8_V_address1\" :  \"" << weights_L1_8_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_8_V_ce1\" :  \"" << weights_L1_8_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_8_V_d1\" :  \"" << weights_L1_8_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_8_V_q1\" :  \"" << weights_L1_8_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_8_V_we1\" :  \"" << weights_L1_8_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_9_V_address0\" :  \"" << weights_L1_9_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_9_V_ce0\" :  \"" << weights_L1_9_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_9_V_d0\" :  \"" << weights_L1_9_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_9_V_q0\" :  \"" << weights_L1_9_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_9_V_we0\" :  \"" << weights_L1_9_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_9_V_address1\" :  \"" << weights_L1_9_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_9_V_ce1\" :  \"" << weights_L1_9_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_9_V_d1\" :  \"" << weights_L1_9_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_9_V_q1\" :  \"" << weights_L1_9_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_9_V_we1\" :  \"" << weights_L1_9_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_10_V_address0\" :  \"" << weights_L1_10_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_10_V_ce0\" :  \"" << weights_L1_10_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_10_V_d0\" :  \"" << weights_L1_10_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_10_V_q0\" :  \"" << weights_L1_10_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_10_V_we0\" :  \"" << weights_L1_10_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_10_V_address1\" :  \"" << weights_L1_10_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_10_V_ce1\" :  \"" << weights_L1_10_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_10_V_d1\" :  \"" << weights_L1_10_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_10_V_q1\" :  \"" << weights_L1_10_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_10_V_we1\" :  \"" << weights_L1_10_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_11_V_address0\" :  \"" << weights_L1_11_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_11_V_ce0\" :  \"" << weights_L1_11_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_11_V_d0\" :  \"" << weights_L1_11_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_11_V_q0\" :  \"" << weights_L1_11_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_11_V_we0\" :  \"" << weights_L1_11_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_11_V_address1\" :  \"" << weights_L1_11_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_11_V_ce1\" :  \"" << weights_L1_11_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_11_V_d1\" :  \"" << weights_L1_11_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_11_V_q1\" :  \"" << weights_L1_11_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_11_V_we1\" :  \"" << weights_L1_11_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_12_V_address0\" :  \"" << weights_L1_12_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_12_V_ce0\" :  \"" << weights_L1_12_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_12_V_d0\" :  \"" << weights_L1_12_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_12_V_q0\" :  \"" << weights_L1_12_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_12_V_we0\" :  \"" << weights_L1_12_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_12_V_address1\" :  \"" << weights_L1_12_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_12_V_ce1\" :  \"" << weights_L1_12_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_12_V_d1\" :  \"" << weights_L1_12_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_12_V_q1\" :  \"" << weights_L1_12_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_12_V_we1\" :  \"" << weights_L1_12_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_13_V_address0\" :  \"" << weights_L1_13_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_13_V_ce0\" :  \"" << weights_L1_13_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_13_V_d0\" :  \"" << weights_L1_13_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_13_V_q0\" :  \"" << weights_L1_13_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_13_V_we0\" :  \"" << weights_L1_13_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_13_V_address1\" :  \"" << weights_L1_13_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_13_V_ce1\" :  \"" << weights_L1_13_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_13_V_d1\" :  \"" << weights_L1_13_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_13_V_q1\" :  \"" << weights_L1_13_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_13_V_we1\" :  \"" << weights_L1_13_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_14_V_address0\" :  \"" << weights_L1_14_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_14_V_ce0\" :  \"" << weights_L1_14_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_14_V_d0\" :  \"" << weights_L1_14_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_14_V_q0\" :  \"" << weights_L1_14_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_14_V_we0\" :  \"" << weights_L1_14_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_14_V_address1\" :  \"" << weights_L1_14_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_14_V_ce1\" :  \"" << weights_L1_14_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_14_V_d1\" :  \"" << weights_L1_14_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_14_V_q1\" :  \"" << weights_L1_14_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_14_V_we1\" :  \"" << weights_L1_14_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_15_V_address0\" :  \"" << weights_L1_15_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_15_V_ce0\" :  \"" << weights_L1_15_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_15_V_d0\" :  \"" << weights_L1_15_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_15_V_q0\" :  \"" << weights_L1_15_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_15_V_we0\" :  \"" << weights_L1_15_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_15_V_address1\" :  \"" << weights_L1_15_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_15_V_ce1\" :  \"" << weights_L1_15_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_15_V_d1\" :  \"" << weights_L1_15_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L1_15_V_q1\" :  \"" << weights_L1_15_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L1_15_V_we1\" :  \"" << weights_L1_15_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L2_V_address0\" :  \"" << weights_L2_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L2_V_ce0\" :  \"" << weights_L2_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L2_V_d0\" :  \"" << weights_L2_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L2_V_q0\" :  \"" << weights_L2_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L2_V_we0\" :  \"" << weights_L2_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L2_V_address1\" :  \"" << weights_L2_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L2_V_ce1\" :  \"" << weights_L2_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L2_V_d1\" :  \"" << weights_L2_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weights_L2_V_q1\" :  \"" << weights_L2_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weights_L2_V_we1\" :  \"" << weights_L2_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_0_V_address0\" :  \"" << input_0_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_0_V_ce0\" :  \"" << input_0_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_0_V_d0\" :  \"" << input_0_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_0_V_q0\" :  \"" << input_0_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_0_V_we0\" :  \"" << input_0_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_0_V_address1\" :  \"" << input_0_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_0_V_ce1\" :  \"" << input_0_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_0_V_d1\" :  \"" << input_0_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_0_V_q1\" :  \"" << input_0_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_0_V_we1\" :  \"" << input_0_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_1_V_address0\" :  \"" << input_1_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_1_V_ce0\" :  \"" << input_1_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_1_V_d0\" :  \"" << input_1_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_1_V_q0\" :  \"" << input_1_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_1_V_we0\" :  \"" << input_1_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_1_V_address1\" :  \"" << input_1_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_1_V_ce1\" :  \"" << input_1_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_1_V_d1\" :  \"" << input_1_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_1_V_q1\" :  \"" << input_1_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_1_V_we1\" :  \"" << input_1_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_2_V_address0\" :  \"" << input_2_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_2_V_ce0\" :  \"" << input_2_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_2_V_d0\" :  \"" << input_2_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_2_V_q0\" :  \"" << input_2_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_2_V_we0\" :  \"" << input_2_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_2_V_address1\" :  \"" << input_2_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_2_V_ce1\" :  \"" << input_2_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_2_V_d1\" :  \"" << input_2_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_2_V_q1\" :  \"" << input_2_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_2_V_we1\" :  \"" << input_2_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_3_V_address0\" :  \"" << input_3_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_3_V_ce0\" :  \"" << input_3_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_3_V_d0\" :  \"" << input_3_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_3_V_q0\" :  \"" << input_3_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_3_V_we0\" :  \"" << input_3_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_3_V_address1\" :  \"" << input_3_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_3_V_ce1\" :  \"" << input_3_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_3_V_d1\" :  \"" << input_3_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_3_V_q1\" :  \"" << input_3_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_3_V_we1\" :  \"" << input_3_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_4_V_address0\" :  \"" << input_4_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_4_V_ce0\" :  \"" << input_4_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_4_V_d0\" :  \"" << input_4_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_4_V_q0\" :  \"" << input_4_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_4_V_we0\" :  \"" << input_4_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_4_V_address1\" :  \"" << input_4_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_4_V_ce1\" :  \"" << input_4_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_4_V_d1\" :  \"" << input_4_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_4_V_q1\" :  \"" << input_4_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_4_V_we1\" :  \"" << input_4_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_V_address0\" :  \"" << input_5_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_V_ce0\" :  \"" << input_5_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_V_d0\" :  \"" << input_5_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_V_q0\" :  \"" << input_5_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_V_we0\" :  \"" << input_5_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_V_address1\" :  \"" << input_5_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_V_ce1\" :  \"" << input_5_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_V_d1\" :  \"" << input_5_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_V_q1\" :  \"" << input_5_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_V_we1\" :  \"" << input_5_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_6_V_address0\" :  \"" << input_6_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_6_V_ce0\" :  \"" << input_6_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_6_V_d0\" :  \"" << input_6_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_6_V_q0\" :  \"" << input_6_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_6_V_we0\" :  \"" << input_6_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_6_V_address1\" :  \"" << input_6_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_6_V_ce1\" :  \"" << input_6_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_6_V_d1\" :  \"" << input_6_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_6_V_q1\" :  \"" << input_6_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_6_V_we1\" :  \"" << input_6_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_7_V_address0\" :  \"" << input_7_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_7_V_ce0\" :  \"" << input_7_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_7_V_d0\" :  \"" << input_7_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_7_V_q0\" :  \"" << input_7_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_7_V_we0\" :  \"" << input_7_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_7_V_address1\" :  \"" << input_7_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_7_V_ce1\" :  \"" << input_7_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_7_V_d1\" :  \"" << input_7_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_7_V_q1\" :  \"" << input_7_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_7_V_we1\" :  \"" << input_7_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_8_V_address0\" :  \"" << input_8_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_8_V_ce0\" :  \"" << input_8_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_8_V_d0\" :  \"" << input_8_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_8_V_q0\" :  \"" << input_8_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_8_V_we0\" :  \"" << input_8_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_8_V_address1\" :  \"" << input_8_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_8_V_ce1\" :  \"" << input_8_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_8_V_d1\" :  \"" << input_8_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_8_V_q1\" :  \"" << input_8_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_8_V_we1\" :  \"" << input_8_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_9_V_address0\" :  \"" << input_9_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_9_V_ce0\" :  \"" << input_9_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_9_V_d0\" :  \"" << input_9_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_9_V_q0\" :  \"" << input_9_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_9_V_we0\" :  \"" << input_9_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_9_V_address1\" :  \"" << input_9_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_9_V_ce1\" :  \"" << input_9_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_9_V_d1\" :  \"" << input_9_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_9_V_q1\" :  \"" << input_9_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_9_V_we1\" :  \"" << input_9_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_10_V_address0\" :  \"" << input_10_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_10_V_ce0\" :  \"" << input_10_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_10_V_d0\" :  \"" << input_10_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_10_V_q0\" :  \"" << input_10_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_10_V_we0\" :  \"" << input_10_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_10_V_address1\" :  \"" << input_10_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_10_V_ce1\" :  \"" << input_10_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_10_V_d1\" :  \"" << input_10_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_10_V_q1\" :  \"" << input_10_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_10_V_we1\" :  \"" << input_10_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_11_V_address0\" :  \"" << input_11_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_11_V_ce0\" :  \"" << input_11_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_11_V_d0\" :  \"" << input_11_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_11_V_q0\" :  \"" << input_11_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_11_V_we0\" :  \"" << input_11_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_11_V_address1\" :  \"" << input_11_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_11_V_ce1\" :  \"" << input_11_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_11_V_d1\" :  \"" << input_11_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_11_V_q1\" :  \"" << input_11_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_11_V_we1\" :  \"" << input_11_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_12_V_address0\" :  \"" << input_12_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_12_V_ce0\" :  \"" << input_12_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_12_V_d0\" :  \"" << input_12_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_12_V_q0\" :  \"" << input_12_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_12_V_we0\" :  \"" << input_12_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_12_V_address1\" :  \"" << input_12_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_12_V_ce1\" :  \"" << input_12_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_12_V_d1\" :  \"" << input_12_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_12_V_q1\" :  \"" << input_12_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_12_V_we1\" :  \"" << input_12_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_13_V_address0\" :  \"" << input_13_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_13_V_ce0\" :  \"" << input_13_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_13_V_d0\" :  \"" << input_13_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_13_V_q0\" :  \"" << input_13_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_13_V_we0\" :  \"" << input_13_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_13_V_address1\" :  \"" << input_13_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_13_V_ce1\" :  \"" << input_13_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_13_V_d1\" :  \"" << input_13_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_13_V_q1\" :  \"" << input_13_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_13_V_we1\" :  \"" << input_13_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_14_V_address0\" :  \"" << input_14_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_14_V_ce0\" :  \"" << input_14_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_14_V_d0\" :  \"" << input_14_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_14_V_q0\" :  \"" << input_14_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_14_V_we0\" :  \"" << input_14_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_14_V_address1\" :  \"" << input_14_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_14_V_ce1\" :  \"" << input_14_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_14_V_d1\" :  \"" << input_14_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_14_V_q1\" :  \"" << input_14_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_14_V_we1\" :  \"" << input_14_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_15_V_address0\" :  \"" << input_15_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_15_V_ce0\" :  \"" << input_15_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_15_V_d0\" :  \"" << input_15_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_15_V_q0\" :  \"" << input_15_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_15_V_we0\" :  \"" << input_15_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_15_V_address1\" :  \"" << input_15_V_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_15_V_ce1\" :  \"" << input_15_V_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_15_V_d1\" :  \"" << input_15_V_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_15_V_q1\" :  \"" << input_15_V_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_15_V_we1\" :  \"" << input_15_V_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_return\" :  \"" << ap_return.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
