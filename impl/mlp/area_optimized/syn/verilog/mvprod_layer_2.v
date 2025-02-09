// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module mvprod_layer_2 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        matrix_V_address0,
        matrix_V_ce0,
        matrix_V_q0,
        input_V_address0,
        input_V_ce0,
        input_V_q0,
        result_V_address0,
        result_V_ce0,
        result_V_we0,
        result_V_d0
);

parameter    ap_ST_fsm_state1 = 2'd1;
parameter    ap_ST_fsm_pp0_stage0 = 2'd2;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output  [8:0] matrix_V_address0;
output   matrix_V_ce0;
input  [17:0] matrix_V_q0;
output  [4:0] input_V_address0;
output   input_V_ce0;
input  [17:0] input_V_q0;
output  [3:0] result_V_address0;
output   result_V_ce0;
output   result_V_we0;
output  [17:0] result_V_d0;

reg ap_done;
reg ap_idle;
reg matrix_V_ce0;
reg input_V_ce0;
reg result_V_ce0;
reg result_V_we0;

reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
reg   [0:0] exitcond_flatten_reg_345;
reg   [0:0] exitcond_flatten_reg_345_pp0_iter3_reg;
reg    ap_enable_reg_pp0_iter4;
wire    ap_block_state2_pp0_stage0_iter0;
wire    ap_block_state3_pp0_stage0_iter1;
wire    ap_block_state4_pp0_stage0_iter2;
wire    ap_block_state5_pp0_stage0_iter3;
wire    ap_block_state6_pp0_stage0_iter4;
wire    ap_block_state7_pp0_stage0_iter5;
wire    ap_block_state8_pp0_stage0_iter6;
wire    ap_block_state9_pp0_stage0_iter7;
wire    ap_block_state10_pp0_stage0_iter8;
reg    ap_block_pp0_stage0_11001;
reg   [0:0] tmp_7_reg_105;
reg   [4:0] n4_reg_119;
reg   [3:0] m2_reg_133;
reg   [8:0] indvar_flatten1_reg_147;
reg   [17:0] acc_s_reg_161;
wire   [4:0] n_mid2_fu_181_p3;
reg   [4:0] n_mid2_reg_311;
wire    ap_CS_fsm_pp0_stage0;
reg   [4:0] n_mid2_reg_311_pp0_iter1_reg;
reg   [4:0] n_mid2_reg_311_pp0_iter2_reg;
wire   [3:0] m_mid2_fu_189_p3;
reg   [3:0] m_mid2_reg_319;
wire    ap_enable_reg_pp0_iter0;
reg   [3:0] m_mid2_reg_319_pp0_iter1_reg;
reg   [3:0] m_mid2_reg_319_pp0_iter2_reg;
reg   [3:0] m_mid2_reg_319_pp0_iter3_reg;
reg   [3:0] m_mid2_reg_319_pp0_iter4_reg;
reg   [3:0] m_mid2_reg_319_pp0_iter5_reg;
reg   [3:0] m_mid2_reg_319_pp0_iter6_reg;
reg   [3:0] m_mid2_reg_319_pp0_iter7_reg;
wire   [8:0] indvar_flatten_next_fu_201_p2;
reg   [8:0] indvar_flatten_next_reg_330;
wire   [4:0] n_fu_207_p2;
reg   [4:0] n_reg_335;
wire   [0:0] tmp_s_fu_213_p2;
reg   [0:0] tmp_s_reg_340;
wire   [0:0] exitcond_flatten_fu_219_p2;
reg   [0:0] exitcond_flatten_reg_345_pp0_iter1_reg;
reg   [0:0] exitcond_flatten_reg_345_pp0_iter2_reg;
reg   [0:0] exitcond_flatten_reg_345_pp0_iter4_reg;
reg   [0:0] exitcond_flatten_reg_345_pp0_iter5_reg;
reg   [0:0] exitcond_flatten_reg_345_pp0_iter6_reg;
reg   [0:0] exitcond_flatten_reg_345_pp0_iter7_reg;
wire   [8:0] grp_fu_297_p3;
reg   [8:0] tmp_8_reg_349;
reg    ap_enable_reg_pp0_iter2;
wire   [0:0] tmp_1_fu_228_p2;
reg   [0:0] tmp_1_reg_354;
reg   [0:0] tmp_1_reg_354_pp0_iter4_reg;
reg   [0:0] tmp_1_reg_354_pp0_iter5_reg;
reg   [0:0] tmp_1_reg_354_pp0_iter6_reg;
reg   [0:0] tmp_1_reg_354_pp0_iter7_reg;
wire   [0:0] tmp_6_fu_241_p2;
reg   [0:0] tmp_6_reg_369;
reg   [0:0] tmp_6_reg_369_pp0_iter4_reg;
reg   [0:0] tmp_6_reg_369_pp0_iter5_reg;
reg   [0:0] tmp_6_reg_369_pp0_iter6_reg;
reg   [0:0] tmp_6_reg_369_pp0_iter7_reg;
reg  signed [17:0] input_V_load_reg_373;
reg  signed [17:0] matrix_V_load_reg_378;
wire  signed [35:0] grp_fu_305_p2;
reg  signed [35:0] p_Val2_s_reg_393;
reg    ap_enable_reg_pp0_iter8;
reg    rewind_ap_ready;
reg    rewind_ap_ready_reg;
reg    rewind_enable;
reg    ap_enable_reg_pp0_iter1;
reg    ap_block_state1;
reg    ap_block_pp0_stage0_subdone;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter5;
reg    ap_enable_reg_pp0_iter6;
reg    ap_enable_reg_pp0_iter7;
reg   [0:0] ap_phi_mux_tmp_7_phi_fu_109_p6;
wire    ap_block_pp0_stage0;
reg   [4:0] ap_phi_mux_n4_phi_fu_123_p6;
reg   [3:0] ap_phi_mux_m2_phi_fu_137_p6;
reg   [8:0] ap_phi_mux_indvar_flatten1_phi_fu_151_p6;
wire   [63:0] tmp_11_cast_fu_237_p1;
wire   [63:0] tmp_2_fu_233_p1;
wire   [63:0] tmp_3_fu_252_p1;
wire   [3:0] m_fu_175_p2;
wire   [17:0] tmp_10_fu_256_p3;
wire   [34:0] tmp_4_fu_263_p3;
wire   [36:0] tmp_5_fu_275_p1;
wire   [36:0] tmp_29_cast_fu_271_p1;
wire   [36:0] p_Val2_5_fu_278_p2;
wire   [3:0] grp_fu_297_p0;
wire   [5:0] grp_fu_297_p1;
wire   [4:0] grp_fu_297_p2;
reg    grp_fu_297_ce;
reg    grp_fu_305_ce;
reg   [1:0] ap_NS_fsm;
reg    ap_idle_pp0_0to7;
reg    ap_reset_idle_pp0;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
wire   [8:0] grp_fu_297_p00;
wire   [8:0] grp_fu_297_p20;
reg    ap_condition_194;

// power-on initialization
initial begin
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 2'd1;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter8 = 1'b0;
#0 rewind_ap_ready_reg = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter5 = 1'b0;
#0 ap_enable_reg_pp0_iter6 = 1'b0;
#0 ap_enable_reg_pp0_iter7 = 1'b0;
end

mlp_mac_muladd_4neOg #(
    .ID( 1 ),
    .NUM_STAGE( 3 ),
    .din0_WIDTH( 4 ),
    .din1_WIDTH( 6 ),
    .din2_WIDTH( 5 ),
    .dout_WIDTH( 9 ))
mlp_mac_muladd_4neOg_U16(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_297_p0),
    .din1(grp_fu_297_p1),
    .din2(grp_fu_297_p2),
    .ce(grp_fu_297_ce),
    .dout(grp_fu_297_p3)
);

mlp_mul_mul_18s_1fYi #(
    .ID( 1 ),
    .NUM_STAGE( 3 ),
    .din0_WIDTH( 18 ),
    .din1_WIDTH( 18 ),
    .dout_WIDTH( 36 ))
mlp_mul_mul_18s_1fYi_U17(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(matrix_V_load_reg_378),
    .din1(input_V_load_reg_373),
    .ce(grp_fu_305_ce),
    .dout(grp_fu_305_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if (((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_reg_345_pp0_iter7_reg == 1'd1) & (ap_enable_reg_pp0_iter8 == 1'b1))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter1 <= rewind_enable;
        end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter5 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter5 <= ap_enable_reg_pp0_iter4;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter6 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter6 <= ap_enable_reg_pp0_iter5;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter7 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter7 <= ap_enable_reg_pp0_iter6;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter8 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter8 <= ap_enable_reg_pp0_iter7;
        end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter8 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        rewind_ap_ready_reg <= 1'b0;
    end else begin
        if (((internal_ap_ready == 1'b0) & (ap_start == 1'b1))) begin
            rewind_ap_ready_reg <= rewind_ap_ready;
        end else begin
            rewind_ap_ready_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter8 == 1'b1) & (exitcond_flatten_reg_345_pp0_iter7_reg == 1'd0))) begin
        acc_s_reg_161 <= {{p_Val2_5_fu_278_p2[34:17]}};
    end else if ((((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_reg_345_pp0_iter7_reg == 1'd1) & (ap_enable_reg_pp0_iter8 == 1'b1)) | (~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)))) begin
        acc_s_reg_161 <= 18'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_reg_345 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        indvar_flatten1_reg_147 <= indvar_flatten_next_reg_330;
    end else if ((((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_reg_345 == 1'd1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1)) | (~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)))) begin
        indvar_flatten1_reg_147 <= 9'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_reg_345 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        m2_reg_133 <= m_mid2_reg_319;
    end else if ((((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_reg_345 == 1'd1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1)) | (~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)))) begin
        m2_reg_133 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_reg_345 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        n4_reg_119 <= n_reg_335;
    end else if ((((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_reg_345 == 1'd1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1)) | (~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)))) begin
        n4_reg_119 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_reg_345 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        tmp_7_reg_105 <= tmp_s_reg_340;
    end else if ((((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_reg_345 == 1'd1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1)) | (~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)))) begin
        tmp_7_reg_105 <= 1'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exitcond_flatten_reg_345 <= exitcond_flatten_fu_219_p2;
        exitcond_flatten_reg_345_pp0_iter1_reg <= exitcond_flatten_reg_345;
        m_mid2_reg_319_pp0_iter1_reg <= m_mid2_reg_319;
        n_mid2_reg_311 <= n_mid2_fu_181_p3;
        n_mid2_reg_311_pp0_iter1_reg <= n_mid2_reg_311;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        exitcond_flatten_reg_345_pp0_iter2_reg <= exitcond_flatten_reg_345_pp0_iter1_reg;
        exitcond_flatten_reg_345_pp0_iter3_reg <= exitcond_flatten_reg_345_pp0_iter2_reg;
        exitcond_flatten_reg_345_pp0_iter4_reg <= exitcond_flatten_reg_345_pp0_iter3_reg;
        exitcond_flatten_reg_345_pp0_iter5_reg <= exitcond_flatten_reg_345_pp0_iter4_reg;
        exitcond_flatten_reg_345_pp0_iter6_reg <= exitcond_flatten_reg_345_pp0_iter5_reg;
        exitcond_flatten_reg_345_pp0_iter7_reg <= exitcond_flatten_reg_345_pp0_iter6_reg;
        input_V_load_reg_373 <= input_V_q0;
        m_mid2_reg_319_pp0_iter2_reg <= m_mid2_reg_319_pp0_iter1_reg;
        m_mid2_reg_319_pp0_iter3_reg <= m_mid2_reg_319_pp0_iter2_reg;
        m_mid2_reg_319_pp0_iter4_reg <= m_mid2_reg_319_pp0_iter3_reg;
        m_mid2_reg_319_pp0_iter5_reg <= m_mid2_reg_319_pp0_iter4_reg;
        m_mid2_reg_319_pp0_iter6_reg <= m_mid2_reg_319_pp0_iter5_reg;
        m_mid2_reg_319_pp0_iter7_reg <= m_mid2_reg_319_pp0_iter6_reg;
        matrix_V_load_reg_378 <= matrix_V_q0;
        n_mid2_reg_311_pp0_iter2_reg <= n_mid2_reg_311_pp0_iter1_reg;
        p_Val2_s_reg_393 <= grp_fu_305_p2;
        tmp_1_reg_354 <= tmp_1_fu_228_p2;
        tmp_1_reg_354_pp0_iter4_reg <= tmp_1_reg_354;
        tmp_1_reg_354_pp0_iter5_reg <= tmp_1_reg_354_pp0_iter4_reg;
        tmp_1_reg_354_pp0_iter6_reg <= tmp_1_reg_354_pp0_iter5_reg;
        tmp_1_reg_354_pp0_iter7_reg <= tmp_1_reg_354_pp0_iter6_reg;
        tmp_6_reg_369 <= tmp_6_fu_241_p2;
        tmp_6_reg_369_pp0_iter4_reg <= tmp_6_reg_369;
        tmp_6_reg_369_pp0_iter5_reg <= tmp_6_reg_369_pp0_iter4_reg;
        tmp_6_reg_369_pp0_iter6_reg <= tmp_6_reg_369_pp0_iter5_reg;
        tmp_6_reg_369_pp0_iter7_reg <= tmp_6_reg_369_pp0_iter6_reg;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        indvar_flatten_next_reg_330 <= indvar_flatten_next_fu_201_p2;
        m_mid2_reg_319 <= m_mid2_fu_189_p3;
        n_reg_335 <= n_fu_207_p2;
        tmp_s_reg_340 <= tmp_s_fu_213_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        tmp_8_reg_349 <= grp_fu_297_p3;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_reg_345_pp0_iter7_reg == 1'd1) & (ap_enable_reg_pp0_iter8 == 1'b1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter7 == 1'b0) & (ap_enable_reg_pp0_iter6 == 1'b0) & (ap_enable_reg_pp0_iter5 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter8 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter7 == 1'b0) & (ap_enable_reg_pp0_iter6 == 1'b0) & (ap_enable_reg_pp0_iter5 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0))) begin
        ap_idle_pp0_0to7 = 1'b1;
    end else begin
        ap_idle_pp0_0to7 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_condition_194)) begin
        if ((exitcond_flatten_reg_345 == 1'd1)) begin
            ap_phi_mux_indvar_flatten1_phi_fu_151_p6 = 9'd0;
        end else if ((exitcond_flatten_reg_345 == 1'd0)) begin
            ap_phi_mux_indvar_flatten1_phi_fu_151_p6 = indvar_flatten_next_reg_330;
        end else begin
            ap_phi_mux_indvar_flatten1_phi_fu_151_p6 = indvar_flatten1_reg_147;
        end
    end else begin
        ap_phi_mux_indvar_flatten1_phi_fu_151_p6 = indvar_flatten1_reg_147;
    end
end

always @ (*) begin
    if ((1'b1 == ap_condition_194)) begin
        if ((exitcond_flatten_reg_345 == 1'd1)) begin
            ap_phi_mux_m2_phi_fu_137_p6 = 4'd0;
        end else if ((exitcond_flatten_reg_345 == 1'd0)) begin
            ap_phi_mux_m2_phi_fu_137_p6 = m_mid2_reg_319;
        end else begin
            ap_phi_mux_m2_phi_fu_137_p6 = m2_reg_133;
        end
    end else begin
        ap_phi_mux_m2_phi_fu_137_p6 = m2_reg_133;
    end
end

always @ (*) begin
    if ((1'b1 == ap_condition_194)) begin
        if ((exitcond_flatten_reg_345 == 1'd1)) begin
            ap_phi_mux_n4_phi_fu_123_p6 = 5'd0;
        end else if ((exitcond_flatten_reg_345 == 1'd0)) begin
            ap_phi_mux_n4_phi_fu_123_p6 = n_reg_335;
        end else begin
            ap_phi_mux_n4_phi_fu_123_p6 = n4_reg_119;
        end
    end else begin
        ap_phi_mux_n4_phi_fu_123_p6 = n4_reg_119;
    end
end

always @ (*) begin
    if ((1'b1 == ap_condition_194)) begin
        if ((exitcond_flatten_reg_345 == 1'd1)) begin
            ap_phi_mux_tmp_7_phi_fu_109_p6 = 1'd0;
        end else if ((exitcond_flatten_reg_345 == 1'd0)) begin
            ap_phi_mux_tmp_7_phi_fu_109_p6 = tmp_s_reg_340;
        end else begin
            ap_phi_mux_tmp_7_phi_fu_109_p6 = tmp_7_reg_105;
        end
    end else begin
        ap_phi_mux_tmp_7_phi_fu_109_p6 = tmp_7_reg_105;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0_0to7 == 1'b1))) begin
        ap_reset_idle_pp0 = 1'b1;
    end else begin
        ap_reset_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_fu_297_ce = 1'b1;
    end else begin
        grp_fu_297_ce = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_fu_305_ce = 1'b1;
    end else begin
        grp_fu_305_ce = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter3 == 1'b1))) begin
        input_V_ce0 = 1'b1;
    end else begin
        input_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_reg_345_pp0_iter3_reg == 1'd1) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        internal_ap_ready = 1'b1;
    end else begin
        internal_ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter3 == 1'b1))) begin
        matrix_V_ce0 = 1'b1;
    end else begin
        matrix_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter8 == 1'b1))) begin
        result_V_ce0 = 1'b1;
    end else begin
        result_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (tmp_6_reg_369_pp0_iter7_reg == 1'd1) & (ap_enable_reg_pp0_iter8 == 1'b1))) begin
        result_V_we0 = 1'b1;
    end else begin
        result_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((rewind_ap_ready_reg == 1'b1) | ((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_fu_219_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        rewind_ap_ready = 1'b1;
    end else begin
        rewind_ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((rewind_ap_ready_reg == 1'b0) & (ap_start == 1'b1))) begin
        rewind_enable = 1'b1;
    end else begin
        rewind_enable = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((ap_reset_idle_pp0 == 1'b0)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((ap_reset_idle_pp0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_11001 = (ap_done_reg == 1'b1);
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = (ap_done_reg == 1'b1);
end

always @ (*) begin
    ap_block_state1 = ((ap_start == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state10_pp0_stage0_iter8 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter5 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter6 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage0_iter7 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_condition_194 = ((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_reg_pp0_iter0 = rewind_enable;

assign ap_ready = internal_ap_ready;

assign exitcond_flatten_fu_219_p2 = ((ap_phi_mux_indvar_flatten1_phi_fu_151_p6 == 9'd259) ? 1'b1 : 1'b0);

assign grp_fu_297_p0 = grp_fu_297_p00;

assign grp_fu_297_p00 = m_mid2_fu_189_p3;

assign grp_fu_297_p1 = 9'd26;

assign grp_fu_297_p2 = grp_fu_297_p20;

assign grp_fu_297_p20 = n_mid2_reg_311_pp0_iter1_reg;

assign indvar_flatten_next_fu_201_p2 = (ap_phi_mux_indvar_flatten1_phi_fu_151_p6 + 9'd1);

assign input_V_address0 = tmp_2_fu_233_p1;

assign m_fu_175_p2 = (ap_phi_mux_m2_phi_fu_137_p6 + 4'd1);

assign m_mid2_fu_189_p3 = ((ap_phi_mux_tmp_7_phi_fu_109_p6[0:0] === 1'b1) ? m_fu_175_p2 : ap_phi_mux_m2_phi_fu_137_p6);

assign matrix_V_address0 = tmp_11_cast_fu_237_p1;

assign n_fu_207_p2 = (n_mid2_fu_181_p3 + 5'd1);

assign n_mid2_fu_181_p3 = ((ap_phi_mux_tmp_7_phi_fu_109_p6[0:0] === 1'b1) ? 5'd0 : ap_phi_mux_n4_phi_fu_123_p6);

assign p_Val2_5_fu_278_p2 = (tmp_5_fu_275_p1 + tmp_29_cast_fu_271_p1);

assign result_V_address0 = tmp_3_fu_252_p1;

assign result_V_d0 = {{p_Val2_5_fu_278_p2[34:17]}};

assign tmp_10_fu_256_p3 = ((tmp_1_reg_354_pp0_iter7_reg[0:0] === 1'b1) ? 18'd0 : acc_s_reg_161);

assign tmp_11_cast_fu_237_p1 = tmp_8_reg_349;

assign tmp_1_fu_228_p2 = ((n_mid2_reg_311_pp0_iter2_reg == 5'd0) ? 1'b1 : 1'b0);

assign tmp_29_cast_fu_271_p1 = tmp_4_fu_263_p3;

assign tmp_2_fu_233_p1 = n_mid2_reg_311_pp0_iter2_reg;

assign tmp_3_fu_252_p1 = m_mid2_reg_319_pp0_iter7_reg;

assign tmp_4_fu_263_p3 = {{tmp_10_fu_256_p3}, {17'd0}};

assign tmp_5_fu_275_p1 = $unsigned(p_Val2_s_reg_393);

assign tmp_6_fu_241_p2 = ((n_mid2_reg_311_pp0_iter2_reg == 5'd25) ? 1'b1 : 1'b0);

assign tmp_s_fu_213_p2 = ((n_fu_207_p2 == 5'd26) ? 1'b1 : 1'b0);

endmodule //mvprod_layer_2
