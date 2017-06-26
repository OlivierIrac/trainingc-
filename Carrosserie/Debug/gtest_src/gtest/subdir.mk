################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../gtest_src/gtest/gtest-all.cc 

CC_DEPS += \
./gtest_src/gtest/gtest-all.d 

OBJS += \
./gtest_src/gtest/gtest-all.o 


# Each subdirectory must supply rules for building sources it contributes
gtest_src/gtest/%.o: ../gtest_src/gtest/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -std=gnu++1y -I"C:\Users\irac1\workspace\unit_test.zip_expanded\unit_test\gtest_src" -I"C:\Users\irac1\workspace\unit_test.zip_expanded\unit_test\src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


