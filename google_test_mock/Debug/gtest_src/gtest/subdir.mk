################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../gtest_src/gtest/gmock-gtest-all.cc 

CC_DEPS += \
./gtest_src/gtest/gmock-gtest-all.d 

OBJS += \
./gtest_src/gtest/gmock-gtest-all.o 


# Each subdirectory must supply rules for building sources it contributes
gtest_src/gtest/%.o: ../gtest_src/gtest/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -std=gnu++1y -I"C:\Users\irac1\workspace\google_test_mock.zip_expanded\google_test_mock\gtest_src" -I"C:\Users\irac1\workspace\google_test_mock.zip_expanded\google_test_mock\src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


