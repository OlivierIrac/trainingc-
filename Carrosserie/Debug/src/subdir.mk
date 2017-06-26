################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/carrosserie.cpp \
../src/concession.cpp \
../src/moto.cpp \
../src/vehicule.cpp \
../src/voiture.cpp 

OBJS += \
./src/carrosserie.o \
./src/concession.o \
./src/moto.o \
./src/vehicule.o \
./src/voiture.o 

CPP_DEPS += \
./src/carrosserie.d \
./src/concession.d \
./src/moto.d \
./src/vehicule.d \
./src/voiture.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -std=gnu++1y -I"C:\Users\irac1\workspace\unit_test.zip_expanded\unit_test\gtest_src" -I"C:\Users\irac1\workspace\unit_test.zip_expanded\unit_test\src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


