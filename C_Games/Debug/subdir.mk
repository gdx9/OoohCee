################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../guess_number_game.cpp \
../hangman.cpp \
../hs.cpp \
../show_board.cpp \
../string_tester.cpp \
../words.cpp 

OBJS += \
./guess_number_game.o \
./hangman.o \
./hs.o \
./show_board.o \
./string_tester.o \
./words.o 

CPP_DEPS += \
./guess_number_game.d \
./hangman.d \
./hs.d \
./show_board.d \
./string_tester.d \
./words.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++1y -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


