################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F3xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
UART\ Communication.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
UART\ Communication.list \

OBJCOPY_BIN += \
UART\ Communication.bin \


# All Target
all: UART\ Communication.elf secondary-outputs

# Tool invocations
UART\ Communication.elf: $(OBJS) $(USER_OBJS) E:\Zain\STM32\ Programming\UART\ Communication\UART\ Communication\STM32F303VCTX_FLASH.ld
	arm-none-eabi-gcc -o "UART Communication.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"E:\Zain\STM32 Programming\UART Communication\UART Communication\STM32F303VCTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="UART Communication.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

UART\ Communication.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "UART Communication.list"
	@echo 'Finished building: $@'
	@echo ' '

UART\ Communication.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "UART Communication.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
