################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Duree.cpp \
../Hello.cpp \
../main.cpp \
../test_duree.cpp 

OBJS += \
./Duree.o \
./Hello.o \
./main.o \
./test_duree.o 

CPP_DEPS += \
./Duree.d \
./Hello.d \
./main.d \
./test_duree.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -std=c++1y -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


