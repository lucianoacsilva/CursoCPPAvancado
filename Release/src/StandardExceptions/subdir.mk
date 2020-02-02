################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/StandardExceptions/StandardExecptions.cpp 

OBJS += \
./src/StandardExceptions/StandardExecptions.o 

CPP_DEPS += \
./src/StandardExceptions/StandardExecptions.d 


# Each subdirectory must supply rules for building sources it contributes
src/StandardExceptions/%.o: ../src/StandardExceptions/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


