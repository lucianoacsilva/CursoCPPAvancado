################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CustomExceptions/CustomExceptions.cpp 

OBJS += \
./src/CustomExceptions/CustomExceptions.o 

CPP_DEPS += \
./src/CustomExceptions/CustomExceptions.d 


# Each subdirectory must supply rules for building sources it contributes
src/CustomExceptions/%.o: ../src/CustomExceptions/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


