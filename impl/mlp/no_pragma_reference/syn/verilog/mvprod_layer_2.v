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

parameter    ap_ST_fsm_state1 = 9'd1;
parameter    ap_ST_fsm_state2 = 9'd2;
parameter    ap_ST_fsm_state3 = 9'd4;
parameter    ap_ST_fsm_state4 = 9'd8;
parameter    ap_ST_fsm_state5 = 9'd16;
parameter    ap_ST_fsm_state6 = 9'd32;
parameter    ap_ST_fsm_state7 = 9'd64;
parameter    ap_ST_fsm_state8 = 9'd128;
parameter    ap_ST_fsm_state9 = 9'd256;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
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
reg ap_ready;
reg matrix_V_ce0;
reg input_V_ce0;
reg result_V_ce0;
reg result_V_we0;

(* fsm_encoding = "none" *) reg   [8:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [8:0] next_mul_fu_138_p2;
reg   [8:0] next_mul_reg_270;
wire    ap_CS_fsm_state2;
wire   [3:0] m_1_fu_150_p2;
reg   [3:0] m_1_reg_278;
reg   [3:0] result_V_addr_reg_283;
wire   [0:0] tmp_fu_144_p2;
wire   [4:0] n_1_fu_167_p2;
reg   [4:0] n_1_reg_291;
wire    ap_CS_fsm_state3;
wire   [8:0] tmp_9_fu_177_p2;
reg   [8:0] tmp_9_reg_296;
wire   [0:0] tmp_1_fu_161_p2;
wire   [0:0] tmp_2_fu_183_p2;
reg   [0:0] tmp_2_reg_301;
wire    ap_CS_fsm_state4;
wire   [0:0] tmp_7_fu_198_p2;
reg   [0:0] tmp_7_reg_316;
reg  signed [17:0] input_V_load_reg_320;
wire    ap_CS_fsm_state5;
reg  signed [17:0] matrix_V_load_reg_325;
wire    ap_CS_fsm_state6;
wire  signed [35:0] grp_fu_257_p2;
reg  signed [35:0] p_Val2_s_reg_340;
wire    ap_CS_fsm_state8;
reg   [3:0] m_reg_98;
reg   [8:0] phi_mul_reg_109;
reg   [4:0] n_reg_121;
wire    ap_CS_fsm_state9;
wire   [63:0] tmp_s_fu_156_p1;
wire   [63:0] tmp_9_cast_fu_194_p1;
wire   [63:0] tmp_3_fu_189_p1;
reg   [17:0] acc_V_1_fu_56;
wire   [8:0] tmp_3_cast_fu_173_p1;
wire   [17:0] tmp_6_fu_213_p3;
wire   [34:0] tmp_4_fu_220_p3;
wire   [36:0] tmp_28_cast4_fu_228_p1;
wire   [36:0] tmp_5_fu_232_p1;
wire   [36:0] p_Val2_1_fu_235_p2;
reg   [8:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 9'd1;
end

mlp_mul_mul_18s_1cud #(
    .ID( 1 ),
    .NUM_STAGE( 3 ),
    .din0_WIDTH( 18 ),
    .din1_WIDTH( 18 ),
    .dout_WIDTH( 36 ))
mlp_mul_mul_18s_1cud_U6(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(matrix_V_load_reg_325),
    .din1(input_V_load_reg_320),
    .ce(1'b1),
    .dout(grp_fu_257_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        acc_V_1_fu_56 <= {{p_Val2_1_fu_235_p2[34:17]}};
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        acc_V_1_fu_56 <= 18'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_1_fu_161_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        m_reg_98 <= m_1_reg_278;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        m_reg_98 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        n_reg_121 <= n_1_reg_291;
    end else if (((tmp_fu_144_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        n_reg_121 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_1_fu_161_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        phi_mul_reg_109 <= next_mul_reg_270;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        phi_mul_reg_109 <= 9'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        input_V_load_reg_320 <= input_V_q0;
        matrix_V_load_reg_325 <= matrix_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        m_1_reg_278 <= m_1_fu_150_p2;
        next_mul_reg_270 <= next_mul_fu_138_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        n_1_reg_291 <= n_1_fu_167_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        p_Val2_s_reg_340 <= grp_fu_257_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_144_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        result_V_addr_reg_283 <= tmp_s_fu_156_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        tmp_2_reg_301 <= tmp_2_fu_183_p2;
        tmp_7_reg_316 <= tmp_7_fu_198_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_1_fu_161_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        tmp_9_reg_296 <= tmp_9_fu_177_p2;
    end
end

always @ (*) begin
    if ((((tmp_fu_144_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
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
    if (((tmp_fu_144_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        input_V_ce0 = 1'b1;
    end else begin
        input_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        matrix_V_ce0 = 1'b1;
    end else begin
        matrix_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        result_V_ce0 = 1'b1;
    end else begin
        result_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_7_reg_316 == 1'd1) & (1'b1 == ap_CS_fsm_state9))) begin
        result_V_we0 = 1'b1;
    end else begin
        result_V_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((tmp_fu_144_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((tmp_1_fu_161_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign input_V_address0 = tmp_3_fu_189_p1;

assign m_1_fu_150_p2 = (m_reg_98 + 4'd1);

assign matrix_V_address0 = tmp_9_cast_fu_194_p1;

assign n_1_fu_167_p2 = (n_reg_121 + 5'd1);

assign next_mul_fu_138_p2 = (phi_mul_reg_109 + 9'd26);

assign p_Val2_1_fu_235_p2 = (tmp_28_cast4_fu_228_p1 + tmp_5_fu_232_p1);

assign result_V_address0 = result_V_addr_reg_283;

assign result_V_d0 = {{p_Val2_1_fu_235_p2[34:17]}};

assign tmp_1_fu_161_p2 = ((n_reg_121 == 5'd26) ? 1'b1 : 1'b0);

assign tmp_28_cast4_fu_228_p1 = tmp_4_fu_220_p3;

assign tmp_2_fu_183_p2 = ((n_reg_121 == 5'd0) ? 1'b1 : 1'b0);

assign tmp_3_cast_fu_173_p1 = n_reg_121;

assign tmp_3_fu_189_p1 = n_reg_121;

assign tmp_4_fu_220_p3 = {{tmp_6_fu_213_p3}, {17'd0}};

assign tmp_5_fu_232_p1 = $unsigned(p_Val2_s_reg_340);

assign tmp_6_fu_213_p3 = ((tmp_2_reg_301[0:0] === 1'b1) ? 18'd0 : acc_V_1_fu_56);

assign tmp_7_fu_198_p2 = ((n_reg_121 == 5'd25) ? 1'b1 : 1'b0);

assign tmp_9_cast_fu_194_p1 = tmp_9_reg_296;

assign tmp_9_fu_177_p2 = (tmp_3_cast_fu_173_p1 + phi_mul_reg_109);

assign tmp_fu_144_p2 = ((m_reg_98 == 4'd10) ? 1'b1 : 1'b0);

assign tmp_s_fu_156_p1 = m_reg_98;

endmodule //mvprod_layer_2