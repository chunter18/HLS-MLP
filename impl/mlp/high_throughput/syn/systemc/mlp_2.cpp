#include "mlp.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void mlp::thread_ap_clk_no_reset_() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, add_bias_pre_L1_U0_ap_ready.read()))) {
        add_bias_pre_L1_U0_ap_ready_count = (!add_bias_pre_L1_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(add_bias_pre_L1_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, add_bias_pre_L1_U0_ap_ready.read()))) {
        add_bias_pre_L1_U0_ap_ready_count = (!add_bias_pre_L1_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(add_bias_pre_L1_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_add_bias_pre_L1_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_add_bias_pre_L1_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_add_bias_pre_L1_U0_ap_ready = ap_sync_add_bias_pre_L1_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_10_V = ap_sync_channel_write_bias_added_0_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_11_V = ap_sync_channel_write_bias_added_0_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_12_V = ap_sync_channel_write_bias_added_0_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_13_V = ap_sync_channel_write_bias_added_0_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_14_V = ap_sync_channel_write_bias_added_0_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_15_V = ap_sync_channel_write_bias_added_0_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_16_V = ap_sync_channel_write_bias_added_0_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_17_V = ap_sync_channel_write_bias_added_0_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_18_V = ap_sync_channel_write_bias_added_0_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_19_V = ap_sync_channel_write_bias_added_0_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_1_V = ap_sync_channel_write_bias_added_0_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_20_V = ap_sync_channel_write_bias_added_0_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_21_V = ap_sync_channel_write_bias_added_0_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_22_V = ap_sync_channel_write_bias_added_0_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_23_V = ap_sync_channel_write_bias_added_0_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_24_V = ap_sync_channel_write_bias_added_0_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_25_V = ap_sync_channel_write_bias_added_0_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_2_V = ap_sync_channel_write_bias_added_0_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_3_V = ap_sync_channel_write_bias_added_0_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_4_V = ap_sync_channel_write_bias_added_0_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_5_V = ap_sync_channel_write_bias_added_0_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_6_V = ap_sync_channel_write_bias_added_0_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_7_V = ap_sync_channel_write_bias_added_0_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_8_V = ap_sync_channel_write_bias_added_0_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_0_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_0_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_0_9_V = ap_sync_channel_write_bias_added_0_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_0_V = ap_sync_channel_write_bias_added_10_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_10_V = ap_sync_channel_write_bias_added_10_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_11_V = ap_sync_channel_write_bias_added_10_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_12_V = ap_sync_channel_write_bias_added_10_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_13_V = ap_sync_channel_write_bias_added_10_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_14_V = ap_sync_channel_write_bias_added_10_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_15_V = ap_sync_channel_write_bias_added_10_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_16_V = ap_sync_channel_write_bias_added_10_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_17_V = ap_sync_channel_write_bias_added_10_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_18_V = ap_sync_channel_write_bias_added_10_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_19_V = ap_sync_channel_write_bias_added_10_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_1_V = ap_sync_channel_write_bias_added_10_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_20_V = ap_sync_channel_write_bias_added_10_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_21_V = ap_sync_channel_write_bias_added_10_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_22_V = ap_sync_channel_write_bias_added_10_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_23_V = ap_sync_channel_write_bias_added_10_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_24_V = ap_sync_channel_write_bias_added_10_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_25_V = ap_sync_channel_write_bias_added_10_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_2_V = ap_sync_channel_write_bias_added_10_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_3_V = ap_sync_channel_write_bias_added_10_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_4_V = ap_sync_channel_write_bias_added_10_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_5_V = ap_sync_channel_write_bias_added_10_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_6_V = ap_sync_channel_write_bias_added_10_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_7_V = ap_sync_channel_write_bias_added_10_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_8_V = ap_sync_channel_write_bias_added_10_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_10_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_10_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_10_9_V = ap_sync_channel_write_bias_added_10_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_0_V = ap_sync_channel_write_bias_added_11_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_10_V = ap_sync_channel_write_bias_added_11_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_11_V = ap_sync_channel_write_bias_added_11_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_12_V = ap_sync_channel_write_bias_added_11_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_13_V = ap_sync_channel_write_bias_added_11_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_14_V = ap_sync_channel_write_bias_added_11_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_15_V = ap_sync_channel_write_bias_added_11_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_16_V = ap_sync_channel_write_bias_added_11_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_17_V = ap_sync_channel_write_bias_added_11_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_18_V = ap_sync_channel_write_bias_added_11_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_19_V = ap_sync_channel_write_bias_added_11_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_1_V = ap_sync_channel_write_bias_added_11_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_20_V = ap_sync_channel_write_bias_added_11_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_21_V = ap_sync_channel_write_bias_added_11_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_22_V = ap_sync_channel_write_bias_added_11_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_23_V = ap_sync_channel_write_bias_added_11_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_24_V = ap_sync_channel_write_bias_added_11_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_25_V = ap_sync_channel_write_bias_added_11_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_2_V = ap_sync_channel_write_bias_added_11_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_3_V = ap_sync_channel_write_bias_added_11_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_4_V = ap_sync_channel_write_bias_added_11_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_5_V = ap_sync_channel_write_bias_added_11_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_6_V = ap_sync_channel_write_bias_added_11_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_7_V = ap_sync_channel_write_bias_added_11_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_8_V = ap_sync_channel_write_bias_added_11_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_11_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_11_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_11_9_V = ap_sync_channel_write_bias_added_11_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_0_V = ap_sync_channel_write_bias_added_12_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_10_V = ap_sync_channel_write_bias_added_12_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_11_V = ap_sync_channel_write_bias_added_12_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_12_V = ap_sync_channel_write_bias_added_12_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_13_V = ap_sync_channel_write_bias_added_12_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_14_V = ap_sync_channel_write_bias_added_12_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_15_V = ap_sync_channel_write_bias_added_12_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_16_V = ap_sync_channel_write_bias_added_12_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_17_V = ap_sync_channel_write_bias_added_12_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_18_V = ap_sync_channel_write_bias_added_12_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_19_V = ap_sync_channel_write_bias_added_12_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_1_V = ap_sync_channel_write_bias_added_12_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_20_V = ap_sync_channel_write_bias_added_12_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_21_V = ap_sync_channel_write_bias_added_12_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_22_V = ap_sync_channel_write_bias_added_12_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_23_V = ap_sync_channel_write_bias_added_12_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_24_V = ap_sync_channel_write_bias_added_12_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_25_V = ap_sync_channel_write_bias_added_12_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_2_V = ap_sync_channel_write_bias_added_12_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_3_V = ap_sync_channel_write_bias_added_12_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_4_V = ap_sync_channel_write_bias_added_12_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_5_V = ap_sync_channel_write_bias_added_12_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_6_V = ap_sync_channel_write_bias_added_12_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_7_V = ap_sync_channel_write_bias_added_12_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_8_V = ap_sync_channel_write_bias_added_12_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_12_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_12_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_12_9_V = ap_sync_channel_write_bias_added_12_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_0_V = ap_sync_channel_write_bias_added_13_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_10_V = ap_sync_channel_write_bias_added_13_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_11_V = ap_sync_channel_write_bias_added_13_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_12_V = ap_sync_channel_write_bias_added_13_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_13_V = ap_sync_channel_write_bias_added_13_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_14_V = ap_sync_channel_write_bias_added_13_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_15_V = ap_sync_channel_write_bias_added_13_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_16_V = ap_sync_channel_write_bias_added_13_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_17_V = ap_sync_channel_write_bias_added_13_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_18_V = ap_sync_channel_write_bias_added_13_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_19_V = ap_sync_channel_write_bias_added_13_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_1_V = ap_sync_channel_write_bias_added_13_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_20_V = ap_sync_channel_write_bias_added_13_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_21_V = ap_sync_channel_write_bias_added_13_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_22_V = ap_sync_channel_write_bias_added_13_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_23_V = ap_sync_channel_write_bias_added_13_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_24_V = ap_sync_channel_write_bias_added_13_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_25_V = ap_sync_channel_write_bias_added_13_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_2_V = ap_sync_channel_write_bias_added_13_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_3_V = ap_sync_channel_write_bias_added_13_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_4_V = ap_sync_channel_write_bias_added_13_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_5_V = ap_sync_channel_write_bias_added_13_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_6_V = ap_sync_channel_write_bias_added_13_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_7_V = ap_sync_channel_write_bias_added_13_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_8_V = ap_sync_channel_write_bias_added_13_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_13_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_13_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_13_9_V = ap_sync_channel_write_bias_added_13_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_0_V = ap_sync_channel_write_bias_added_14_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_10_V = ap_sync_channel_write_bias_added_14_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_11_V = ap_sync_channel_write_bias_added_14_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_12_V = ap_sync_channel_write_bias_added_14_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_13_V = ap_sync_channel_write_bias_added_14_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_14_V = ap_sync_channel_write_bias_added_14_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_15_V = ap_sync_channel_write_bias_added_14_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_16_V = ap_sync_channel_write_bias_added_14_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_17_V = ap_sync_channel_write_bias_added_14_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_18_V = ap_sync_channel_write_bias_added_14_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_19_V = ap_sync_channel_write_bias_added_14_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_1_V = ap_sync_channel_write_bias_added_14_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_20_V = ap_sync_channel_write_bias_added_14_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_21_V = ap_sync_channel_write_bias_added_14_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_22_V = ap_sync_channel_write_bias_added_14_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_23_V = ap_sync_channel_write_bias_added_14_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_24_V = ap_sync_channel_write_bias_added_14_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_25_V = ap_sync_channel_write_bias_added_14_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_2_V = ap_sync_channel_write_bias_added_14_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_3_V = ap_sync_channel_write_bias_added_14_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_4_V = ap_sync_channel_write_bias_added_14_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_5_V = ap_sync_channel_write_bias_added_14_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_6_V = ap_sync_channel_write_bias_added_14_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_7_V = ap_sync_channel_write_bias_added_14_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_8_V = ap_sync_channel_write_bias_added_14_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_14_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_14_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_14_9_V = ap_sync_channel_write_bias_added_14_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_15_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_15_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_15_0_V = ap_sync_channel_write_bias_added_15_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_15_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_15_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_15_10_V = ap_sync_channel_write_bias_added_15_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_15_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_15_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_15_1_V = ap_sync_channel_write_bias_added_15_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_15_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_15_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_15_2_V = ap_sync_channel_write_bias_added_15_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_15_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_15_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_15_3_V = ap_sync_channel_write_bias_added_15_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_15_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_15_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_15_4_V = ap_sync_channel_write_bias_added_15_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_15_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_15_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_15_5_V = ap_sync_channel_write_bias_added_15_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_15_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_15_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_15_6_V = ap_sync_channel_write_bias_added_15_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_15_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_15_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_15_7_V = ap_sync_channel_write_bias_added_15_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_15_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_15_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_15_8_V = ap_sync_channel_write_bias_added_15_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_15_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_15_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_15_9_V = ap_sync_channel_write_bias_added_15_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_0_V = ap_sync_channel_write_bias_added_1_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_10_V = ap_sync_channel_write_bias_added_1_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_11_V = ap_sync_channel_write_bias_added_1_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_12_V = ap_sync_channel_write_bias_added_1_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_13_V = ap_sync_channel_write_bias_added_1_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_14_V = ap_sync_channel_write_bias_added_1_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_15_V = ap_sync_channel_write_bias_added_1_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_16_V = ap_sync_channel_write_bias_added_1_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_17_V = ap_sync_channel_write_bias_added_1_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_18_V = ap_sync_channel_write_bias_added_1_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_19_V = ap_sync_channel_write_bias_added_1_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_1_V = ap_sync_channel_write_bias_added_1_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_20_V = ap_sync_channel_write_bias_added_1_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_21_V = ap_sync_channel_write_bias_added_1_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_22_V = ap_sync_channel_write_bias_added_1_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_23_V = ap_sync_channel_write_bias_added_1_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_24_V = ap_sync_channel_write_bias_added_1_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_25_V = ap_sync_channel_write_bias_added_1_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_2_V = ap_sync_channel_write_bias_added_1_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_3_V = ap_sync_channel_write_bias_added_1_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_4_V = ap_sync_channel_write_bias_added_1_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_5_V = ap_sync_channel_write_bias_added_1_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_6_V = ap_sync_channel_write_bias_added_1_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_7_V = ap_sync_channel_write_bias_added_1_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_8_V = ap_sync_channel_write_bias_added_1_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_1_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_1_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_1_9_V = ap_sync_channel_write_bias_added_1_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_0_V = ap_sync_channel_write_bias_added_2_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_10_V = ap_sync_channel_write_bias_added_2_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_11_V = ap_sync_channel_write_bias_added_2_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_12_V = ap_sync_channel_write_bias_added_2_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_13_V = ap_sync_channel_write_bias_added_2_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_14_V = ap_sync_channel_write_bias_added_2_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_15_V = ap_sync_channel_write_bias_added_2_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_16_V = ap_sync_channel_write_bias_added_2_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_17_V = ap_sync_channel_write_bias_added_2_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_18_V = ap_sync_channel_write_bias_added_2_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_19_V = ap_sync_channel_write_bias_added_2_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_1_V = ap_sync_channel_write_bias_added_2_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_20_V = ap_sync_channel_write_bias_added_2_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_21_V = ap_sync_channel_write_bias_added_2_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_22_V = ap_sync_channel_write_bias_added_2_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_23_V = ap_sync_channel_write_bias_added_2_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_24_V = ap_sync_channel_write_bias_added_2_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_25_V = ap_sync_channel_write_bias_added_2_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_2_V = ap_sync_channel_write_bias_added_2_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_3_V = ap_sync_channel_write_bias_added_2_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_4_V = ap_sync_channel_write_bias_added_2_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_5_V = ap_sync_channel_write_bias_added_2_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_6_V = ap_sync_channel_write_bias_added_2_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_7_V = ap_sync_channel_write_bias_added_2_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_8_V = ap_sync_channel_write_bias_added_2_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_2_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_2_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_2_9_V = ap_sync_channel_write_bias_added_2_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_0_V = ap_sync_channel_write_bias_added_3_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_10_V = ap_sync_channel_write_bias_added_3_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_11_V = ap_sync_channel_write_bias_added_3_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_12_V = ap_sync_channel_write_bias_added_3_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_13_V = ap_sync_channel_write_bias_added_3_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_14_V = ap_sync_channel_write_bias_added_3_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_15_V = ap_sync_channel_write_bias_added_3_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_16_V = ap_sync_channel_write_bias_added_3_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_17_V = ap_sync_channel_write_bias_added_3_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_18_V = ap_sync_channel_write_bias_added_3_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_19_V = ap_sync_channel_write_bias_added_3_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_1_V = ap_sync_channel_write_bias_added_3_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_20_V = ap_sync_channel_write_bias_added_3_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_21_V = ap_sync_channel_write_bias_added_3_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_22_V = ap_sync_channel_write_bias_added_3_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_23_V = ap_sync_channel_write_bias_added_3_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_24_V = ap_sync_channel_write_bias_added_3_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_25_V = ap_sync_channel_write_bias_added_3_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_2_V = ap_sync_channel_write_bias_added_3_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_3_V = ap_sync_channel_write_bias_added_3_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_4_V = ap_sync_channel_write_bias_added_3_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_5_V = ap_sync_channel_write_bias_added_3_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_6_V = ap_sync_channel_write_bias_added_3_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_7_V = ap_sync_channel_write_bias_added_3_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_8_V = ap_sync_channel_write_bias_added_3_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_3_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_3_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_3_9_V = ap_sync_channel_write_bias_added_3_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_0_V = ap_sync_channel_write_bias_added_4_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_10_V = ap_sync_channel_write_bias_added_4_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_11_V = ap_sync_channel_write_bias_added_4_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_12_V = ap_sync_channel_write_bias_added_4_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_13_V = ap_sync_channel_write_bias_added_4_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_14_V = ap_sync_channel_write_bias_added_4_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_15_V = ap_sync_channel_write_bias_added_4_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_16_V = ap_sync_channel_write_bias_added_4_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_17_V = ap_sync_channel_write_bias_added_4_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_18_V = ap_sync_channel_write_bias_added_4_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_19_V = ap_sync_channel_write_bias_added_4_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_1_V = ap_sync_channel_write_bias_added_4_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_20_V = ap_sync_channel_write_bias_added_4_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_21_V = ap_sync_channel_write_bias_added_4_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_22_V = ap_sync_channel_write_bias_added_4_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_23_V = ap_sync_channel_write_bias_added_4_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_24_V = ap_sync_channel_write_bias_added_4_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_25_V = ap_sync_channel_write_bias_added_4_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_2_V = ap_sync_channel_write_bias_added_4_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_3_V = ap_sync_channel_write_bias_added_4_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_4_V = ap_sync_channel_write_bias_added_4_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_5_V = ap_sync_channel_write_bias_added_4_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_6_V = ap_sync_channel_write_bias_added_4_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_7_V = ap_sync_channel_write_bias_added_4_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_8_V = ap_sync_channel_write_bias_added_4_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_4_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_4_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_4_9_V = ap_sync_channel_write_bias_added_4_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_0_V = ap_sync_channel_write_bias_added_5_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_10_V = ap_sync_channel_write_bias_added_5_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_11_V = ap_sync_channel_write_bias_added_5_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_12_V = ap_sync_channel_write_bias_added_5_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_13_V = ap_sync_channel_write_bias_added_5_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_14_V = ap_sync_channel_write_bias_added_5_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_15_V = ap_sync_channel_write_bias_added_5_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_16_V = ap_sync_channel_write_bias_added_5_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_17_V = ap_sync_channel_write_bias_added_5_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_18_V = ap_sync_channel_write_bias_added_5_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_19_V = ap_sync_channel_write_bias_added_5_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_1_V = ap_sync_channel_write_bias_added_5_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_20_V = ap_sync_channel_write_bias_added_5_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_21_V = ap_sync_channel_write_bias_added_5_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_22_V = ap_sync_channel_write_bias_added_5_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_23_V = ap_sync_channel_write_bias_added_5_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_24_V = ap_sync_channel_write_bias_added_5_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_25_V = ap_sync_channel_write_bias_added_5_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_2_V = ap_sync_channel_write_bias_added_5_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_3_V = ap_sync_channel_write_bias_added_5_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_4_V = ap_sync_channel_write_bias_added_5_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_5_V = ap_sync_channel_write_bias_added_5_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_6_V = ap_sync_channel_write_bias_added_5_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_7_V = ap_sync_channel_write_bias_added_5_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_8_V = ap_sync_channel_write_bias_added_5_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_5_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_5_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_5_9_V = ap_sync_channel_write_bias_added_5_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_0_V = ap_sync_channel_write_bias_added_6_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_10_V = ap_sync_channel_write_bias_added_6_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_11_V = ap_sync_channel_write_bias_added_6_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_12_V = ap_sync_channel_write_bias_added_6_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_13_V = ap_sync_channel_write_bias_added_6_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_14_V = ap_sync_channel_write_bias_added_6_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_15_V = ap_sync_channel_write_bias_added_6_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_16_V = ap_sync_channel_write_bias_added_6_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_17_V = ap_sync_channel_write_bias_added_6_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_18_V = ap_sync_channel_write_bias_added_6_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_19_V = ap_sync_channel_write_bias_added_6_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_1_V = ap_sync_channel_write_bias_added_6_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_20_V = ap_sync_channel_write_bias_added_6_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_21_V = ap_sync_channel_write_bias_added_6_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_22_V = ap_sync_channel_write_bias_added_6_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_23_V = ap_sync_channel_write_bias_added_6_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_24_V = ap_sync_channel_write_bias_added_6_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_25_V = ap_sync_channel_write_bias_added_6_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_2_V = ap_sync_channel_write_bias_added_6_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_3_V = ap_sync_channel_write_bias_added_6_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_4_V = ap_sync_channel_write_bias_added_6_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_5_V = ap_sync_channel_write_bias_added_6_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_6_V = ap_sync_channel_write_bias_added_6_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_7_V = ap_sync_channel_write_bias_added_6_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_8_V = ap_sync_channel_write_bias_added_6_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_6_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_6_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_6_9_V = ap_sync_channel_write_bias_added_6_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_0_V = ap_sync_channel_write_bias_added_7_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_10_V = ap_sync_channel_write_bias_added_7_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_11_V = ap_sync_channel_write_bias_added_7_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_12_V = ap_sync_channel_write_bias_added_7_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_13_V = ap_sync_channel_write_bias_added_7_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_14_V = ap_sync_channel_write_bias_added_7_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_15_V = ap_sync_channel_write_bias_added_7_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_16_V = ap_sync_channel_write_bias_added_7_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_17_V = ap_sync_channel_write_bias_added_7_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_18_V = ap_sync_channel_write_bias_added_7_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_19_V = ap_sync_channel_write_bias_added_7_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_1_V = ap_sync_channel_write_bias_added_7_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_20_V = ap_sync_channel_write_bias_added_7_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_21_V = ap_sync_channel_write_bias_added_7_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_22_V = ap_sync_channel_write_bias_added_7_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_23_V = ap_sync_channel_write_bias_added_7_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_24_V = ap_sync_channel_write_bias_added_7_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_25_V = ap_sync_channel_write_bias_added_7_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_2_V = ap_sync_channel_write_bias_added_7_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_3_V = ap_sync_channel_write_bias_added_7_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_4_V = ap_sync_channel_write_bias_added_7_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_5_V = ap_sync_channel_write_bias_added_7_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_6_V = ap_sync_channel_write_bias_added_7_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_7_V = ap_sync_channel_write_bias_added_7_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_8_V = ap_sync_channel_write_bias_added_7_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_7_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_7_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_7_9_V = ap_sync_channel_write_bias_added_7_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_0_V = ap_sync_channel_write_bias_added_8_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_10_V = ap_sync_channel_write_bias_added_8_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_11_V = ap_sync_channel_write_bias_added_8_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_12_V = ap_sync_channel_write_bias_added_8_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_13_V = ap_sync_channel_write_bias_added_8_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_14_V = ap_sync_channel_write_bias_added_8_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_15_V = ap_sync_channel_write_bias_added_8_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_16_V = ap_sync_channel_write_bias_added_8_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_17_V = ap_sync_channel_write_bias_added_8_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_18_V = ap_sync_channel_write_bias_added_8_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_19_V = ap_sync_channel_write_bias_added_8_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_1_V = ap_sync_channel_write_bias_added_8_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_20_V = ap_sync_channel_write_bias_added_8_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_21_V = ap_sync_channel_write_bias_added_8_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_22_V = ap_sync_channel_write_bias_added_8_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_23_V = ap_sync_channel_write_bias_added_8_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_24_V = ap_sync_channel_write_bias_added_8_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_25_V = ap_sync_channel_write_bias_added_8_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_2_V = ap_sync_channel_write_bias_added_8_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_3_V = ap_sync_channel_write_bias_added_8_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_4_V = ap_sync_channel_write_bias_added_8_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_5_V = ap_sync_channel_write_bias_added_8_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_6_V = ap_sync_channel_write_bias_added_8_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_7_V = ap_sync_channel_write_bias_added_8_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_8_V = ap_sync_channel_write_bias_added_8_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_8_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_8_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_8_9_V = ap_sync_channel_write_bias_added_8_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_0_V = ap_sync_channel_write_bias_added_9_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_10_V = ap_sync_channel_write_bias_added_9_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_11_V = ap_sync_channel_write_bias_added_9_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_12_V = ap_sync_channel_write_bias_added_9_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_13_V = ap_sync_channel_write_bias_added_9_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_14_V = ap_sync_channel_write_bias_added_9_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_15_V = ap_sync_channel_write_bias_added_9_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_16_V = ap_sync_channel_write_bias_added_9_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_17_V = ap_sync_channel_write_bias_added_9_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_18_V = ap_sync_channel_write_bias_added_9_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_19_V = ap_sync_channel_write_bias_added_9_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_1_V = ap_sync_channel_write_bias_added_9_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_20_V = ap_sync_channel_write_bias_added_9_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_21_V = ap_sync_channel_write_bias_added_9_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_22_V = ap_sync_channel_write_bias_added_9_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_23_V = ap_sync_channel_write_bias_added_9_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_24_V = ap_sync_channel_write_bias_added_9_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_25_V = ap_sync_channel_write_bias_added_9_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_2_V = ap_sync_channel_write_bias_added_9_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_3_V = ap_sync_channel_write_bias_added_9_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_4_V = ap_sync_channel_write_bias_added_9_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_5_V = ap_sync_channel_write_bias_added_9_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_6_V = ap_sync_channel_write_bias_added_9_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_7_V = ap_sync_channel_write_bias_added_9_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_8_V = ap_sync_channel_write_bias_added_9_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_bias_added_9_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (add_bias_pre_L1_U0_ap_done.read() & 
             add_bias_pre_L1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_bias_added_9_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_bias_added_9_9_V = ap_sync_channel_write_bias_added_9_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_mvprod_layer_1_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_mvprod_layer_1_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_mvprod_layer_1_U0_ap_ready = ap_sync_mvprod_layer_1_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_mvprod_layer_2_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_mvprod_layer_2_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_mvprod_layer_2_U0_ap_ready = ap_sync_mvprod_layer_2_U0_ap_ready.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_0, mvprod_layer_1_U0_ap_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()))) {
        mvprod_layer_1_U0_ap_ready_count = (!mvprod_layer_1_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(mvprod_layer_1_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, mvprod_layer_1_U0_ap_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()))) {
        mvprod_layer_1_U0_ap_ready_count = (!mvprod_layer_1_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(mvprod_layer_1_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, mvprod_layer_2_U0_ap_ready.read()))) {
        mvprod_layer_2_U0_ap_ready_count = (!mvprod_layer_2_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(mvprod_layer_2_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, mvprod_layer_2_U0_ap_ready.read()))) {
        mvprod_layer_2_U0_ap_ready_count = (!mvprod_layer_2_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(mvprod_layer_2_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
}

}

