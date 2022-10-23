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

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define BOARD_INITPINS_IOMUXC_GPR_GPR26_GPIO_MUX1_GPIO_SEL_MASK 0x0804U /*!< GPIO1 and GPIO6 share same IO MUX function, GPIO_MUX1 selects one GPIO function: affected bits mask */
#define BOARD_INITPINS_IOMUXC_GPR_GPR27_GPIO_MUX2_GPIO_SEL_MASK 0x80000000U /*!< GPIO2 and GPIO7 share same IO MUX function, GPIO_MUX2 selects one GPIO function: affected bits mask */

/* GPIO_AD_B0_13 (coord L14), UART1_RXD */
/* Routed pin properties */
#define BOARD_INITPINS_UART1_RXD_PERIPHERAL                              LPUART1   /*!< Peripheral name */
#define BOARD_INITPINS_UART1_RXD_SIGNAL                                       RX   /*!< Signal name */

/* GPIO_AD_B0_12 (coord K14), UART1_TXD */
/* Routed pin properties */
#define BOARD_INITPINS_UART1_TXD_PERIPHERAL                              LPUART1   /*!< Peripheral name */
#define BOARD_INITPINS_UART1_TXD_SIGNAL                                       TX   /*!< Signal name */

/* GPIO_B0_00 (coord D7), LCDIF_CLK */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_CLK_PERIPHERAL                                LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_CLK_SIGNAL                                lcdif_clk   /*!< Signal name */

/* GPIO_B0_04 (coord C8), LCDIF_D0/BT_CFG[0] */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_D0_PERIPHERAL                                 LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_D0_SIGNAL                                lcdif_data   /*!< Signal name */
#define BOARD_INITPINS_LCDIF_D0_CHANNEL                                       0U   /*!< Signal channel */

/* GPIO_B0_05 (coord B8), LCDIF_D1/BT_CFG[1] */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_D1_PERIPHERAL                                 LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_D1_SIGNAL                                lcdif_data   /*!< Signal name */
#define BOARD_INITPINS_LCDIF_D1_CHANNEL                                       1U   /*!< Signal channel */

/* GPIO_B0_06 (coord A8), LCDIF_D2/BT_CFG[2] */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_D2_PERIPHERAL                                 LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_D2_SIGNAL                                lcdif_data   /*!< Signal name */
#define BOARD_INITPINS_LCDIF_D2_CHANNEL                                       2U   /*!< Signal channel */

/* GPIO_B0_07 (coord A9), LCDIF_D3/BT_CFG[3] */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_D3_PERIPHERAL                                 LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_D3_SIGNAL                                lcdif_data   /*!< Signal name */
#define BOARD_INITPINS_LCDIF_D3_CHANNEL                                       3U   /*!< Signal channel */

/* GPIO_B0_08 (coord B9), LCDIF_D4/BT_CFG[4] */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_D4_PERIPHERAL                                 LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_D4_SIGNAL                                lcdif_data   /*!< Signal name */
#define BOARD_INITPINS_LCDIF_D4_CHANNEL                                       4U   /*!< Signal channel */

/* GPIO_B0_09 (coord C9), LCDIF_D5/BT_CFG[5] */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_D5_PERIPHERAL                                 LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_D5_SIGNAL                                lcdif_data   /*!< Signal name */
#define BOARD_INITPINS_LCDIF_D5_CHANNEL                                       5U   /*!< Signal channel */

/* GPIO_B0_10 (coord D9), LCDIF_D6/BT_CFG[6] */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_D6_PERIPHERAL                                 LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_D6_SIGNAL                                lcdif_data   /*!< Signal name */
#define BOARD_INITPINS_LCDIF_D6_CHANNEL                                       6U   /*!< Signal channel */

/* GPIO_B0_11 (coord A10), LCDIF_D7/BT_CFG[7] */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_D7_PERIPHERAL                                 LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_D7_SIGNAL                                lcdif_data   /*!< Signal name */
#define BOARD_INITPINS_LCDIF_D7_CHANNEL                                       7U   /*!< Signal channel */

/* GPIO_B0_12 (coord C10), LCDIF_D8/BT_CFG[8] */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_D8_PERIPHERAL                                 LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_D8_SIGNAL                                lcdif_data   /*!< Signal name */
#define BOARD_INITPINS_LCDIF_D8_CHANNEL                                       8U   /*!< Signal channel */

/* GPIO_B0_13 (coord D10), LCDIF_D9/BT_CFG[9] */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_D9_PERIPHERAL                                 LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_D9_SIGNAL                                lcdif_data   /*!< Signal name */
#define BOARD_INITPINS_LCDIF_D9_CHANNEL                                       9U   /*!< Signal channel */

/* GPIO_B0_14 (coord E10), LCDIF_D10/BT_CFG[10] */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_D10_PERIPHERAL                                LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_D10_SIGNAL                               lcdif_data   /*!< Signal name */
#define BOARD_INITPINS_LCDIF_D10_CHANNEL                                     10U   /*!< Signal channel */

/* GPIO_B0_15 (coord E11), LCDIF_D11/BT_CFG[11] */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_D11_PERIPHERAL                                LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_D11_SIGNAL                               lcdif_data   /*!< Signal name */
#define BOARD_INITPINS_LCDIF_D11_CHANNEL                                     11U   /*!< Signal channel */

/* GPIO_B1_00 (coord A11), LCDIF_D12 */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_D12_PERIPHERAL                                LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_D12_SIGNAL                               lcdif_data   /*!< Signal name */
#define BOARD_INITPINS_LCDIF_D12_CHANNEL                                     12U   /*!< Signal channel */

/* GPIO_B1_01 (coord B11), LCDIF_D13 */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_D13_PERIPHERAL                                LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_D13_SIGNAL                               lcdif_data   /*!< Signal name */
#define BOARD_INITPINS_LCDIF_D13_CHANNEL                                     13U   /*!< Signal channel */

/* GPIO_B1_02 (coord C11), LCDIF_D14 */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_D14_PERIPHERAL                                LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_D14_SIGNAL                               lcdif_data   /*!< Signal name */
#define BOARD_INITPINS_LCDIF_D14_CHANNEL                                     14U   /*!< Signal channel */

/* GPIO_B1_03 (coord D11), LCDIF_D15 */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_D15_PERIPHERAL                                LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_D15_SIGNAL                               lcdif_data   /*!< Signal name */
#define BOARD_INITPINS_LCDIF_D15_CHANNEL                                     15U   /*!< Signal channel */

/* GPIO_B0_01 (coord E7), LCDIF_ENABLE */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_ENABLE_PERIPHERAL                             LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_ENABLE_SIGNAL                          lcdif_enable   /*!< Signal name */

/* GPIO_B0_02 (coord E8), LCDIF_HSYNC */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_HSYNC_PERIPHERAL                              LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_HSYNC_SIGNAL                            lcdif_hsync   /*!< Signal name */

/* GPIO_B0_03 (coord D8), LCDIF_VSYNC */
/* Routed pin properties */
#define BOARD_INITPINS_LCDIF_VSYNC_PERIPHERAL                              LCDIF   /*!< Peripheral name */
#define BOARD_INITPINS_LCDIF_VSYNC_SIGNAL                            lcdif_vsync   /*!< Signal name */

/* GPIO_B1_15 (coord B14), USB_HOST_PWR/BACKLIGHT_CTL */
/* Routed pin properties */
#define BOARD_INITPINS_BACKLIGHT_CTL_PERIPHERAL                            GPIO2   /*!< Peripheral name */
#define BOARD_INITPINS_BACKLIGHT_CTL_SIGNAL                              gpio_io   /*!< Signal name */
#define BOARD_INITPINS_BACKLIGHT_CTL_CHANNEL                                 31U   /*!< Signal channel */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_BACKLIGHT_CTL_GPIO                                  GPIO2   /*!< GPIO peripheral base pointer */
#define BOARD_INITPINS_BACKLIGHT_CTL_GPIO_PIN                                31U   /*!< GPIO pin number */
#define BOARD_INITPINS_BACKLIGHT_CTL_GPIO_PIN_MASK                   (1U << 31U)   /*!< GPIO pin mask */
#define BOARD_INITPINS_BACKLIGHT_CTL_PORT                                  GPIO2   /*!< PORT peripheral base pointer */
#define BOARD_INITPINS_BACKLIGHT_CTL_PIN                                     31U   /*!< PORT pin number */
#define BOARD_INITPINS_BACKLIGHT_CTL_PIN_MASK                        (1U << 31U)   /*!< PORT pin mask */

/* GPIO_AD_B0_11 (coord G10), JTAG_nTRST/J21[3]/INT2_COMBO/LCD_TOUCH_INT/J22[3]/U32[9] */
/* Routed pin properties */
#define BOARD_INITPINS_INT2_COMBO_PERIPHERAL                               GPIO1   /*!< Peripheral name */
#define BOARD_INITPINS_INT2_COMBO_SIGNAL                                 gpio_io   /*!< Signal name */
#define BOARD_INITPINS_INT2_COMBO_CHANNEL                                    11U   /*!< Signal channel */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_INT2_COMBO_GPIO                                     GPIO1   /*!< GPIO peripheral base pointer */
#define BOARD_INITPINS_INT2_COMBO_GPIO_PIN                                   11U   /*!< GPIO pin number */
#define BOARD_INITPINS_INT2_COMBO_GPIO_PIN_MASK                      (1U << 11U)   /*!< GPIO pin mask */
#define BOARD_INITPINS_INT2_COMBO_PORT                                     GPIO1   /*!< PORT peripheral base pointer */
#define BOARD_INITPINS_INT2_COMBO_PIN                                        11U   /*!< PORT pin number */
#define BOARD_INITPINS_INT2_COMBO_PIN_MASK                           (1U << 11U)   /*!< PORT pin mask */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

/* GPIO_EMC_09 (coord C2), SEMC_A0 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_A0_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_A0_SIGNAL                                   ADDR   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_A0_CHANNEL                                    0U   /*!< Signal channel */

/* GPIO_EMC_10 (coord G1), SEMC_A1 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_A1_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_A1_SIGNAL                                   ADDR   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_A1_CHANNEL                                    1U   /*!< Signal channel */

/* GPIO_EMC_11 (coord G3), SEMC_A2 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_A2_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_A2_SIGNAL                                   ADDR   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_A2_CHANNEL                                    2U   /*!< Signal channel */

/* GPIO_EMC_12 (coord H1), SEMC_A3 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_A3_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_A3_SIGNAL                                   ADDR   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_A3_CHANNEL                                    3U   /*!< Signal channel */

/* GPIO_EMC_13 (coord A6), SEMC_A4 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_A4_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_A4_SIGNAL                                   ADDR   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_A4_CHANNEL                                    4U   /*!< Signal channel */

/* GPIO_EMC_14 (coord B6), SEMC_A5 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_A5_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_A5_SIGNAL                                   ADDR   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_A5_CHANNEL                                    5U   /*!< Signal channel */

/* GPIO_EMC_15 (coord B1), SEMC_A6 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_A6_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_A6_SIGNAL                                   ADDR   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_A6_CHANNEL                                    6U   /*!< Signal channel */

/* GPIO_EMC_16 (coord A5), SEMC_A7 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_A7_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_A7_SIGNAL                                   ADDR   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_A7_CHANNEL                                    7U   /*!< Signal channel */

/* GPIO_EMC_17 (coord A4), SEMC_A8 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_A8_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_A8_SIGNAL                                   ADDR   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_A8_CHANNEL                                    8U   /*!< Signal channel */

/* GPIO_EMC_18 (coord B2), SEMC_A9 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_A9_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_A9_SIGNAL                                   ADDR   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_A9_CHANNEL                                    9U   /*!< Signal channel */

/* GPIO_EMC_23 (coord G2), SEMC_A10 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_A10_PERIPHERAL                              SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_A10_SIGNAL                                  ADDR   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_A10_CHANNEL                                  10U   /*!< Signal channel */

/* GPIO_EMC_19 (coord B4), SEMC_A11 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_A11_PERIPHERAL                              SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_A11_SIGNAL                                  ADDR   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_A11_CHANNEL                                  11U   /*!< Signal channel */

/* GPIO_EMC_20 (coord A3), SEMC_A12 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_A12_PERIPHERAL                              SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_A12_SIGNAL                                  ADDR   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_A12_CHANNEL                                  12U   /*!< Signal channel */

/* GPIO_EMC_21 (coord C1), SEMC_BA0 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_BA0_PERIPHERAL                              SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_BA0_SIGNAL                                    BA   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_BA0_CHANNEL                                   0U   /*!< Signal channel */

/* GPIO_EMC_22 (coord F1), SEMC_BA1 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_BA1_PERIPHERAL                              SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_BA1_SIGNAL                                    BA   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_BA1_CHANNEL                                   1U   /*!< Signal channel */

/* GPIO_EMC_24 (coord D3), SEMC_CAS */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_CAS_PERIPHERAL                              SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_CAS_SIGNAL                              semc_cas   /*!< Signal name */

/* GPIO_EMC_27 (coord A2), SEMC_CKE */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_CKE_PERIPHERAL                              SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_CKE_SIGNAL                              semc_cke   /*!< Signal name */

/* GPIO_EMC_26 (coord B3), SEMC_CLK */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_CLK_PERIPHERAL                              SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_CLK_SIGNAL                              semc_clk   /*!< Signal name */

/* GPIO_EMC_29 (coord E1), SEMC_CS0 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_CS0_PERIPHERAL                              SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_CS0_SIGNAL                                    CS   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_CS0_CHANNEL                                   0U   /*!< Signal channel */

/* GPIO_EMC_00 (coord E3), SEMC_D0 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_D0_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_D0_SIGNAL                                   DATA   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_D0_CHANNEL                                    0U   /*!< Signal channel */

/* GPIO_EMC_01 (coord F3), SEMC_D1 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_D1_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_D1_SIGNAL                                   DATA   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_D1_CHANNEL                                    1U   /*!< Signal channel */

/* GPIO_EMC_02 (coord F4), SEMC_D2 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_D2_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_D2_SIGNAL                                   DATA   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_D2_CHANNEL                                    2U   /*!< Signal channel */

/* GPIO_EMC_03 (coord G4), SEMC_D3 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_D3_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_D3_SIGNAL                                   DATA   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_D3_CHANNEL                                    3U   /*!< Signal channel */

/* GPIO_EMC_04 (coord F2), SEMC_D4 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_D4_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_D4_SIGNAL                                   DATA   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_D4_CHANNEL                                    4U   /*!< Signal channel */

/* GPIO_EMC_05 (coord G5), SEMC_D5 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_D5_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_D5_SIGNAL                                   DATA   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_D5_CHANNEL                                    5U   /*!< Signal channel */

/* GPIO_EMC_06 (coord H5), SEMC_D6 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_D6_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_D6_SIGNAL                                   DATA   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_D6_CHANNEL                                    6U   /*!< Signal channel */

/* GPIO_EMC_07 (coord H4), SEMC_D7 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_D7_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_D7_SIGNAL                                   DATA   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_D7_CHANNEL                                    7U   /*!< Signal channel */

/* GPIO_EMC_30 (coord C6), SEMC_D8 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_D8_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_D8_SIGNAL                                   DATA   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_D8_CHANNEL                                    8U   /*!< Signal channel */

/* GPIO_EMC_31 (coord C5), SEMC_D9 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_D9_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_D9_SIGNAL                                   DATA   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_D9_CHANNEL                                    9U   /*!< Signal channel */

/* GPIO_EMC_32 (coord D5), SEMC_D10 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_D10_PERIPHERAL                              SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_D10_SIGNAL                                  DATA   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_D10_CHANNEL                                  10U   /*!< Signal channel */

/* GPIO_EMC_33 (coord C4), SEMC_D11 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_D11_PERIPHERAL                              SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_D11_SIGNAL                                  DATA   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_D11_CHANNEL                                  11U   /*!< Signal channel */

/* GPIO_EMC_34 (coord D4), SEMC_D12 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_D12_PERIPHERAL                              SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_D12_SIGNAL                                  DATA   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_D12_CHANNEL                                  12U   /*!< Signal channel */

/* GPIO_EMC_35 (coord E5), SEMC_D13 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_D13_PERIPHERAL                              SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_D13_SIGNAL                                  DATA   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_D13_CHANNEL                                  13U   /*!< Signal channel */

/* GPIO_EMC_36 (coord C3), SEMC_D14 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_D14_PERIPHERAL                              SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_D14_SIGNAL                                  DATA   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_D14_CHANNEL                                  14U   /*!< Signal channel */

/* GPIO_EMC_37 (coord E4), SEMC_D15 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_D15_PERIPHERAL                              SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_D15_SIGNAL                                  DATA   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_D15_CHANNEL                                  15U   /*!< Signal channel */

/* GPIO_EMC_08 (coord H3), SEMC_DM0 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_DM0_PERIPHERAL                              SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_DM0_SIGNAL                                    DM   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_DM0_CHANNEL                                   0U   /*!< Signal channel */

/* GPIO_EMC_38 (coord D6), SEMC_DM1 */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_DM1_PERIPHERAL                              SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_DM1_SIGNAL                                    DM   /*!< Signal name */
#define BOARD_INITSEMCPINS_SEMC_DM1_CHANNEL                                   1U   /*!< Signal channel */

/* GPIO_EMC_25 (coord D2), SEMC_RAS */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_RAS_PERIPHERAL                              SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_RAS_SIGNAL                              semc_ras   /*!< Signal name */

/* GPIO_EMC_28 (coord D1), SEMC_WE */
/* Routed pin properties */
#define BOARD_INITSEMCPINS_SEMC_WE_PERIPHERAL                               SEMC   /*!< Peripheral name */
#define BOARD_INITSEMCPINS_SEMC_WE_SIGNAL                                semc_we   /*!< Signal name */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitSemcPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitI2C1Pins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
