################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/src/tb_mlp.cpp 

OBJS += \
./testbench/tb_mlp.o 

CPP_DEPS += \
./testbench/tb_mlp.d 


# Each subdirectory must supply rules for building sources it contributes
testbench/tb_mlp.o: C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/src/tb_mlp.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DAESL_TB -D__llvm__ -D__llvm__ -IA:/Xilinx/Vivado/2018.2/include -IA:/Xilinx/Vivado/2018.2/win64/tools/auto_cc/include -IA:/Xilinx/Vivado/2018.2/win64/tools/systemc/include -IA:/Xilinx/Vivado/2018.2/include/etc -IC:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl -IA:/Xilinx/Vivado/2018.2/include/ap_sysc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


