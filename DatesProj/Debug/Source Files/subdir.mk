################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Source\ Files/Date.cpp 

OBJS += \
./Source\ Files/Date.o 

CPP_DEPS += \
./Source\ Files/Date.d 


# Each subdirectory must supply rules for building sources it contributes
Source\ Files/Date.o: ../Source\ Files/Date.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Source Files/Date.d" -MT"Source\ Files/Date.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


