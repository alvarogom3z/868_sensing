################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2/hardware/driver/configuration_over_swo/src/sl_cos.c 

OBJS += \
./gecko_sdk_4.1.3/hardware/driver/configuration_over_swo/src/sl_cos.o 

C_DEPS += \
./gecko_sdk_4.1.3/hardware/driver/configuration_over_swo/src/sl_cos.d 


# Each subdirectory must supply rules for building sources it contributes
gecko_sdk_4.1.3/hardware/driver/configuration_over_swo/src/sl_cos.o: C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2/hardware/driver/configuration_over_swo/src/sl_cos.c gecko_sdk_4.1.3/hardware/driver/configuration_over_swo/src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m4 -mthumb -std=c99 '-DEFR32FG14P233F256GM48=1' '-DSL_BOARD_NAME="BRD4257B"' '-DSL_BOARD_REV="A01"' '-DSL_COMPONENT_CATALOG_PRESENT=1' '-DSL_RAIL_LIB_MULTIPROTOCOL_SUPPORT=0' '-DSL_RAIL_UTIL_PA_CONFIG_HEADER=<sl_rail_util_pa_config.h>' -I"C:\Users\Alvaro\Desktop\Securitas Direct\sensing\rail_soc_range_test\config" -I"C:\Users\Alvaro\Desktop\Securitas Direct\sensing\rail_soc_range_test\config\rail" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/Device/SiliconLabs/EFR32FG14P/Include" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//app/common/util/app_assert" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//app/common/util/app_log" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/common/inc" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//hardware/board/inc" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/driver/button/inc" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/service/cli/inc" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/service/cli/src" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/CMSIS/Core/Include" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//hardware/driver/configuration_over_swo/inc" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/driver/debug/inc" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/service/device_init/inc" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/middleware/glib/dmd" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/middleware/glib" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/emdrv/common/inc" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/emlib/inc" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/middleware/glib/glib" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/service/iostream/inc" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//hardware/driver/memlcd/src/ls013b7dh03" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//hardware/driver/memlcd/inc" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//hardware/driver/memlcd/inc/memlcd_usart" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/service/mpu/inc" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//hardware/driver/mx25_flash_shutdown/inc/sl_mx25_flash_shutdown_usart" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//util/third_party/printf" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//util/third_party/printf/inc" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/radio/rail_lib/common" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/radio/rail_lib/protocol/ble" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/radio/rail_lib/protocol/ieee802154" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/radio/rail_lib/protocol/zwave" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/radio/rail_lib/chip/efr32/efr32xg1x" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/radio/rail_lib/plugin/rail_util_callbacks" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/radio/rail_lib/plugin/pa-conversions" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/radio/rail_lib/plugin/pa-conversions/efr32xg1x" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/radio/rail_lib/plugin/rail_util_protocol" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/radio/rail_lib/plugin/rail_util_pti" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/radio/rail_lib/plugin/rail_util_rssi" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//app/flex/component/common/sl_flex_images_for_lcd" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//app/flex/component/rail/sl_flex_rail_packet_asm" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/common/toolchain/inc" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//app/flex/component/rail/sl_range_test_core" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/service/system/inc" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/service/sleeptimer/inc" -I"C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/service/udelay/inc" -I"C:\Users\Alvaro\Desktop\Securitas Direct\sensing\rail_soc_range_test\autogen" -Og -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h -mfpu=fpv4-sp-d16 -mfloat-abi=softfp -fno-builtin-printf -fno-builtin-sprintf -c -fmessage-length=0 -MMD -MP -MF"gecko_sdk_4.1.3/hardware/driver/configuration_over_swo/src/sl_cos.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


