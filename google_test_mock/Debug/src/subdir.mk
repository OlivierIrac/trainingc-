################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Hello.cpp \
../src/InterfaceQueueMessages.cpp \
../src/MessageValidator.cpp 

OBJS += \
./src/Hello.o \
./src/InterfaceQueueMessages.o \
./src/MessageValidator.o 

CPP_DEPS += \
./src/Hello.d \
./src/InterfaceQueueMessages.d \
./src/MessageValidator.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -std=gnu++1y -I"C:\Users\irac1\workspace\google_test_mock.zip_expanded\google_test_mock\gtest_src" -I"C:\Users\irac1\workspace\google_test_mock.zip_expanded\google_test_mock\src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


