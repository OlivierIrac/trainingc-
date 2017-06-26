################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../gtest_src/gtest/src/gtest-filepath.cc \
../gtest_src/gtest/src/gtest-printers.cc \
../gtest_src/gtest/src/gtest-typed-test.cc \
../gtest_src/gtest/src/gtest_main.cc 

CC_DEPS += \
./gtest_src/gtest/src/gtest-filepath.d \
./gtest_src/gtest/src/gtest-printers.d \
./gtest_src/gtest/src/gtest-typed-test.d \
./gtest_src/gtest/src/gtest_main.d 

OBJS += \
./gtest_src/gtest/src/gtest-filepath.o \
./gtest_src/gtest/src/gtest-printers.o \
./gtest_src/gtest/src/gtest-typed-test.o \
./gtest_src/gtest/src/gtest_main.o 


# Each subdirectory must supply rules for building sources it contributes
gtest_src/gtest/src/%.o: ../gtest_src/gtest/src/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"C:\Users\mmeinero\Documents\Architecture\LTE-N\workspace\unit_test\gtest_src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


