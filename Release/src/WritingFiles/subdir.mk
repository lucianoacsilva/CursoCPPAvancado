################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/WritingFiles/WritingFiles.cpp 

OBJS += \
./src/WritingFiles/WritingFiles.o 

CPP_DEPS += \
./src/WritingFiles/WritingFiles.d 


# Each subdirectory must supply rules for building sources it contributes
src/WritingFiles/%.o: ../src/WritingFiles/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


