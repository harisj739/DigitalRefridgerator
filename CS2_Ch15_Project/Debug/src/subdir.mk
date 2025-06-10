################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Ch15_Project.cpp \
../src/Dairy.cpp \
../src/Date.cpp \
../src/Food.cpp \
../src/Fruit.cpp \
../src/Vegetable.cpp 

OBJS += \
./src/Ch15_Project.o \
./src/Dairy.o \
./src/Date.o \
./src/Food.o \
./src/Fruit.o \
./src/Vegetable.o 

CPP_DEPS += \
./src/Ch15_Project.d \
./src/Dairy.d \
./src/Date.d \
./src/Food.d \
./src/Fruit.d \
./src/Vegetable.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


