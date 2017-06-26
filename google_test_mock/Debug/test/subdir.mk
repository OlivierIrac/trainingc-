################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../test/gtest_main.cpp \
../test/test_my_code.cpp 

OBJS += \
./test/gtest_main.o \
./test/test_my_code.o 

CPP_DEPS += \
./test/gtest_main.d \
./test/test_my_code.d 


# Each subdirectory must supply rules for building sources it contributes
test/%.o: ../test/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -std=gnu++1y -I"C:\Users\irac1\workspace\google_test_mock.zip_expanded\google_test_mock\gtest_src" -I"C:\Users\irac1\workspace\google_test_mock.zip_expanded\google_test_mock\src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


