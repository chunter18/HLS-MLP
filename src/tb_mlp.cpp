#include <iostream>
#include <fstream>

#include "math.h"
#include "mlp.h"

//intermediate products for reference
#define L1_FILENAME "L1_out_no_activ.dat"
#define H1_FILENAME "L1_out_activ.dat"
#define L2_FILENAME "L2_out_no_activ.dat"
#define H2_FILENAME "L2_out_activ.dat"

//weights needed
#define WEIGHTS_L1_FILENAME "theta1.dat"
#define WEIGHTS_L2_FILENAME "theta2.dat"

//input and output data
#define INPUT_BATCH_FILENAME "network_inputs_fullbatch.dat"
#define OUTPUT_BATCH_FILENAME "network_outputs_fullbatch.dat"

void layer1_error(void);
void layer1_sig_error(void);

int main(void)
{

	//define filestreams to read in relevant data
	std::ifstream input_data_s;		// network input data stream, aka the images batch
	std::ifstream L1_weights_s;		// L1 wights data stream theta1
	std::ifstream L2_weights_s;		// L2 wights data stream theta2
	std::ifstream outputs_s;		// golden reference stream

	//define some arrays to hold input data

	/*
	 * So I encountered an error here trying to do this: input_data[5000][400]
	 * HLS told me I had a seg fault but I hadnt seen any code run yet. I looked
	 * Up the error and it said it happens when you try to allocated too much data
	 * on the stack which I think is a bit wierd for a testbench - but instead f loading
	 * the whole batch and passing a vector at a time, i will need to load a vector at a
	 * time and re read as needed.
	 */
	input_t input_data[400]; 			//arg to function
	weights_L1_t L1_weights[25][401];	//arg to function
	weights_L2_t L2_weights[10][26];	//arg to function
	sigmoid_t L2_output_activ[10];

	//open all the necessary files for reading

	input_data_s.open(INPUT_BATCH_FILENAME);
	if (input_data_s.is_open()==0)
	{
		std::cout << "failure opening file: " << INPUT_BATCH_FILENAME << std::endl;
	}
	else
	{
		std::cout << "opening file: " << INPUT_BATCH_FILENAME << std::endl;
	}

	L1_weights_s.open(WEIGHTS_L1_FILENAME);
	if (L1_weights_s.is_open()==0)
	{
		std::cout << "failure opening file: " << WEIGHTS_L1_FILENAME << std::endl;
	}
	else
	{
		std::cout << "opening file: " << WEIGHTS_L1_FILENAME << std::endl;
	}

	L2_weights_s.open(WEIGHTS_L2_FILENAME);
	if (L2_weights_s.is_open()==0)
	{
		std::cout << "failure opening file: " << WEIGHTS_L2_FILENAME << std::endl;
	}
	else
	{
		std::cout << "opening file: " << WEIGHTS_L2_FILENAME << std::endl;
	}

	outputs_s.open(OUTPUT_BATCH_FILENAME);
	if (outputs_s.is_open()==0)
	{
		std::cout << "failure opening file: " << OUTPUT_BATCH_FILENAME << std::endl;
	}
	else
	{
		std::cout << "opening file: " << OUTPUT_BATCH_FILENAME << std::endl;
	}


	float floating_point_tmp;
	unsigned int i,j,k;

	//read in the weights L1
	for (i=0; i<25; i++)
	{
		for (j=0; j<401; j++)
		{
			L1_weights_s >> floating_point_tmp;
			L1_weights[i][j] =  floating_point_tmp;
		}
	}
	std::cout << std::endl <<  "L1 weights matrix read in successfully" << std::endl;

	//read in the weights L2
	for (i=0; i<10; i++)
	{
		for (j=0; j<26; j++)
		{
			L2_weights_s >> floating_point_tmp;
			L2_weights[i][j] =  floating_point_tmp;
		}
	}
	std::cout << std::endl <<  "L2 weights matrix read in successfully" << std::endl;


	std::cout << std::endl <<  "beginning test" << std::endl;

	unsigned int network_digit;
	unsigned int golden_digit;
	sigmoid_t max;
	int num_classification_errors = 0;

	for (i=0; i<5000; i++)
	{
		//get one input
		for (j=0; j<400; j++)
		{
			input_data_s >> floating_point_tmp;
			input_data[j] =  floating_point_tmp;
		}


		//do the computation for single input.
		network_digit = mlp(L1_weights, L2_weights, input_data);

		//do the argmax to get the classified digit
		/*
		max = L2_output_activ[0];
		network_digit = 1;
		argmax:for(k=0; k < 10; k++)
		{
			if(L2_output_activ[k] > max)
			{
				max = L2_output_activ[k];
				network_digit = k+1;
			}
		}
		*/

		//get the matlab classified val
		//we want total accuracy, so we want to compare against y
		outputs_s >> floating_point_tmp;
		golden_digit = (unsigned int)floating_point_tmp;

		//check outputs
		if(network_digit != golden_digit)
		{
			num_classification_errors++;
		}

		//print data
		std::cout << "i=" << i << ", ";
		std::cout << "digit=" << golden_digit << ", " ;
		std::cout << "net=" << network_digit;
		std::cout << std::endl;

	}

	//compute statistics
	float accuracy = ( (5000-float(num_classification_errors))/5000.0) * 100;

	std::cout << std::endl;
	std::cout << "total number errors = " << num_classification_errors << std::endl;
	std::cout << "accuracy = " << accuracy  << "%" << std::endl;


	std::cout << std::endl;
	std::cout << "cleaning-up" << std::endl;
	//close up the files.
	input_data_s.close();
	L1_weights_s.close();
	L2_weights_s.close();
	outputs_s.close();


	return 0;
}


/*
 * Note here about accuracy:
 *
 * My first successful MLP run produced a total accuracy of 92.2% with 390/5000
 * classification errors. The lab document says that we need an accuracy of 95%.
 *
 * However, i'm not sure what that 95% refers to. The weights we were given to use
 * gets an accuracy of 97.52% with 124/5000 errors. that leaves us with 2.52% of wiggle
 * room, or an extra 126 classification errors. keep in mind, that is all using floating
 * point math.
 *
 * Now, when I used my approximate sigmoid (still in floating point), the total accuracy
 * moved down to 97.3%.
 *
 * My question becomes, is it 95% total accuracy after everything is quantized? or is it
 * 95% of 97.52? that would mean that the ccuracy could be as low as 92.644%.
 *
 * In any case, Im making functions with intermediate steps to help me see where the
 * error is coming from.
 *
 * Turns out the error came from using the wrong loop bound in L2 sigmoid. fixing that
 * fixed accuracy to 97%.
 * I FOUND THAT FROM SYNTHESIS!
 */


void layer1_sig_error(void)
{
	float epsilon = 0.001; //max error target.
	float difference = 0;
	float max_difference = 0;
	float MSE = 0;
	float floating_point_tmp;
	float ref_data;

	std::ifstream input_data_s;
	std::ifstream weights_data_s;
	std::ifstream ref_data_s;

	input_t input_data[400];
	weights_L1_t L1_weights[25][401];
	//sigmoid_t ref_data[25]; /dont want to do this, want to compare against unquantized data
	sigmoid_t test_data[25];

	unsigned int i, j, k;

	//read in weights.
	//read in the weights L1
	weights_data_s.open(WEIGHTS_L1_FILENAME);
	for (i=0; i<25; i++)
	{
		for (j=0; j<401; j++)
		{
			weights_data_s >> floating_point_tmp;
			L1_weights[i][j] =  floating_point_tmp;
		}
	}
	weights_data_s.close();

	ref_data_s.open(H1_FILENAME);

	//run through the input data
	for(i=0; i<5000; i++)
	{
		//get network input.
		for (j=0; j<400; j++)
		{
			input_data_s >> floating_point_tmp;
			input_data[j] =  floating_point_tmp;
		}


		//call function.
		Layer1_result(L1_weights, input_data, test_data);

		//compare the reference and test data
		for (j=0; j<25; j++)
		{
			ref_data_s >> ref_data;
			difference = fabs(ref_data - (float)test_data[j]);
			MSE += difference*difference;

			if (difference > max_difference)
			{
				max_difference = difference;

				if(max_difference > 0.01)
				{
					//print i and j, the ref val and test val
					std::cout << i;
					std::cout << "\t" ;
					std::cout << j ;
					std::cout << "\t" ;
					std::cout <<  ref_data;
					std::cout << "\t" ;
					std::cout <<  (float)test_data[j];
					std::cout << std::endl ;
				}

			}


		}


	}

	MSE = MSE / float(5000);
	std::cout << std::endl << "maximum error = " << max_difference << std::endl;
	std::cout << std::endl << "mean-squared error = " << MSE << std::endl;

	ref_data_s.close();
}

void layer1_error(void)
{
	float epsilon = 0.001; //max error target.
	float difference = 0;
	float max_difference = 0;
	float MSE = 0;
	float floating_point_tmp;
	float ref_data;

	std::ifstream input_data_s;
	std::ifstream weights_data_s;
	std::ifstream ref_data_s;

	input_t input_data[400];
	weights_L1_t L1_weights[25][401];
	//sigmoid_t ref_data[25]; /dont want to do this, want to compare against unquantized data
	L1_out_t test_data[25];

	unsigned int i, j, k;

	//read in weights.
	//read in the weights L1
	weights_data_s.open(WEIGHTS_L1_FILENAME);
	for (i=0; i<25; i++)
	{
		for (j=0; j<401; j++)
		{
			weights_data_s >> floating_point_tmp;
			L1_weights[i][j] =  floating_point_tmp;
		}
	}
	weights_data_s.close();

	ref_data_s.open(L1_FILENAME);

	//run through the input data
	for(i=0; i<5000; i++)
	{
		//get network input.
		for (j=0; j<400; j++)
		{
			input_data_s >> floating_point_tmp;
			input_data[j] =  floating_point_tmp;
		}


		//call function.
		Layer1_noactiv(L1_weights, input_data, test_data);

		//compare the reference and test data
		for (j=0; j<25; j++)
		{
			ref_data_s >> ref_data;
			difference = fabs(ref_data - (float)test_data[j]);
			MSE += difference*difference;

			if (difference > max_difference)
			{
				max_difference = difference;

				if(max_difference > 0.01)
				{
					//print i and j, the ref val and test val
					std::cout << i;
					std::cout << "\t" ;
					std::cout << j ;
					std::cout << "\t" ;
					std::cout <<  ref_data;
					std::cout << "\t" ;
					std::cout <<  (float)test_data[j];
					std::cout << std::endl ;
				}

			}


		}


	}

	MSE = MSE / float(5000);
	std::cout << std::endl << "maximum error = " << max_difference << std::endl;
	std::cout << std::endl << "mean-squared error = " << MSE << std::endl;

	ref_data_s.close();
}
