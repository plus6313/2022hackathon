################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/NXP/GUI-Guider-Projects/plant/sdk/Core/lvgl/lvgl/src/extra/others/monkey/lv_monkey.c 

C_DEPS += \
./lvgl/lvgl/src/extra/others/monkey/lv_monkey.d 

OBJS += \
./lvgl/lvgl/src/extra/others/monkey/lv_monkey.o 


# Each subdirectory must supply rules for building sources it contributes
lvgl/lvgl/src/extra/others/monkey/lv_monkey.o: C:/NXP/GUI-Guider-Projects/plant/sdk/Core/lvgl/lvgl/src/extra/others/monkey/lv_monkey.c lvgl/lvgl/src/extra/others/monkey/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -DCPU_MIMXRT1062DVL6A -DCPU_MIMXRT1062DVL6A_cm7 -DXIP_BOOT_HEADER_DCD_ENABLE=1 -DSKIP_SYSCLK_INIT -DDATA_SECTION_IS_CACHEABLE=1 -DSDK_DEBUGCONSOLE=1 -DXIP_EXTERNAL_FLASH=1 -DXIP_BOOT_HEADER_ENABLE=1 -DFSL_SDK_DRIVER_QUICK_ACCESS_ENABLE=1 -DLV_CONF_INCLUDE_SIMPLE=1 -DSDK_I2C_BASED_COMPONENT_USED=1 -DSERIAL_PORT_TYPE_UART=1 -DSDK_OS_FREE_RTOS -DMCUXPRESSO_SDK -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__NEWLIB__ -I"C:\NXP\GUI-Guider-Projects\plant\sdk\Core\board" -I"C:\NXP\GUI-Guider-Projects\plant\sdk\Core\source" -I"C:\NXP\GUI-Guider-Projects\plant\sdk\Core\drivers" -I"C:\NXP\GUI-Guider-Projects\plant\sdk\Core\touchpanel" -I"C:\NXP\GUI-Guider-Projects\plant\sdk\Core\video" -I"C:\NXP\GUI-Guider-Projects\plant\sdk\Core\lvgl\lvgl" -I"C:\NXP\GUI-Guider-Projects\plant\sdk\Core\lvgl\lvgl\src" -I"C:\NXP\GUI-Guider-Projects\plant\sdk\Core\lvgl\lvgl\src\font" -I"C:\NXP\GUI-Guider-Projects\plant\sdk\Core\lvgl" -I"C:\NXP\GUI-Guider-Projects\plant\sdk\Core\device" -I"C:\NXP\GUI-Guider-Projects\plant\sdk\Core\utilities" -I"C:\NXP\GUI-Guider-Projects\plant\sdk\Core\component\uart" -I"C:\NXP\GUI-Guider-Projects\plant\sdk\Core\component\serial_manager" -I"C:\NXP\GUI-Guider-Projects\plant\sdk\Core\component\lists" -I"C:\NXP\GUI-Guider-Projects\plant\sdk\Core\xip" -I"C:\NXP\GUI-Guider-Projects\plant\sdk\Core\component\silicon_id" -I"C:\NXP\GUI-Guider-Projects\plant\sdk\Core\CMSIS" -I"C:\NXP\GUI-Guider-Projects\plant\sdk\Core\freertos\freertos_kernel\include" -I"C:\NXP\GUI-Guider-Projects\plant\sdk\Core\freertos\freertos_kernel\portable\GCC\ARM_CM4F" -I"C:\NXP\GUI-Guider-Projects\plant\generated" -I"C:\NXP\GUI-Guider-Projects\plant\custom" -I"C:\NXP\GUI-Guider-Projects\plant\generated\guider_customer_fonts" -I"C:\NXP\GUI-Guider-Projects\plant\generated\guider_fonts" -O0 -fno-common -g3 -Wno-format -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m7 -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-lvgl-2f-lvgl-2f-src-2f-extra-2f-others-2f-monkey

clean-lvgl-2f-lvgl-2f-src-2f-extra-2f-others-2f-monkey:
	-$(RM) ./lvgl/lvgl/src/extra/others/monkey/lv_monkey.d ./lvgl/lvgl/src/extra/others/monkey/lv_monkey.o

.PHONY: clean-lvgl-2f-lvgl-2f-src-2f-extra-2f-others-2f-monkey

