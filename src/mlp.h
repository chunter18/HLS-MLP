#ifndef ___MLP__
#define ___MLP__

#include "ap_fixed.h"

#define L 400 //pre bias add. L->N in that op

//(1, N)*(N, M) = (1,M)
#define M 25
#define N 401
//(1, 401)*(401, 25) = (1, 25)

//(1, O)*(O, P) = (1,P)
#define O 26
#define P 10
//(1, 26)*(26, 10) = (1,10)

//typedef ap_fixed<total_bits, integer bits, AP_TRN, AP_WRAP> custom_t;

/*
 * weights calcs
 * Qformat range -> made a program to do range and resolution
 * want to optimize for resolution while still captureing fll range
 *
 * L1 weights:
 * max val was 1.0090, min was -1.4634. many very small vals in here
 *
 * L2 weights:
 * max val was 3.2116, min was -4.0308.
 *
 * total bit width is 18:
 * 3 int bits gets us very close for both types.
 * range is almost 4 to -4 with resolution of 3e-5
 *
 * SCRATCH THAT!!!!!!!!!!!!!!!!!!
 * so the above worked fine for L1 wirghts, whose values werent clipped at all.
 * For L2 however, that on min val got clipped and led to a result that was way off
 * that would happen exceedingly rarely, but it made the error go way up fot that layer
 * so I learned it is better to be over than under and created 2 types
 *
 * L2 weights need 4 int bits
 *
 * with that knowledge, I pared down the number of int bits to 2 on the L1 weights.
 */

typedef ap_fixed<18, 2, AP_TRN, AP_WRAP> weights_L1_t;
typedef ap_fixed<18, 4, AP_TRN, AP_WRAP> weights_L2_t;

//problem here!!!!! weights l2 getting clipped.... MAYBE FIX!
//for now - going to leave it until I see accuracy numbers


/*
 * input calcs
 * max val was 1.1277, min was -0.1320.
 *
 * total bit width is 18:
 * 2 int bits captures more than whole range
 * range is almost 2 to -2 with resolution of 1.5e-5
 */
typedef ap_fixed<18, 2, AP_TRN, AP_WRAP> input_t;

/*
 * output calcs
 * max val was 16.1246, min was -15.0527.
 *
 * total bit width is 18:
 * 5 int bits is pretty close
 * range is almost 16 to -16 with resolution of 0.001
 *
 * however I dont want to lose that little bit of range, so ill use 6 int bits.
 */
typedef ap_fixed<18, 6, AP_TRN, AP_WRAP> L1_out_t;


/*
 * L2 output min is -15.1672, max is 7.8265
 * 5 int bits will work based on calc above.
 */
typedef ap_fixed<18, 5, AP_TRN, AP_WRAP> L2_out_t;

/*
 * sigmoid calcs
 * output is bounded between 1 and -1
 *
 * ill just go with 2 int bits
 * 1 would probably work, but i want to just be safe
 */
typedef ap_fixed<18, 2, AP_TRN, AP_WRAP> sigmoid_t;


//protos

//top level
int mlp(weights_L1_t weights_L1[M][N],  weights_L2_t weights_L2[P][O], input_t input[400]);

//bias adds - add 1 to front of vector
void add_bias_pre_L1(input_t input[L],  input_t result[N]);
void add_bias_pre_L2(sigmoid_t input[M],  sigmoid_t result[O]);

//matrix vector products of different sizes
void mvprod_layer_1(weights_L1_t matrix[M][N], input_t input[N],  L1_out_t result[M]);
void mvprod_layer_2(weights_L2_t matrix[P][O], sigmoid_t input[O],  L2_out_t result[P]);

//sigmoid approximations of different sizes
void sigmoid_activation_L1(L1_out_t input[M], sigmoid_t result[M]);
void sigmoid_activation_L2(L2_out_t input[10], sigmoid_t result[10]);

//argmax
void classify(sigmoid_t activated_L2[10], int* result);

//intermediate functions for test
void Layer1_result(weights_L1_t weights_L1[M][N], input_t input[400], sigmoid_t out[25]);
void Layer1_noactiv(weights_L1_t weights_L1[M][N], input_t input[400], L1_out_t out[25]);


#endif
