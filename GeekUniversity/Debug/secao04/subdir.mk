################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../secao04/exercicio01.c \
../secao04/exercicio02.c \
../secao04/exercicio03.c \
../secao04/exercicio04.c \
../secao04/exercicio05.c \
../secao04/exercicio06.c \
../secao04/exercicio07.c \
../secao04/exercicio08.c \
../secao04/exercicio09.c \
../secao04/exercicio10.c \
../secao04/exercicio11.c \
../secao04/exercicio12.c \
../secao04/exercicio13.c \
../secao04/exercicio14.c \
../secao04/exercicio15.c \
../secao04/exercicio16.c \
../secao04/exercicio17.c \
../secao04/exercicio18.c \
../secao04/exercicio19.c \
../secao04/exercicio20.c \
../secao04/exercicio21.c \
../secao04/exercicio22.c \
../secao04/exercicio23.c \
../secao04/exercicio24.c \
../secao04/exercicio25.c \
../secao04/exercicio26.c \
../secao04/exercicio27.c \
../secao04/exercicio28.c \
../secao04/exercicio29.c \
../secao04/exercicio30.c 

OBJS += \
./secao04/exercicio01.o \
./secao04/exercicio02.o \
./secao04/exercicio03.o \
./secao04/exercicio04.o \
./secao04/exercicio05.o \
./secao04/exercicio06.o \
./secao04/exercicio07.o \
./secao04/exercicio08.o \
./secao04/exercicio09.o \
./secao04/exercicio10.o \
./secao04/exercicio11.o \
./secao04/exercicio12.o \
./secao04/exercicio13.o \
./secao04/exercicio14.o \
./secao04/exercicio15.o \
./secao04/exercicio16.o \
./secao04/exercicio17.o \
./secao04/exercicio18.o \
./secao04/exercicio19.o \
./secao04/exercicio20.o \
./secao04/exercicio21.o \
./secao04/exercicio22.o \
./secao04/exercicio23.o \
./secao04/exercicio24.o \
./secao04/exercicio25.o \
./secao04/exercicio26.o \
./secao04/exercicio27.o \
./secao04/exercicio28.o \
./secao04/exercicio29.o \
./secao04/exercicio30.o 

C_DEPS += \
./secao04/exercicio01.d \
./secao04/exercicio02.d \
./secao04/exercicio03.d \
./secao04/exercicio04.d \
./secao04/exercicio05.d \
./secao04/exercicio06.d \
./secao04/exercicio07.d \
./secao04/exercicio08.d \
./secao04/exercicio09.d \
./secao04/exercicio10.d \
./secao04/exercicio11.d \
./secao04/exercicio12.d \
./secao04/exercicio13.d \
./secao04/exercicio14.d \
./secao04/exercicio15.d \
./secao04/exercicio16.d \
./secao04/exercicio17.d \
./secao04/exercicio18.d \
./secao04/exercicio19.d \
./secao04/exercicio20.d \
./secao04/exercicio21.d \
./secao04/exercicio22.d \
./secao04/exercicio23.d \
./secao04/exercicio24.d \
./secao04/exercicio25.d \
./secao04/exercicio26.d \
./secao04/exercicio27.d \
./secao04/exercicio28.d \
./secao04/exercicio29.d \
./secao04/exercicio30.d 


# Each subdirectory must supply rules for building sources it contributes
secao04/%.o: ../secao04/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


