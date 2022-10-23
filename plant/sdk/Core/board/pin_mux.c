/*
 * Copyright 2021 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v11.0
processor: MIMXRT1062xxxxA
package_id: MIMXRT1062DVL6A
mcu_data: ksdk2_0
processor_version: 0.11.6
board: MIMXRT1060-EVK
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void) {
    BOARD_InitPins();
    BOARD_InitI2C1Pins();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: L14, peripheral: LPUART1, signal: RX, pin_signal: GPIO_AD_B0_13, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: K14, peripheral: LPUART1, signal: TX, pin_signal: GPIO_AD_B0_12, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: D7, peripheral: LCDIF, signal: lcdif_clk, pin_signal: GPIO_B0_00, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: C8, peripheral: LCDIF, signal: 'lcdif_data, 00', pin_signal: GPIO_B0_04, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: B8, peripheral: LCDIF, signal: 'lcdif_data, 01', pin_signal: GPIO_B0_05, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: A8, peripheral: LCDIF, signal: 'lcdif_data, 02', pin_signal: GPIO_B0_06, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: A9, peripheral: LCDIF, signal: 'lcdif_data, 03', pin_signal: GPIO_B0_07, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: B9, peripheral: LCDIF, signal: 'lcdif_data, 04', pin_signal: GPIO_B0_08, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: C9, peripheral: LCDIF, signal: 'lcdif_data, 05', pin_signal: GPIO_B0_09, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: D9, peripheral: LCDIF, signal: 'lcdif_data, 06', pin_signal: GPIO_B0_10, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: A10, peripheral: LCDIF, signal: 'lcdif_data, 07', pin_signal: GPIO_B0_11, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: C10, peripheral: LCDIF, signal: 'lcdif_data, 08', pin_signal: GPIO_B0_12, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: D10, peripheral: LCDIF, signal: 'lcdif_data, 09', pin_signal: GPIO_B0_13, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: E10, peripheral: LCDIF, signal: 'lcdif_data, 10', pin_signal: GPIO_B0_14, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: E11, peripheral: LCDIF, signal: 'lcdif_data, 11', pin_signal: GPIO_B0_15, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: A11, peripheral: LCDIF, signal: 'lcdif_data, 12', pin_signal: GPIO_B1_00, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: B11, peripheral: LCDIF, signal: 'lcdif_data, 13', pin_signal: GPIO_B1_01, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: C11, peripheral: LCDIF, signal: 'lcdif_data, 14', pin_signal: GPIO_B1_02, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: D11, peripheral: LCDIF, signal: 'lcdif_data, 15', pin_signal: GPIO_B1_03, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: E7, peripheral: LCDIF, signal: lcdif_enable, pin_signal: GPIO_B0_01, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: E8, peripheral: LCDIF, signal: lcdif_hsync, pin_signal: GPIO_B0_02, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: D8, peripheral: LCDIF, signal: lcdif_vsync, pin_signal: GPIO_B0_03, software_input_on: Disable, hysteresis_enable: Enable, pull_up_down_config: Pull_Up_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: B14, peripheral: GPIO2, signal: 'gpio_io, 31', pin_signal: GPIO_B1_15, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: M11, peripheral: GPIO1, signal: 'gpio_io, 02', pin_signal: GPIO_AD_B0_02, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: G10, peripheral: GPIO1, signal: 'gpio_io, 11', pin_signal: GPIO_AD_B0_11, pull_up_down_config: Pull_Down_100K_Ohm, pull_keeper_select: Keeper, drive_strength: R0_6}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);

  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_02_GPIO1_IO02, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_11_GPIO1_IO11, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_12_LPUART1_TX, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_13_LPUART1_RX, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_00_LCD_CLK, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_01_LCD_ENABLE, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_02_LCD_HSYNC, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_03_LCD_VSYNC, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_04_LCD_DATA00, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_05_LCD_DATA01, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_06_LCD_DATA02, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_07_LCD_DATA03, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_08_LCD_DATA04, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_09_LCD_DATA05, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_10_LCD_DATA06, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_11_LCD_DATA07, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_12_LCD_DATA08, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_13_LCD_DATA09, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_14_LCD_DATA10, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_15_LCD_DATA11, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B1_00_LCD_DATA12, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B1_01_LCD_DATA13, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B1_02_LCD_DATA14, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B1_03_LCD_DATA15, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_B1_15_GPIO2_IO31, 0U);
  IOMUXC_GPR->GPR26 = ((IOMUXC_GPR->GPR26 &
    (~(BOARD_INITPINS_IOMUXC_GPR_GPR26_GPIO_MUX1_GPIO_SEL_MASK)))
      | IOMUXC_GPR_GPR26_GPIO_MUX1_GPIO_SEL(0x00U)
    );
  IOMUXC_GPR->GPR27 = ((IOMUXC_GPR->GPR27 &
    (~(BOARD_INITPINS_IOMUXC_GPR_GPR27_GPIO_MUX2_GPIO_SEL_MASK)))
      | IOMUXC_GPR_GPR27_GPIO_MUX2_GPIO_SEL(0x00U)
    );
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B0_02_GPIO1_IO02, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B0_11_GPIO1_IO11, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B0_12_LPUART1_TX, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B0_13_LPUART1_RX, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_00_LCD_CLK, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_01_LCD_ENABLE, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_02_LCD_HSYNC, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_03_LCD_VSYNC, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_04_LCD_DATA00, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_05_LCD_DATA01, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_06_LCD_DATA02, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_07_LCD_DATA03, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_08_LCD_DATA04, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_09_LCD_DATA05, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_10_LCD_DATA06, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_11_LCD_DATA07, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_12_LCD_DATA08, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_13_LCD_DATA09, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_14_LCD_DATA10, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_15_LCD_DATA11, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B1_00_LCD_DATA12, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B1_01_LCD_DATA13, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B1_02_LCD_DATA14, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B1_03_LCD_DATA15, 0x01B0B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B1_15_GPIO2_IO31, 0x10B0U);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitSemcPins:
- options: {coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: C2, peripheral: SEMC, signal: 'ADDR, 00', pin_signal: GPIO_EMC_09, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: G1, peripheral: SEMC, signal: 'ADDR, 01', pin_signal: GPIO_EMC_10, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: G3, peripheral: SEMC, signal: 'ADDR, 02', pin_signal: GPIO_EMC_11, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: H1, peripheral: SEMC, signal: 'ADDR, 03', pin_signal: GPIO_EMC_12, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: A6, peripheral: SEMC, signal: 'ADDR, 04', pin_signal: GPIO_EMC_13, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: B6, peripheral: SEMC, signal: 'ADDR, 05', pin_signal: GPIO_EMC_14, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: B1, peripheral: SEMC, signal: 'ADDR, 06', pin_signal: GPIO_EMC_15, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: A5, peripheral: SEMC, signal: 'ADDR, 07', pin_signal: GPIO_EMC_16, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: A4, peripheral: SEMC, signal: 'ADDR, 08', pin_signal: GPIO_EMC_17, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: B2, peripheral: SEMC, signal: 'ADDR, 09', pin_signal: GPIO_EMC_18, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: G2, peripheral: SEMC, signal: 'ADDR, 10', pin_signal: GPIO_EMC_23, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: B4, peripheral: SEMC, signal: 'ADDR, 11', pin_signal: GPIO_EMC_19, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: A3, peripheral: SEMC, signal: 'ADDR, 12', pin_signal: GPIO_EMC_20, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: C1, peripheral: SEMC, signal: 'BA, 0', pin_signal: GPIO_EMC_21, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: F1, peripheral: SEMC, signal: 'BA, 1', pin_signal: GPIO_EMC_22, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: D3, peripheral: SEMC, signal: semc_cas, pin_signal: GPIO_EMC_24, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: A2, peripheral: SEMC, signal: semc_cke, pin_signal: GPIO_EMC_27, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: B3, peripheral: SEMC, signal: semc_clk, pin_signal: GPIO_EMC_26, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: E1, peripheral: SEMC, signal: 'CS, 0', pin_signal: GPIO_EMC_29, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: E3, peripheral: SEMC, signal: 'DATA, 00', pin_signal: GPIO_EMC_00, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: F3, peripheral: SEMC, signal: 'DATA, 01', pin_signal: GPIO_EMC_01, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: F4, peripheral: SEMC, signal: 'DATA, 02', pin_signal: GPIO_EMC_02, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: G4, peripheral: SEMC, signal: 'DATA, 03', pin_signal: GPIO_EMC_03, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: F2, peripheral: SEMC, signal: 'DATA, 04', pin_signal: GPIO_EMC_04, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: G5, peripheral: SEMC, signal: 'DATA, 05', pin_signal: GPIO_EMC_05, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: H5, peripheral: SEMC, signal: 'DATA, 06', pin_signal: GPIO_EMC_06, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: H4, peripheral: SEMC, signal: 'DATA, 07', pin_signal: GPIO_EMC_07, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: C6, peripheral: SEMC, signal: 'DATA, 08', pin_signal: GPIO_EMC_30, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: C5, peripheral: SEMC, signal: 'DATA, 09', pin_signal: GPIO_EMC_31, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: D5, peripheral: SEMC, signal: 'DATA, 10', pin_signal: GPIO_EMC_32, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: C4, peripheral: SEMC, signal: 'DATA, 11', pin_signal: GPIO_EMC_33, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: D4, peripheral: SEMC, signal: 'DATA, 12', pin_signal: GPIO_EMC_34, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: E5, peripheral: SEMC, signal: 'DATA, 13', pin_signal: GPIO_EMC_35, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: C3, peripheral: SEMC, signal: 'DATA, 14', pin_signal: GPIO_EMC_36, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: E4, peripheral: SEMC, signal: 'DATA, 15', pin_signal: GPIO_EMC_37, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: H3, peripheral: SEMC, signal: 'DM, 0', pin_signal: GPIO_EMC_08, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: D6, peripheral: SEMC, signal: 'DM, 1', pin_signal: GPIO_EMC_38, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: D2, peripheral: SEMC, signal: semc_ras, pin_signal: GPIO_EMC_25, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: D1, peripheral: SEMC, signal: semc_we, pin_signal: GPIO_EMC_28, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitSemcPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitSemcPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);

  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_00_SEMC_DATA00, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_01_SEMC_DATA01, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_02_SEMC_DATA02, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_03_SEMC_DATA03, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_04_SEMC_DATA04, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_05_SEMC_DATA05, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_06_SEMC_DATA06, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_07_SEMC_DATA07, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_08_SEMC_DM00, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_09_SEMC_ADDR00, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_10_SEMC_ADDR01, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_11_SEMC_ADDR02, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_12_SEMC_ADDR03, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_13_SEMC_ADDR04, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_14_SEMC_ADDR05, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_15_SEMC_ADDR06, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_16_SEMC_ADDR07, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_17_SEMC_ADDR08, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_18_SEMC_ADDR09, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_19_SEMC_ADDR11, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_20_SEMC_ADDR12, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_21_SEMC_BA0, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_22_SEMC_BA1, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_23_SEMC_ADDR10, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_24_SEMC_CAS, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_25_SEMC_RAS, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_26_SEMC_CLK, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_27_SEMC_CKE, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_28_SEMC_WE, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_29_SEMC_CS0, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_30_SEMC_DATA08, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_31_SEMC_DATA09, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_32_SEMC_DATA10, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_33_SEMC_DATA11, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_34_SEMC_DATA12, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_35_SEMC_DATA13, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_36_SEMC_DATA14, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_37_SEMC_DATA15, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_38_SEMC_DM01, 0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_00_SEMC_DATA00, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_01_SEMC_DATA01, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_02_SEMC_DATA02, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_03_SEMC_DATA03, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_04_SEMC_DATA04, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_05_SEMC_DATA05, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_06_SEMC_DATA06, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_07_SEMC_DATA07, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_08_SEMC_DM00, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_09_SEMC_ADDR00, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_10_SEMC_ADDR01, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_11_SEMC_ADDR02, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_12_SEMC_ADDR03, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_13_SEMC_ADDR04, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_14_SEMC_ADDR05, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_15_SEMC_ADDR06, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_16_SEMC_ADDR07, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_17_SEMC_ADDR08, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_18_SEMC_ADDR09, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_19_SEMC_ADDR11, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_20_SEMC_ADDR12, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_21_SEMC_BA0, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_22_SEMC_BA1, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_23_SEMC_ADDR10, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_24_SEMC_CAS, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_25_SEMC_RAS, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_26_SEMC_CLK, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_27_SEMC_CKE, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_28_SEMC_WE, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_29_SEMC_CS0, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_30_SEMC_DATA08, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_31_SEMC_DATA09, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_32_SEMC_DATA10, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_33_SEMC_DATA11, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_34_SEMC_DATA12, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_35_SEMC_DATA13, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_36_SEMC_DATA14, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_37_SEMC_DATA15, 0x10B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_38_SEMC_DM01, 0x10B0U);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitI2C1Pins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: J11, peripheral: LPI2C1, signal: SCL, pin_signal: GPIO_AD_B1_00, software_input_on: Enable, hysteresis_enable: Disable, pull_up_down_config: Pull_Up_22K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Enable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: K11, peripheral: LPI2C1, signal: SDA, pin_signal: GPIO_AD_B1_01, software_input_on: Enable, hysteresis_enable: Disable, pull_up_down_config: Pull_Up_22K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Enable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitI2C1Pins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitI2C1Pins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);

  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B1_00_LPI2C1_SCL, 1U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B1_01_LPI2C1_SDA, 1U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B1_00_LPI2C1_SCL, 0xD8B0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B1_01_LPI2C1_SDA, 0xD8B0U);
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
