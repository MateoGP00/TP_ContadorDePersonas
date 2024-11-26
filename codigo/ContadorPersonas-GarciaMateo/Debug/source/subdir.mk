################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../source/Aplication.c \
../source/GPIO_FW.c \
../source/GPIO_SW.c \
../source/SYSCON_FW.c \
../source/SwitchMatrix_FW.c \
../source/SysTick_FW.c \
../source/estados.c \
../source/funciones.c \
../source/main.c \
../source/mtb.c \
../source/semihost_hardfault.c 

C_DEPS += \
./source/Aplication.d \
./source/GPIO_FW.d \
./source/GPIO_SW.d \
./source/SYSCON_FW.d \
./source/SwitchMatrix_FW.d \
./source/SysTick_FW.d \
./source/estados.d \
./source/funciones.d \
./source/main.d \
./source/mtb.d \
./source/semihost_hardfault.d 

OBJS += \
./source/Aplication.o \
./source/GPIO_FW.o \
./source/GPIO_SW.o \
./source/SYSCON_FW.o \
./source/SwitchMatrix_FW.o \
./source/SysTick_FW.o \
./source/estados.o \
./source/funciones.o \
./source/main.o \
./source/mtb.o \
./source/semihost_hardfault.o 


# Each subdirectory must supply rules for building sources it contributes
source/%.o: ../source/%.c source/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DCPU_LPC845M301JBD48 -DCPU_LPC845M301JBD48_cm0plus -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=1 -D__MCUXPRESSO -DDEBUG -I"C:\Users\mjgpi\Downloads\04-Display7Seg\source" -I"C:\Users\mjgpi\Downloads\04-Display7Seg" -I"C:\Users\mjgpi\Downloads\04-Display7Seg\inc" -O0 -fno-common -g3 -gdwarf-4 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m0plus -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-source

clean-source:
	-$(RM) ./source/Aplication.d ./source/Aplication.o ./source/GPIO_FW.d ./source/GPIO_FW.o ./source/GPIO_SW.d ./source/GPIO_SW.o ./source/SYSCON_FW.d ./source/SYSCON_FW.o ./source/SwitchMatrix_FW.d ./source/SwitchMatrix_FW.o ./source/SysTick_FW.d ./source/SysTick_FW.o ./source/estados.d ./source/estados.o ./source/funciones.d ./source/funciones.o ./source/main.d ./source/main.o ./source/mtb.d ./source/mtb.o ./source/semihost_hardfault.d ./source/semihost_hardfault.o

.PHONY: clean-source

