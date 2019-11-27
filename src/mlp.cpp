#include "mlp.h"
#include "math.h"

int mlp(weights_L1_t weights_L1[M][N],  weights_L2_t weights_L2[P][O], input_t input[400])
{
	input_t bias_added[N];
	L1_out_t L1_no_activ[M];
	sigmoid_t L1_activ[M];
	sigmoid_t L2_bias_added[O];
	L2_out_t L2_out[10];
	sigmoid_t L2_out_activ[10];
	int digit;

	add_bias_pre_L1(input, bias_added);
	mvprod_layer_1(weights_L1, bias_added, L1_no_activ);
	sigmoid_activation_L1(L1_no_activ, L1_activ);

	add_bias_pre_L2(L1_activ, L2_bias_added);
	mvprod_layer_2(weights_L2, L2_bias_added, L2_out);
	sigmoid_activation_L2(L2_out, L2_out_activ);

	classify(L2_out_activ, &digit);

	return digit;
}

//function change from returning int to return by reference to
//eliminate warning from dataflow of top level
void classify(sigmoid_t activated_L2[10], int* result)
{
	sigmoid_t max = activated_L2[0];
	int network_digit = 1;

	unsigned int k;
	argmax:for(k=0; k < 10; k++)
	{
		if(activated_L2[k] > max)
		{
			max = activated_L2[k];
			network_digit = k+1;
		}
	}

	*result = network_digit; //return the value
}



void add_bias_pre_L1(input_t input[L],  input_t result[N])
{
	unsigned int i;

	result[0] = 1;
	fill:for(i = 0; i < 400; i++)
	{
		result[i+1] = input[i];
	}
}

void add_bias_pre_L2(sigmoid_t input[25],  sigmoid_t result[26])
{
	unsigned int i;

	result[0] = 1;
	fill:for(i = 0; i < 25; i++)
	{
		result[i+1] = input[i];
	}
}

void mvprod_layer_1(weights_L1_t matrix[M][N], input_t input[N],  L1_out_t result[M])
{
	unsigned int m, n;
	L1_out_t acc = 0;

	outer:for(m = 0; m < M; m++)
	{
		inner:for(n = 0; n < N; n++)
		{
			if(n == 0)
				acc = 0;

			acc += input[n]*matrix[m][n];

			if(n == 400) //matlab eqiv to 401
				result[m] = acc;
		}
	}

}


void mvprod_layer_2(weights_L2_t matrix[10][26], sigmoid_t input[26],  L2_out_t result[10])
{
	unsigned int m, n;
	L2_out_t acc = 0;

	outer:for(m = 0; m < 10; m++)
	{
		inner:for(n = 0; n < 26; n++)
		{
			if(n == 0)
				acc = 0;

			acc += input[n]*matrix[m][n];

			if(n == 25)
				result[m] = acc;
		}
	}

}



void sigmoid_activation_L1(L1_out_t input[M], sigmoid_t result[M])
{
	unsigned int i;
	L1_out_t abs_val = 0;
	L1_out_t val = 0;
	sigmoid_t poly = 0;
	sigmoid_t constant = 0.5;

	activ:for(i = 0; i < M; i++)
	{
		val = input[i];

		//compute abs
		if(val < 0)
			abs_val = -val;
		else
			abs_val = val;

		if(abs_val > 4)
			poly = 1;
		else
			poly = constant + (abs_val>>2) - ((abs_val*abs_val)>>5);


		if(val >= 0)
            result[i] = poly;
        else
            result[i] = 1 - poly;

	}
}

void sigmoid_activation_L2(L2_out_t input[10], sigmoid_t result[10])
{
	unsigned int i;
	L2_out_t abs_val = 0;
	L2_out_t val = 0;
	sigmoid_t poly = 0;
	sigmoid_t constant = 0.5;

	activ:for(i = 0; i < 10; i++)
	{
		val = input[i];

		//compute abs
		if(val < 0)
			abs_val = -val;
		else
			abs_val = val;

		if(abs_val > 4)
			poly = 1;
		else
			poly = constant + (abs_val>>2) - ((abs_val*abs_val)>>5);


		if(val >= 0)
            result[i] = poly;
        else
            result[i] = 1 - poly;

	}
}

void Layer1_result(weights_L1_t weights_L1[M][N], input_t input[400], sigmoid_t out[25])
{
	input_t bias_added[N];
	L1_out_t L1_no_activ[M];

	add_bias_pre_L1(input, bias_added);
	mvprod_layer_1(weights_L1, bias_added, L1_no_activ);
	sigmoid_activation_L1(L1_no_activ, out);
}

void Layer1_noactiv(weights_L1_t weights_L1[M][N], input_t input[400], L1_out_t out[25])
{
	input_t bias_added[N];

	add_bias_pre_L1(input, bias_added);
	mvprod_layer_1(weights_L1, bias_added, out);
}

