################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../chatdomestique.cpp \
../chatsauvage.cpp \
../felin.cpp \
../main.cpp 

OBJS += \
./chatdomestique.o \
./chatsauvage.o \
./felin.o \
./main.o 

CPP_DEPS += \
./chatdomestique.d \
./chatsauvage.d \
./felin.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -std=c++1y -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


