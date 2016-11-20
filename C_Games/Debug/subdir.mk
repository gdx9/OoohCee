################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../abstractClass.cpp \
../arrayChanger.cpp \
../critterCaretaker.cpp \
../critterFarm.cpp \
../friendCritter.cpp \
../guess_number_game.cpp \
../hangman.cpp \
../heap.cpp \
../heapDataMember.cpp \
../hs.cpp \
../inlineDemo.cpp \
../iterateVector.cpp \
../linksTry.cpp \
../newscope.cpp \
../onePlayerXOGame.cpp \
../overloading.cpp \
../pointerFunc.cpp \
../remClasses2.cpp \
../rememberClasses.cpp \
../show_board.cpp \
../simleChildOverride.cpp \
../simpleChild.cpp \
../simpleChild2.cpp \
../simpleChildPolym.cpp \
../staticClass.cpp \
../string_tester.cpp \
../swapBetter.cpp \
../swapInt.cpp \
../vector_iterator.cpp \
../words.cpp 

OBJS += \
./abstractClass.o \
./arrayChanger.o \
./critterCaretaker.o \
./critterFarm.o \
./friendCritter.o \
./guess_number_game.o \
./hangman.o \
./heap.o \
./heapDataMember.o \
./hs.o \
./inlineDemo.o \
./iterateVector.o \
./linksTry.o \
./newscope.o \
./onePlayerXOGame.o \
./overloading.o \
./pointerFunc.o \
./remClasses2.o \
./rememberClasses.o \
./show_board.o \
./simleChildOverride.o \
./simpleChild.o \
./simpleChild2.o \
./simpleChildPolym.o \
./staticClass.o \
./string_tester.o \
./swapBetter.o \
./swapInt.o \
./vector_iterator.o \
./words.o 

CPP_DEPS += \
./abstractClass.d \
./arrayChanger.d \
./critterCaretaker.d \
./critterFarm.d \
./friendCritter.d \
./guess_number_game.d \
./hangman.d \
./heap.d \
./heapDataMember.d \
./hs.d \
./inlineDemo.d \
./iterateVector.d \
./linksTry.d \
./newscope.d \
./onePlayerXOGame.d \
./overloading.d \
./pointerFunc.d \
./remClasses2.d \
./rememberClasses.d \
./show_board.d \
./simleChildOverride.d \
./simpleChild.d \
./simpleChild2.d \
./simpleChildPolym.d \
./staticClass.d \
./string_tester.d \
./swapBetter.d \
./swapInt.d \
./vector_iterator.d \
./words.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++1y -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


