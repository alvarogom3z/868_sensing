################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include gecko_sdk_4.1.3/util/third_party/printf/src/subdir.mk
-include gecko_sdk_4.1.3/util/third_party/printf/subdir.mk
-include gecko_sdk_4.1.3/platform/service/udelay/src/subdir.mk
-include gecko_sdk_4.1.3/platform/service/system/src/subdir.mk
-include gecko_sdk_4.1.3/platform/service/sleeptimer/src/subdir.mk
-include gecko_sdk_4.1.3/platform/service/mpu/src/subdir.mk
-include gecko_sdk_4.1.3/platform/service/iostream/src/subdir.mk
-include gecko_sdk_4.1.3/platform/service/device_init/src/subdir.mk
-include gecko_sdk_4.1.3/platform/service/cli/src/subdir.mk
-include gecko_sdk_4.1.3/platform/radio/rail_lib/plugin/rail_util_rssi/subdir.mk
-include gecko_sdk_4.1.3/platform/radio/rail_lib/plugin/rail_util_pti/subdir.mk
-include gecko_sdk_4.1.3/platform/radio/rail_lib/plugin/rail_util_protocol/subdir.mk
-include gecko_sdk_4.1.3/platform/radio/rail_lib/plugin/pa-conversions/subdir.mk
-include gecko_sdk_4.1.3/platform/middleware/glib/glib/subdir.mk
-include gecko_sdk_4.1.3/platform/middleware/glib/dmd/display/subdir.mk
-include gecko_sdk_4.1.3/platform/emlib/src/subdir.mk
-include gecko_sdk_4.1.3/platform/emdrv/gpiointerrupt/src/subdir.mk
-include gecko_sdk_4.1.3/platform/driver/debug/src/subdir.mk
-include gecko_sdk_4.1.3/platform/driver/button/src/subdir.mk
-include gecko_sdk_4.1.3/platform/common/toolchain/src/subdir.mk
-include gecko_sdk_4.1.3/platform/common/src/subdir.mk
-include gecko_sdk_4.1.3/platform/Device/SiliconLabs/EFR32FG14P/Source/subdir.mk
-include gecko_sdk_4.1.3/hardware/driver/mx25_flash_shutdown/src/sl_mx25_flash_shutdown_usart/subdir.mk
-include gecko_sdk_4.1.3/hardware/driver/memlcd/src/memlcd_usart/subdir.mk
-include gecko_sdk_4.1.3/hardware/driver/memlcd/src/subdir.mk
-include gecko_sdk_4.1.3/hardware/driver/configuration_over_swo/src/subdir.mk
-include gecko_sdk_4.1.3/hardware/board/src/subdir.mk
-include gecko_sdk_4.1.3/app/flex/component/rail/sl_range_test_core/subdir.mk
-include gecko_sdk_4.1.3/app/flex/component/rail/sl_range_test_cli/subdir.mk
-include gecko_sdk_4.1.3/app/flex/component/rail/sl_flex_rail_packet_asm/subdir.mk
-include gecko_sdk_4.1.3/app/common/util/app_log/subdir.mk
-include autogen/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := rail_soc_range_test
BUILD_ARTIFACT_EXTENSION := axf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: main-build

# Main-build Target
main-build: rail_soc_range_test.axf

# Tool invocations
rail_soc_range_test.axf: $(OBJS) $(USER_OBJS) makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m4 -mthumb -T "C:\Users\Alvaro\Desktop\Securitas Direct\sensing\rail_soc_range_test\autogen\linkerfile.ld" -Xlinker --gc-sections -Xlinker -Map="rail_soc_range_test.map" -mfpu=fpv4-sp-d16 -mfloat-abi=softfp --specs=nano.specs -o rail_soc_range_test.axf -Wl,--start-group "./autogen/rail_config.o" "./autogen/sl_board_default_init.o" "./autogen/sl_cli_command_table.o" "./autogen/sl_cli_instances.o" "./autogen/sl_device_init_clocks.o" "./autogen/sl_event_handler.o" "./autogen/sl_iostream_handles.o" "./autogen/sl_iostream_init_usart_instances.o" "./autogen/sl_rail_util_callbacks.o" "./autogen/sl_rail_util_init.o" "./autogen/sl_simple_button_instances.o" "./autogen/sli_cli_hooks.o" "./gecko_sdk_4.1.3/app/common/util/app_log/app_log.o" "./gecko_sdk_4.1.3/app/flex/component/rail/sl_flex_rail_packet_asm/sl_flex_packet_asm.o" "./gecko_sdk_4.1.3/app/flex/component/rail/sl_range_test_cli/range_test_cli.o" "./gecko_sdk_4.1.3/app/flex/component/rail/sl_range_test_core/app_button.o" "./gecko_sdk_4.1.3/app/flex/component/rail/sl_range_test_core/app_graphics.o" "./gecko_sdk_4.1.3/app/flex/component/rail/sl_range_test_core/app_init.o" "./gecko_sdk_4.1.3/app/flex/component/rail/sl_range_test_core/app_measurement.o" "./gecko_sdk_4.1.3/app/flex/component/rail/sl_range_test_core/app_menu.o" "./gecko_sdk_4.1.3/app/flex/component/rail/sl_range_test_core/app_process.o" "./gecko_sdk_4.1.3/hardware/board/src/sl_board_control_gpio.o" "./gecko_sdk_4.1.3/hardware/board/src/sl_board_init.o" "./gecko_sdk_4.1.3/hardware/driver/configuration_over_swo/src/sl_cos.o" "./gecko_sdk_4.1.3/hardware/driver/memlcd/src/memlcd_usart/sl_memlcd_spi.o" "./gecko_sdk_4.1.3/hardware/driver/memlcd/src/sl_memlcd.o" "./gecko_sdk_4.1.3/hardware/driver/memlcd/src/sl_memlcd_display.o" "./gecko_sdk_4.1.3/hardware/driver/mx25_flash_shutdown/src/sl_mx25_flash_shutdown_usart/sl_mx25_flash_shutdown.o" "./gecko_sdk_4.1.3/platform/Device/SiliconLabs/EFR32FG14P/Source/startup_efr32fg14p.o" "./gecko_sdk_4.1.3/platform/Device/SiliconLabs/EFR32FG14P/Source/system_efr32fg14p.o" "./gecko_sdk_4.1.3/platform/common/src/sl_assert.o" "./gecko_sdk_4.1.3/platform/common/src/sl_slist.o" "./gecko_sdk_4.1.3/platform/common/src/sl_string.o" "./gecko_sdk_4.1.3/platform/common/toolchain/src/sl_memory.o" "./gecko_sdk_4.1.3/platform/driver/button/src/sl_button.o" "./gecko_sdk_4.1.3/platform/driver/button/src/sl_simple_button.o" "./gecko_sdk_4.1.3/platform/driver/debug/src/sl_debug_swo.o" "./gecko_sdk_4.1.3/platform/emdrv/gpiointerrupt/src/gpiointerrupt.o" "./gecko_sdk_4.1.3/platform/emlib/src/em_cmu.o" "./gecko_sdk_4.1.3/platform/emlib/src/em_core.o" "./gecko_sdk_4.1.3/platform/emlib/src/em_emu.o" "./gecko_sdk_4.1.3/platform/emlib/src/em_gpio.o" "./gecko_sdk_4.1.3/platform/emlib/src/em_msc.o" "./gecko_sdk_4.1.3/platform/emlib/src/em_prs.o" "./gecko_sdk_4.1.3/platform/emlib/src/em_rtcc.o" "./gecko_sdk_4.1.3/platform/emlib/src/em_system.o" "./gecko_sdk_4.1.3/platform/emlib/src/em_usart.o" "./gecko_sdk_4.1.3/platform/middleware/glib/dmd/display/dmd_memlcd.o" "./gecko_sdk_4.1.3/platform/middleware/glib/glib/bmp.o" "./gecko_sdk_4.1.3/platform/middleware/glib/glib/glib.o" "./gecko_sdk_4.1.3/platform/middleware/glib/glib/glib_bitmap.o" "./gecko_sdk_4.1.3/platform/middleware/glib/glib/glib_circle.o" "./gecko_sdk_4.1.3/platform/middleware/glib/glib/glib_font_narrow_6x8.o" "./gecko_sdk_4.1.3/platform/middleware/glib/glib/glib_font_normal_8x8.o" "./gecko_sdk_4.1.3/platform/middleware/glib/glib/glib_font_number_16x20.o" "./gecko_sdk_4.1.3/platform/middleware/glib/glib/glib_line.o" "./gecko_sdk_4.1.3/platform/middleware/glib/glib/glib_polygon.o" "./gecko_sdk_4.1.3/platform/middleware/glib/glib/glib_rectangle.o" "./gecko_sdk_4.1.3/platform/middleware/glib/glib/glib_string.o" "./gecko_sdk_4.1.3/platform/radio/rail_lib/plugin/pa-conversions/pa_conversions_efr32.o" "./gecko_sdk_4.1.3/platform/radio/rail_lib/plugin/pa-conversions/pa_curves_efr32.o" "./gecko_sdk_4.1.3/platform/radio/rail_lib/plugin/rail_util_protocol/sl_rail_util_protocol.o" "./gecko_sdk_4.1.3/platform/radio/rail_lib/plugin/rail_util_pti/sl_rail_util_pti.o" "./gecko_sdk_4.1.3/platform/radio/rail_lib/plugin/rail_util_rssi/sl_rail_util_rssi.o" "./gecko_sdk_4.1.3/platform/service/cli/src/sl_cli.o" "./gecko_sdk_4.1.3/platform/service/cli/src/sl_cli_arguments.o" "./gecko_sdk_4.1.3/platform/service/cli/src/sl_cli_command.o" "./gecko_sdk_4.1.3/platform/service/cli/src/sl_cli_input.o" "./gecko_sdk_4.1.3/platform/service/cli/src/sl_cli_io.o" "./gecko_sdk_4.1.3/platform/service/cli/src/sl_cli_tokenize.o" "./gecko_sdk_4.1.3/platform/service/device_init/src/sl_device_init_dcdc_s1.o" "./gecko_sdk_4.1.3/platform/service/device_init/src/sl_device_init_emu_s1.o" "./gecko_sdk_4.1.3/platform/service/device_init/src/sl_device_init_hfxo_s1.o" "./gecko_sdk_4.1.3/platform/service/device_init/src/sl_device_init_lfxo_s1.o" "./gecko_sdk_4.1.3/platform/service/device_init/src/sl_device_init_nvic.o" "./gecko_sdk_4.1.3/platform/service/iostream/src/sl_iostream.o" "./gecko_sdk_4.1.3/platform/service/iostream/src/sl_iostream_retarget_stdio.o" "./gecko_sdk_4.1.3/platform/service/iostream/src/sl_iostream_stdlib_config.o" "./gecko_sdk_4.1.3/platform/service/iostream/src/sl_iostream_uart.o" "./gecko_sdk_4.1.3/platform/service/iostream/src/sl_iostream_usart.o" "./gecko_sdk_4.1.3/platform/service/mpu/src/sl_mpu.o" "./gecko_sdk_4.1.3/platform/service/sleeptimer/src/sl_sleeptimer.o" "./gecko_sdk_4.1.3/platform/service/sleeptimer/src/sl_sleeptimer_hal_prortc.o" "./gecko_sdk_4.1.3/platform/service/sleeptimer/src/sl_sleeptimer_hal_rtcc.o" "./gecko_sdk_4.1.3/platform/service/system/src/sl_system_init.o" "./gecko_sdk_4.1.3/platform/service/system/src/sl_system_process_action.o" "./gecko_sdk_4.1.3/platform/service/udelay/src/sl_udelay.o" "./gecko_sdk_4.1.3/platform/service/udelay/src/sl_udelay_armv6m_gcc.o" "./gecko_sdk_4.1.3/util/third_party/printf/printf.o" "./gecko_sdk_4.1.3/util/third_party/printf/src/iostream_printf.o" "./main.o" "C:/Users/Alvaro/SimplicityStudio/SDKs/gecko_sdk_2//platform/radio/rail_lib/autogen/librail_release/librail_efr32xg14_gcc_release.a" -lgcc -lc -lm -lnosys -Wl,--end-group -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building hex file: rail_soc_range_test.hex'
	arm-none-eabi-objcopy -O ihex "rail_soc_range_test.axf" "rail_soc_range_test.hex"
	@echo ' '

	@echo 'Building bin file: rail_soc_range_test.bin'
	arm-none-eabi-objcopy -O binary "rail_soc_range_test.axf" "rail_soc_range_test.bin"
	@echo ' '

	@echo 'Building s37 file: rail_soc_range_test.s37'
	arm-none-eabi-objcopy -O srec "rail_soc_range_test.axf" "rail_soc_range_test.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "rail_soc_range_test.axf" -A
	@echo ' '

# Other Targets
clean:
	-@$(foreach FILE, $(EXECUTABLES), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(OBJS), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(C_DEPS), $(shell $(RM) $(FILE)) )
	-$(RM) rail_soc_range_test.axf
	-@echo ' '

.PHONY: all clean dependents main-build

-include ../makefile.targets
