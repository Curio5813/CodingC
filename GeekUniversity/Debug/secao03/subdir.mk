################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../secao03/exercicio01.c \
../secao03/exercicio02.c \
../secao03/exercicio03.c \
../secao03/exercicio04.c \
../secao03/exercicio05.c \
../secao03/exercicio06.c \
../secao03/exercicio07.c \
../secao03/exercicio08.c \
../secao03/exercicio09.c \
../secao03/exercicio10.c \
../secao03/exercicio11.c \
../secao03/exercicio12.c \
../secao03/exercicio13.c \
../secao03/exercicio14.c \
../secao03/exercicio15.c \
../secao03/exercicio16.c \
../secao03/exercicio17.c \
../secao03/exercicio18.c \
../secao03/exercicio19.c \
../secao03/exercicio20.c \
../secao03/exercicio21.c \
../secao03/exercicio22.c \
../secao03/exercicio23.c \
../secao03/exercicio24.c \
../secao03/exercicio25.c \
../secao03/exercicio26.c \
../secao03/exercicio27.c \
../secao03/exercicio28.c \
../secao03/exercicio29.c \
../secao03/exercicio30.c \
../secao03/exercicio31.c \
../secao03/exercicio32.c \
../secao03/exercicio33.c \
../secao03/exercicio34.c \
../secao03/exercicio35.c \
../secao03/exercicio36.c \
../secao03/exercicio37.c \
../secao03/exercicio38.c \
../secao03/exercicio39.c \
../secao03/exercicio40.c \
../secao03/exercicio41.c \
../secao03/exercicio42.c \
../secao03/exercicio43.c \
../secao03/exercicio44.c \
../secao03/exercicio45.c \
../secao03/exercicio46.c \
../secao03/exercicio47.c \
../secao03/exercicio48.c \
../secao03/exercicio49.c \
../secao03/exercicio50.c \
../secao03/exercicio51.c \
../secao03/exercicio52.c \
../secao03/exercicio53.c 

OBJS += \
./secao03/exercicio01.o \
./secao03/exercicio02.o \
./secao03/exercicio03.o \
./secao03/exercicio04.o \
./secao03/exercicio05.o \
./secao03/exercicio06.o \
./secao03/exercicio07.o \
./secao03/exercicio08.o \
./secao03/exercicio09.o \
./secao03/exercicio10.o \
./secao03/exercicio11.o \
./secao03/exercicio12.o \
./secao03/exercicio13.o \
./secao03/exercicio14.o \
./secao03/exercicio15.o \
./secao03/exercicio16.o \
./secao03/exercicio17.o \
./secao03/exercicio18.o \
./secao03/exercicio19.o \
./secao03/exercicio20.o \
./secao03/exercicio21.o \
./secao03/exercicio22.o \
./secao03/exercicio23.o \
./secao03/exercicio24.o \
./secao03/exercicio25.o \
./secao03/exercicio26.o \
./secao03/exercicio27.o \
./secao03/exercicio28.o \
./secao03/exercicio29.o \
./secao03/exercicio30.o \
./secao03/exercicio31.o \
./secao03/exercicio32.o \
./secao03/exercicio33.o \
./secao03/exercicio34.o \
./secao03/exercicio35.o \
./secao03/exercicio36.o \
./secao03/exercicio37.o \
./secao03/exercicio38.o \
./secao03/exercicio39.o \
./secao03/exercicio40.o \
./secao03/exercicio41.o \
./secao03/exercicio42.o \
./secao03/exercicio43.o \
./secao03/exercicio44.o \
./secao03/exercicio45.o \
./secao03/exercicio46.o \
./secao03/exercicio47.o \
./secao03/exercicio48.o \
./secao03/exercicio49.o \
./secao03/exercicio50.o \
./secao03/exercicio51.o \
./secao03/exercicio52.o \
./secao03/exercicio53.o 

C_DEPS += \
./secao03/exercicio01.d \
./secao03/exercicio02.d \
./secao03/exercicio03.d \
./secao03/exercicio04.d \
./secao03/exercicio05.d \
./secao03/exercicio06.d \
./secao03/exercicio07.d \
./secao03/exercicio08.d \
./secao03/exercicio09.d \
./secao03/exercicio10.d \
./secao03/exercicio11.d \
./secao03/exercicio12.d \
./secao03/exercicio13.d \
./secao03/exercicio14.d \
./secao03/exercicio15.d \
./secao03/exercicio16.d \
./secao03/exercicio17.d \
./secao03/exercicio18.d \
./secao03/exercicio19.d \
./secao03/exercicio20.d \
./secao03/exercicio21.d \
./secao03/exercicio22.d \
./secao03/exercicio23.d \
./secao03/exercicio24.d \
./secao03/exercicio25.d \
./secao03/exercicio26.d \
./secao03/exercicio27.d \
./secao03/exercicio28.d \
./secao03/exercicio29.d \
./secao03/exercicio30.d \
./secao03/exercicio31.d \
./secao03/exercicio32.d \
./secao03/exercicio33.d \
./secao03/exercicio34.d \
./secao03/exercicio35.d \
./secao03/exercicio36.d \
./secao03/exercicio37.d \
./secao03/exercicio38.d \
./secao03/exercicio39.d \
./secao03/exercicio40.d \
./secao03/exercicio41.d \
./secao03/exercicio42.d \
./secao03/exercicio43.d \
./secao03/exercicio44.d \
./secao03/exercicio45.d \
./secao03/exercicio46.d \
./secao03/exercicio47.d \
./secao03/exercicio48.d \
./secao03/exercicio49.d \
./secao03/exercicio50.d \
./secao03/exercicio51.d \
./secao03/exercicio52.d \
./secao03/exercicio53.d 


# Each subdirectory must supply rules for building sources it contributes
secao03/%.o: ../secao03/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


