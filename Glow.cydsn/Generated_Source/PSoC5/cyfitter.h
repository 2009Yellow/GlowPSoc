#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include <cydevice.h>
#include <cydevice_trm.h>

/* ADC_SAR_1_ADC_SAR */
#define ADC_SAR_1_ADC_SAR__CLK CYREG_SAR1_CLK
#define ADC_SAR_1_ADC_SAR__CSR0 CYREG_SAR1_CSR0
#define ADC_SAR_1_ADC_SAR__CSR1 CYREG_SAR1_CSR1
#define ADC_SAR_1_ADC_SAR__CSR2 CYREG_SAR1_CSR2
#define ADC_SAR_1_ADC_SAR__CSR3 CYREG_SAR1_CSR3
#define ADC_SAR_1_ADC_SAR__CSR4 CYREG_SAR1_CSR4
#define ADC_SAR_1_ADC_SAR__CSR5 CYREG_SAR1_CSR5
#define ADC_SAR_1_ADC_SAR__CSR6 CYREG_SAR1_CSR6
#define ADC_SAR_1_ADC_SAR__PM_ACT_CFG CYREG_PM_ACT_CFG11
#define ADC_SAR_1_ADC_SAR__PM_ACT_MSK 0x02u
#define ADC_SAR_1_ADC_SAR__PM_STBY_CFG CYREG_PM_STBY_CFG11
#define ADC_SAR_1_ADC_SAR__PM_STBY_MSK 0x02u
#define ADC_SAR_1_ADC_SAR__SW0 CYREG_SAR1_SW0
#define ADC_SAR_1_ADC_SAR__SW2 CYREG_SAR1_SW2
#define ADC_SAR_1_ADC_SAR__SW3 CYREG_SAR1_SW3
#define ADC_SAR_1_ADC_SAR__SW4 CYREG_SAR1_SW4
#define ADC_SAR_1_ADC_SAR__SW6 CYREG_SAR1_SW6
#define ADC_SAR_1_ADC_SAR__TR0 CYREG_SAR1_TR0
#define ADC_SAR_1_ADC_SAR__WRK0 CYREG_SAR1_WRK0
#define ADC_SAR_1_ADC_SAR__WRK1 CYREG_SAR1_WRK1

/* ADC_SAR_1_theACLK */
#define ADC_SAR_1_theACLK__CFG0 CYREG_CLKDIST_ACFG0_CFG0
#define ADC_SAR_1_theACLK__CFG1 CYREG_CLKDIST_ACFG0_CFG1
#define ADC_SAR_1_theACLK__CFG2 CYREG_CLKDIST_ACFG0_CFG2
#define ADC_SAR_1_theACLK__CFG2_SRC_SEL_MASK 0x07u
#define ADC_SAR_1_theACLK__CFG3 CYREG_CLKDIST_ACFG0_CFG3
#define ADC_SAR_1_theACLK__CFG3_PHASE_DLY_MASK 0x0Fu
#define ADC_SAR_1_theACLK__INDEX 0x00u
#define ADC_SAR_1_theACLK__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define ADC_SAR_1_theACLK__PM_ACT_MSK 0x01u
#define ADC_SAR_1_theACLK__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define ADC_SAR_1_theACLK__PM_STBY_MSK 0x01u

/* ADC_SAR_1_Bypass */
#define ADC_SAR_1_Bypass__0__MASK 0x04u
#define ADC_SAR_1_Bypass__0__PC CYREG_PRT0_PC2
#define ADC_SAR_1_Bypass__0__PORT 0
#define ADC_SAR_1_Bypass__0__SHIFT 2
#define ADC_SAR_1_Bypass__AG CYREG_PRT0_AG
#define ADC_SAR_1_Bypass__AMUX CYREG_PRT0_AMUX
#define ADC_SAR_1_Bypass__BIE CYREG_PRT0_BIE
#define ADC_SAR_1_Bypass__BIT_MASK CYREG_PRT0_BIT_MASK
#define ADC_SAR_1_Bypass__BYP CYREG_PRT0_BYP
#define ADC_SAR_1_Bypass__CTL CYREG_PRT0_CTL
#define ADC_SAR_1_Bypass__DM0 CYREG_PRT0_DM0
#define ADC_SAR_1_Bypass__DM1 CYREG_PRT0_DM1
#define ADC_SAR_1_Bypass__DM2 CYREG_PRT0_DM2
#define ADC_SAR_1_Bypass__DR CYREG_PRT0_DR
#define ADC_SAR_1_Bypass__INP_DIS CYREG_PRT0_INP_DIS
#define ADC_SAR_1_Bypass__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define ADC_SAR_1_Bypass__LCD_EN CYREG_PRT0_LCD_EN
#define ADC_SAR_1_Bypass__MASK 0x04u
#define ADC_SAR_1_Bypass__PORT 0
#define ADC_SAR_1_Bypass__PRT CYREG_PRT0_PRT
#define ADC_SAR_1_Bypass__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define ADC_SAR_1_Bypass__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define ADC_SAR_1_Bypass__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define ADC_SAR_1_Bypass__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define ADC_SAR_1_Bypass__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define ADC_SAR_1_Bypass__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define ADC_SAR_1_Bypass__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define ADC_SAR_1_Bypass__PS CYREG_PRT0_PS
#define ADC_SAR_1_Bypass__SHIFT 2
#define ADC_SAR_1_Bypass__SLW CYREG_PRT0_SLW

/* IDAC8_REF_viDAC8 */
#define IDAC8_REF_viDAC8__CR0 CYREG_DAC2_CR0
#define IDAC8_REF_viDAC8__CR1 CYREG_DAC2_CR1
#define IDAC8_REF_viDAC8__D CYREG_DAC2_D
#define IDAC8_REF_viDAC8__PM_ACT_CFG CYREG_PM_ACT_CFG8
#define IDAC8_REF_viDAC8__PM_ACT_MSK 0x04u
#define IDAC8_REF_viDAC8__PM_STBY_CFG CYREG_PM_STBY_CFG8
#define IDAC8_REF_viDAC8__PM_STBY_MSK 0x04u
#define IDAC8_REF_viDAC8__STROBE CYREG_DAC2_STROBE
#define IDAC8_REF_viDAC8__SW0 CYREG_DAC2_SW0
#define IDAC8_REF_viDAC8__SW2 CYREG_DAC2_SW2
#define IDAC8_REF_viDAC8__SW3 CYREG_DAC2_SW3
#define IDAC8_REF_viDAC8__SW4 CYREG_DAC2_SW4
#define IDAC8_REF_viDAC8__TR CYREG_DAC2_TR
#define IDAC8_REF_viDAC8__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DAC2_M1
#define IDAC8_REF_viDAC8__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DAC2_M2
#define IDAC8_REF_viDAC8__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DAC2_M3
#define IDAC8_REF_viDAC8__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DAC2_M4
#define IDAC8_REF_viDAC8__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DAC2_M5
#define IDAC8_REF_viDAC8__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DAC2_M6
#define IDAC8_REF_viDAC8__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DAC2_M7
#define IDAC8_REF_viDAC8__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DAC2_M8
#define IDAC8_REF_viDAC8__TST CYREG_DAC2_TST

/* VDAC8_REF_viDAC8 */
#define VDAC8_REF_viDAC8__CR0 CYREG_DAC1_CR0
#define VDAC8_REF_viDAC8__CR1 CYREG_DAC1_CR1
#define VDAC8_REF_viDAC8__D CYREG_DAC1_D
#define VDAC8_REF_viDAC8__PM_ACT_CFG CYREG_PM_ACT_CFG8
#define VDAC8_REF_viDAC8__PM_ACT_MSK 0x02u
#define VDAC8_REF_viDAC8__PM_STBY_CFG CYREG_PM_STBY_CFG8
#define VDAC8_REF_viDAC8__PM_STBY_MSK 0x02u
#define VDAC8_REF_viDAC8__STROBE CYREG_DAC1_STROBE
#define VDAC8_REF_viDAC8__SW0 CYREG_DAC1_SW0
#define VDAC8_REF_viDAC8__SW2 CYREG_DAC1_SW2
#define VDAC8_REF_viDAC8__SW3 CYREG_DAC1_SW3
#define VDAC8_REF_viDAC8__SW4 CYREG_DAC1_SW4
#define VDAC8_REF_viDAC8__TR CYREG_DAC1_TR
#define VDAC8_REF_viDAC8__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DAC1_M1
#define VDAC8_REF_viDAC8__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DAC1_M2
#define VDAC8_REF_viDAC8__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DAC1_M3
#define VDAC8_REF_viDAC8__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DAC1_M4
#define VDAC8_REF_viDAC8__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DAC1_M5
#define VDAC8_REF_viDAC8__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DAC1_M6
#define VDAC8_REF_viDAC8__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DAC1_M7
#define VDAC8_REF_viDAC8__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DAC1_M8
#define VDAC8_REF_viDAC8__TST CYREG_DAC1_TST

/* ADC_SAR_1_IRQ */
#define ADC_SAR_1_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ADC_SAR_1_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ADC_SAR_1_IRQ__INTC_MASK 0x01u
#define ADC_SAR_1_IRQ__INTC_NUMBER 0
#define ADC_SAR_1_IRQ__INTC_PRIOR_NUM 7
#define ADC_SAR_1_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define ADC_SAR_1_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ADC_SAR_1_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* UART_IntClock */
#define UART_IntClock__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define UART_IntClock__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define UART_IntClock__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define UART_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define UART_IntClock__INDEX 0x00u
#define UART_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define UART_IntClock__PM_ACT_MSK 0x01u
#define UART_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define UART_IntClock__PM_STBY_MSK 0x01u

/* LCD_LCDPort */
#define LCD_LCDPort__0__MASK 0x01u
#define LCD_LCDPort__0__PC CYREG_PRT2_PC0
#define LCD_LCDPort__0__PORT 2
#define LCD_LCDPort__0__SHIFT 0
#define LCD_LCDPort__1__MASK 0x02u
#define LCD_LCDPort__1__PC CYREG_PRT2_PC1
#define LCD_LCDPort__1__PORT 2
#define LCD_LCDPort__1__SHIFT 1
#define LCD_LCDPort__2__MASK 0x04u
#define LCD_LCDPort__2__PC CYREG_PRT2_PC2
#define LCD_LCDPort__2__PORT 2
#define LCD_LCDPort__2__SHIFT 2
#define LCD_LCDPort__3__MASK 0x08u
#define LCD_LCDPort__3__PC CYREG_PRT2_PC3
#define LCD_LCDPort__3__PORT 2
#define LCD_LCDPort__3__SHIFT 3
#define LCD_LCDPort__4__MASK 0x10u
#define LCD_LCDPort__4__PC CYREG_PRT2_PC4
#define LCD_LCDPort__4__PORT 2
#define LCD_LCDPort__4__SHIFT 4
#define LCD_LCDPort__5__MASK 0x20u
#define LCD_LCDPort__5__PC CYREG_PRT2_PC5
#define LCD_LCDPort__5__PORT 2
#define LCD_LCDPort__5__SHIFT 5
#define LCD_LCDPort__6__MASK 0x40u
#define LCD_LCDPort__6__PC CYREG_PRT2_PC6
#define LCD_LCDPort__6__PORT 2
#define LCD_LCDPort__6__SHIFT 6
#define LCD_LCDPort__AG CYREG_PRT2_AG
#define LCD_LCDPort__AMUX CYREG_PRT2_AMUX
#define LCD_LCDPort__BIE CYREG_PRT2_BIE
#define LCD_LCDPort__BIT_MASK CYREG_PRT2_BIT_MASK
#define LCD_LCDPort__BYP CYREG_PRT2_BYP
#define LCD_LCDPort__CTL CYREG_PRT2_CTL
#define LCD_LCDPort__DM0 CYREG_PRT2_DM0
#define LCD_LCDPort__DM1 CYREG_PRT2_DM1
#define LCD_LCDPort__DM2 CYREG_PRT2_DM2
#define LCD_LCDPort__DR CYREG_PRT2_DR
#define LCD_LCDPort__INP_DIS CYREG_PRT2_INP_DIS
#define LCD_LCDPort__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define LCD_LCDPort__LCD_EN CYREG_PRT2_LCD_EN
#define LCD_LCDPort__MASK 0x7Fu
#define LCD_LCDPort__PORT 2
#define LCD_LCDPort__PRT CYREG_PRT2_PRT
#define LCD_LCDPort__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define LCD_LCDPort__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define LCD_LCDPort__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define LCD_LCDPort__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define LCD_LCDPort__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define LCD_LCDPort__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define LCD_LCDPort__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define LCD_LCDPort__PS CYREG_PRT2_PS
#define LCD_LCDPort__SHIFT 0
#define LCD_LCDPort__SLW CYREG_PRT2_SLW

/* PGA_GAIN_SC */
#define PGA_GAIN_SC__BST CYREG_SC1_BST
#define PGA_GAIN_SC__CLK CYREG_SC1_CLK
#define PGA_GAIN_SC__CMPINV CYREG_SC_CMPINV
#define PGA_GAIN_SC__CPTR CYREG_SC_CPTR
#define PGA_GAIN_SC__CR0 CYREG_SC1_CR0
#define PGA_GAIN_SC__CR1 CYREG_SC1_CR1
#define PGA_GAIN_SC__CR2 CYREG_SC1_CR2
#define PGA_GAIN_SC__MSK CYREG_SC_MSK
#define PGA_GAIN_SC__PM_ACT_CFG CYREG_PM_ACT_CFG9
#define PGA_GAIN_SC__PM_ACT_MSK 0x02u
#define PGA_GAIN_SC__PM_STBY_CFG CYREG_PM_STBY_CFG9
#define PGA_GAIN_SC__PM_STBY_MSK 0x02u
#define PGA_GAIN_SC__SR CYREG_SC_SR
#define PGA_GAIN_SC__SW0 CYREG_SC1_SW0
#define PGA_GAIN_SC__SW10 CYREG_SC1_SW10
#define PGA_GAIN_SC__SW2 CYREG_SC1_SW2
#define PGA_GAIN_SC__SW3 CYREG_SC1_SW3
#define PGA_GAIN_SC__SW4 CYREG_SC1_SW4
#define PGA_GAIN_SC__SW6 CYREG_SC1_SW6
#define PGA_GAIN_SC__SW7 CYREG_SC1_SW7
#define PGA_GAIN_SC__SW8 CYREG_SC1_SW8
#define PGA_GAIN_SC__WRK1 CYREG_SC_WRK1

/* PGA_REF_SC */
#define PGA_REF_SC__BST CYREG_SC3_BST
#define PGA_REF_SC__CLK CYREG_SC3_CLK
#define PGA_REF_SC__CMPINV CYREG_SC_CMPINV
#define PGA_REF_SC__CPTR CYREG_SC_CPTR
#define PGA_REF_SC__CR0 CYREG_SC3_CR0
#define PGA_REF_SC__CR1 CYREG_SC3_CR1
#define PGA_REF_SC__CR2 CYREG_SC3_CR2
#define PGA_REF_SC__MSK CYREG_SC_MSK
#define PGA_REF_SC__PM_ACT_CFG CYREG_PM_ACT_CFG9
#define PGA_REF_SC__PM_ACT_MSK 0x08u
#define PGA_REF_SC__PM_STBY_CFG CYREG_PM_STBY_CFG9
#define PGA_REF_SC__PM_STBY_MSK 0x08u
#define PGA_REF_SC__SR CYREG_SC_SR
#define PGA_REF_SC__SW0 CYREG_SC3_SW0
#define PGA_REF_SC__SW10 CYREG_SC3_SW10
#define PGA_REF_SC__SW2 CYREG_SC3_SW2
#define PGA_REF_SC__SW3 CYREG_SC3_SW3
#define PGA_REF_SC__SW4 CYREG_SC3_SW4
#define PGA_REF_SC__SW6 CYREG_SC3_SW6
#define PGA_REF_SC__SW7 CYREG_SC3_SW7
#define PGA_REF_SC__SW8 CYREG_SC3_SW8
#define PGA_REF_SC__WRK1 CYREG_SC_WRK1

/* UART_BUART */
#define UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB11_12_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG CYREG_B0_UDB11_12_ST
#define UART_BUART_sRX_RxBitCounter_ST__MASK_REG CYREG_B0_UDB11_MSK
#define UART_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B0_UDB11_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B0_UDB11_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG CYREG_B0_UDB11_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG CYREG_B0_UDB11_ST_CTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG CYREG_B0_UDB11_ST_CTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_REG CYREG_B0_UDB11_ST
#define UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB11_12_ACTL
#define UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB11_12_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB11_12_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB11_12_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG CYREG_B0_UDB11_12_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG CYREG_B0_UDB11_12_MSK
#define UART_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG CYREG_B0_UDB11_12_MSK
#define UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG CYREG_B0_UDB11_12_MSK
#define UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB11_12_MSK
#define UART_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG CYREG_B0_UDB11_ACTL
#define UART_BUART_sRX_RxBitCounter__CONTROL_REG CYREG_B0_UDB11_CTL
#define UART_BUART_sRX_RxBitCounter__CONTROL_ST_REG CYREG_B0_UDB11_ST_CTL
#define UART_BUART_sRX_RxBitCounter__COUNT_REG CYREG_B0_UDB11_CTL
#define UART_BUART_sRX_RxBitCounter__COUNT_ST_REG CYREG_B0_UDB11_ST_CTL
#define UART_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB11_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter__PERIOD_REG CYREG_B0_UDB11_MSK
#define UART_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG CYREG_B0_UDB11_MSK_ACTL
#define UART_BUART_sRX_RxShifter_u0__16BIT_A0_REG CYREG_B0_UDB13_14_A0
#define UART_BUART_sRX_RxShifter_u0__16BIT_A1_REG CYREG_B0_UDB13_14_A1
#define UART_BUART_sRX_RxShifter_u0__16BIT_D0_REG CYREG_B0_UDB13_14_D0
#define UART_BUART_sRX_RxShifter_u0__16BIT_D1_REG CYREG_B0_UDB13_14_D1
#define UART_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB13_14_ACTL
#define UART_BUART_sRX_RxShifter_u0__16BIT_F0_REG CYREG_B0_UDB13_14_F0
#define UART_BUART_sRX_RxShifter_u0__16BIT_F1_REG CYREG_B0_UDB13_14_F1
#define UART_BUART_sRX_RxShifter_u0__A0_A1_REG CYREG_B0_UDB13_A0_A1
#define UART_BUART_sRX_RxShifter_u0__A0_REG CYREG_B0_UDB13_A0
#define UART_BUART_sRX_RxShifter_u0__A1_REG CYREG_B0_UDB13_A1
#define UART_BUART_sRX_RxShifter_u0__D0_D1_REG CYREG_B0_UDB13_D0_D1
#define UART_BUART_sRX_RxShifter_u0__D0_REG CYREG_B0_UDB13_D0
#define UART_BUART_sRX_RxShifter_u0__D1_REG CYREG_B0_UDB13_D1
#define UART_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB13_ACTL
#define UART_BUART_sRX_RxShifter_u0__F0_F1_REG CYREG_B0_UDB13_F0_F1
#define UART_BUART_sRX_RxShifter_u0__F0_REG CYREG_B0_UDB13_F0
#define UART_BUART_sRX_RxShifter_u0__F1_REG CYREG_B0_UDB13_F1
#define UART_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB13_14_ACTL
#define UART_BUART_sRX_RxSts__16BIT_STATUS_REG CYREG_B0_UDB13_14_ST
#define UART_BUART_sRX_RxSts__3__MASK 0x08u
#define UART_BUART_sRX_RxSts__3__POS 3
#define UART_BUART_sRX_RxSts__4__MASK 0x10u
#define UART_BUART_sRX_RxSts__4__POS 4
#define UART_BUART_sRX_RxSts__5__MASK 0x20u
#define UART_BUART_sRX_RxSts__5__POS 5
#define UART_BUART_sRX_RxSts__MASK 0x38u
#define UART_BUART_sRX_RxSts__MASK_REG CYREG_B0_UDB13_MSK
#define UART_BUART_sRX_RxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB13_ACTL
#define UART_BUART_sRX_RxSts__STATUS_REG CYREG_B0_UDB13_ST
#define UART_BUART_sTX_TxShifter_u0__16BIT_A0_REG CYREG_B0_UDB14_15_A0
#define UART_BUART_sTX_TxShifter_u0__16BIT_A1_REG CYREG_B0_UDB14_15_A1
#define UART_BUART_sTX_TxShifter_u0__16BIT_D0_REG CYREG_B0_UDB14_15_D0
#define UART_BUART_sTX_TxShifter_u0__16BIT_D1_REG CYREG_B0_UDB14_15_D1
#define UART_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB14_15_ACTL
#define UART_BUART_sTX_TxShifter_u0__16BIT_F0_REG CYREG_B0_UDB14_15_F0
#define UART_BUART_sTX_TxShifter_u0__16BIT_F1_REG CYREG_B0_UDB14_15_F1
#define UART_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_B0_UDB14_A0_A1
#define UART_BUART_sTX_TxShifter_u0__A0_REG CYREG_B0_UDB14_A0
#define UART_BUART_sTX_TxShifter_u0__A1_REG CYREG_B0_UDB14_A1
#define UART_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_B0_UDB14_D0_D1
#define UART_BUART_sTX_TxShifter_u0__D0_REG CYREG_B0_UDB14_D0
#define UART_BUART_sTX_TxShifter_u0__D1_REG CYREG_B0_UDB14_D1
#define UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB14_ACTL
#define UART_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_B0_UDB14_F0_F1
#define UART_BUART_sTX_TxShifter_u0__F0_REG CYREG_B0_UDB14_F0
#define UART_BUART_sTX_TxShifter_u0__F1_REG CYREG_B0_UDB14_F1
#define UART_BUART_sTX_TxSts__0__MASK 0x01u
#define UART_BUART_sTX_TxSts__0__POS 0
#define UART_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB14_15_ACTL
#define UART_BUART_sTX_TxSts__16BIT_STATUS_REG CYREG_B0_UDB14_15_ST
#define UART_BUART_sTX_TxSts__1__MASK 0x02u
#define UART_BUART_sTX_TxSts__1__POS 1
#define UART_BUART_sTX_TxSts__2__MASK 0x04u
#define UART_BUART_sTX_TxSts__2__POS 2
#define UART_BUART_sTX_TxSts__3__MASK 0x08u
#define UART_BUART_sTX_TxSts__3__POS 3
#define UART_BUART_sTX_TxSts__MASK 0x0Fu
#define UART_BUART_sTX_TxSts__MASK_REG CYREG_B0_UDB14_MSK
#define UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB14_ACTL
#define UART_BUART_sTX_TxSts__STATUS_REG CYREG_B0_UDB14_ST
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_B0_UDB15_A0_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_B0_UDB15_A0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_B0_UDB15_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_B0_UDB15_D0_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_B0_UDB15_D0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_B0_UDB15_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_B0_UDB15_ACTL
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_B0_UDB15_F0_F1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_B0_UDB15_F0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_B0_UDB15_F1

/* BOTTOM_1 */
#define BOTTOM_1__0__MASK 0x80u
#define BOTTOM_1__0__PC CYREG_PRT4_PC7
#define BOTTOM_1__0__PORT 4
#define BOTTOM_1__0__SHIFT 7
#define BOTTOM_1__AG CYREG_PRT4_AG
#define BOTTOM_1__AMUX CYREG_PRT4_AMUX
#define BOTTOM_1__BIE CYREG_PRT4_BIE
#define BOTTOM_1__BIT_MASK CYREG_PRT4_BIT_MASK
#define BOTTOM_1__BYP CYREG_PRT4_BYP
#define BOTTOM_1__CTL CYREG_PRT4_CTL
#define BOTTOM_1__DM0 CYREG_PRT4_DM0
#define BOTTOM_1__DM1 CYREG_PRT4_DM1
#define BOTTOM_1__DM2 CYREG_PRT4_DM2
#define BOTTOM_1__DR CYREG_PRT4_DR
#define BOTTOM_1__INP_DIS CYREG_PRT4_INP_DIS
#define BOTTOM_1__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define BOTTOM_1__LCD_EN CYREG_PRT4_LCD_EN
#define BOTTOM_1__MASK 0x80u
#define BOTTOM_1__PORT 4
#define BOTTOM_1__PRT CYREG_PRT4_PRT
#define BOTTOM_1__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define BOTTOM_1__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define BOTTOM_1__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define BOTTOM_1__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define BOTTOM_1__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define BOTTOM_1__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define BOTTOM_1__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define BOTTOM_1__PS CYREG_PRT4_PS
#define BOTTOM_1__SHIFT 7
#define BOTTOM_1__SLW CYREG_PRT4_SLW

/* BOTTOM_2 */
#define BOTTOM_2__0__MASK 0x01u
#define BOTTOM_2__0__PC CYREG_PRT4_PC0
#define BOTTOM_2__0__PORT 4
#define BOTTOM_2__0__SHIFT 0
#define BOTTOM_2__AG CYREG_PRT4_AG
#define BOTTOM_2__AMUX CYREG_PRT4_AMUX
#define BOTTOM_2__BIE CYREG_PRT4_BIE
#define BOTTOM_2__BIT_MASK CYREG_PRT4_BIT_MASK
#define BOTTOM_2__BYP CYREG_PRT4_BYP
#define BOTTOM_2__CTL CYREG_PRT4_CTL
#define BOTTOM_2__DM0 CYREG_PRT4_DM0
#define BOTTOM_2__DM1 CYREG_PRT4_DM1
#define BOTTOM_2__DM2 CYREG_PRT4_DM2
#define BOTTOM_2__DR CYREG_PRT4_DR
#define BOTTOM_2__INP_DIS CYREG_PRT4_INP_DIS
#define BOTTOM_2__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define BOTTOM_2__LCD_EN CYREG_PRT4_LCD_EN
#define BOTTOM_2__MASK 0x01u
#define BOTTOM_2__PORT 4
#define BOTTOM_2__PRT CYREG_PRT4_PRT
#define BOTTOM_2__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define BOTTOM_2__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define BOTTOM_2__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define BOTTOM_2__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define BOTTOM_2__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define BOTTOM_2__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define BOTTOM_2__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define BOTTOM_2__PS CYREG_PRT4_PS
#define BOTTOM_2__SHIFT 0
#define BOTTOM_2__SLW CYREG_PRT4_SLW

/* BOTTOM_3 */
#define BOTTOM_3__0__MASK 0x10u
#define BOTTOM_3__0__PC CYREG_PRT6_PC4
#define BOTTOM_3__0__PORT 6
#define BOTTOM_3__0__SHIFT 4
#define BOTTOM_3__AG CYREG_PRT6_AG
#define BOTTOM_3__AMUX CYREG_PRT6_AMUX
#define BOTTOM_3__BIE CYREG_PRT6_BIE
#define BOTTOM_3__BIT_MASK CYREG_PRT6_BIT_MASK
#define BOTTOM_3__BYP CYREG_PRT6_BYP
#define BOTTOM_3__CTL CYREG_PRT6_CTL
#define BOTTOM_3__DM0 CYREG_PRT6_DM0
#define BOTTOM_3__DM1 CYREG_PRT6_DM1
#define BOTTOM_3__DM2 CYREG_PRT6_DM2
#define BOTTOM_3__DR CYREG_PRT6_DR
#define BOTTOM_3__INP_DIS CYREG_PRT6_INP_DIS
#define BOTTOM_3__LCD_COM_SEG CYREG_PRT6_LCD_COM_SEG
#define BOTTOM_3__LCD_EN CYREG_PRT6_LCD_EN
#define BOTTOM_3__MASK 0x10u
#define BOTTOM_3__PORT 6
#define BOTTOM_3__PRT CYREG_PRT6_PRT
#define BOTTOM_3__PRTDSI__CAPS_SEL CYREG_PRT6_CAPS_SEL
#define BOTTOM_3__PRTDSI__DBL_SYNC_IN CYREG_PRT6_DBL_SYNC_IN
#define BOTTOM_3__PRTDSI__OE_SEL0 CYREG_PRT6_OE_SEL0
#define BOTTOM_3__PRTDSI__OE_SEL1 CYREG_PRT6_OE_SEL1
#define BOTTOM_3__PRTDSI__OUT_SEL0 CYREG_PRT6_OUT_SEL0
#define BOTTOM_3__PRTDSI__OUT_SEL1 CYREG_PRT6_OUT_SEL1
#define BOTTOM_3__PRTDSI__SYNC_OUT CYREG_PRT6_SYNC_OUT
#define BOTTOM_3__PS CYREG_PRT6_PS
#define BOTTOM_3__SHIFT 4
#define BOTTOM_3__SLW CYREG_PRT6_SLW

/* BOTTOM_4 */
#define BOTTOM_4__0__MASK 0x08u
#define BOTTOM_4__0__PC CYREG_PRT6_PC3
#define BOTTOM_4__0__PORT 6
#define BOTTOM_4__0__SHIFT 3
#define BOTTOM_4__AG CYREG_PRT6_AG
#define BOTTOM_4__AMUX CYREG_PRT6_AMUX
#define BOTTOM_4__BIE CYREG_PRT6_BIE
#define BOTTOM_4__BIT_MASK CYREG_PRT6_BIT_MASK
#define BOTTOM_4__BYP CYREG_PRT6_BYP
#define BOTTOM_4__CTL CYREG_PRT6_CTL
#define BOTTOM_4__DM0 CYREG_PRT6_DM0
#define BOTTOM_4__DM1 CYREG_PRT6_DM1
#define BOTTOM_4__DM2 CYREG_PRT6_DM2
#define BOTTOM_4__DR CYREG_PRT6_DR
#define BOTTOM_4__INP_DIS CYREG_PRT6_INP_DIS
#define BOTTOM_4__LCD_COM_SEG CYREG_PRT6_LCD_COM_SEG
#define BOTTOM_4__LCD_EN CYREG_PRT6_LCD_EN
#define BOTTOM_4__MASK 0x08u
#define BOTTOM_4__PORT 6
#define BOTTOM_4__PRT CYREG_PRT6_PRT
#define BOTTOM_4__PRTDSI__CAPS_SEL CYREG_PRT6_CAPS_SEL
#define BOTTOM_4__PRTDSI__DBL_SYNC_IN CYREG_PRT6_DBL_SYNC_IN
#define BOTTOM_4__PRTDSI__OE_SEL0 CYREG_PRT6_OE_SEL0
#define BOTTOM_4__PRTDSI__OE_SEL1 CYREG_PRT6_OE_SEL1
#define BOTTOM_4__PRTDSI__OUT_SEL0 CYREG_PRT6_OUT_SEL0
#define BOTTOM_4__PRTDSI__OUT_SEL1 CYREG_PRT6_OUT_SEL1
#define BOTTOM_4__PRTDSI__SYNC_OUT CYREG_PRT6_SYNC_OUT
#define BOTTOM_4__PS CYREG_PRT6_PS
#define BOTTOM_4__SHIFT 3
#define BOTTOM_4__SLW CYREG_PRT6_SLW

/* rx_int */
#define rx_int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define rx_int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define rx_int__INTC_MASK 0x02u
#define rx_int__INTC_NUMBER 1
#define rx_int__INTC_PRIOR_NUM 7
#define rx_int__INTC_PRIOR_REG CYREG_NVIC_PRI_1
#define rx_int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define rx_int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* tx_int */
#define tx_int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define tx_int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define tx_int__INTC_MASK 0x04u
#define tx_int__INTC_NUMBER 2
#define tx_int__INTC_PRIOR_NUM 7
#define tx_int__INTC_PRIOR_REG CYREG_NVIC_PRI_2
#define tx_int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define tx_int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* TOP_1 */
#define TOP_1__0__MASK 0x40u
#define TOP_1__0__PC CYREG_PRT1_PC6
#define TOP_1__0__PORT 1
#define TOP_1__0__SHIFT 6
#define TOP_1__AG CYREG_PRT1_AG
#define TOP_1__AMUX CYREG_PRT1_AMUX
#define TOP_1__BIE CYREG_PRT1_BIE
#define TOP_1__BIT_MASK CYREG_PRT1_BIT_MASK
#define TOP_1__BYP CYREG_PRT1_BYP
#define TOP_1__CTL CYREG_PRT1_CTL
#define TOP_1__DM0 CYREG_PRT1_DM0
#define TOP_1__DM1 CYREG_PRT1_DM1
#define TOP_1__DM2 CYREG_PRT1_DM2
#define TOP_1__DR CYREG_PRT1_DR
#define TOP_1__INP_DIS CYREG_PRT1_INP_DIS
#define TOP_1__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define TOP_1__LCD_EN CYREG_PRT1_LCD_EN
#define TOP_1__MASK 0x40u
#define TOP_1__PORT 1
#define TOP_1__PRT CYREG_PRT1_PRT
#define TOP_1__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define TOP_1__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define TOP_1__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define TOP_1__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define TOP_1__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define TOP_1__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define TOP_1__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define TOP_1__PS CYREG_PRT1_PS
#define TOP_1__SHIFT 6
#define TOP_1__SLW CYREG_PRT1_SLW

/* TOP_2 */
#define TOP_2__0__MASK 0x10u
#define TOP_2__0__PC CYREG_PRT5_PC4
#define TOP_2__0__PORT 5
#define TOP_2__0__SHIFT 4
#define TOP_2__AG CYREG_PRT5_AG
#define TOP_2__AMUX CYREG_PRT5_AMUX
#define TOP_2__BIE CYREG_PRT5_BIE
#define TOP_2__BIT_MASK CYREG_PRT5_BIT_MASK
#define TOP_2__BYP CYREG_PRT5_BYP
#define TOP_2__CTL CYREG_PRT5_CTL
#define TOP_2__DM0 CYREG_PRT5_DM0
#define TOP_2__DM1 CYREG_PRT5_DM1
#define TOP_2__DM2 CYREG_PRT5_DM2
#define TOP_2__DR CYREG_PRT5_DR
#define TOP_2__INP_DIS CYREG_PRT5_INP_DIS
#define TOP_2__LCD_COM_SEG CYREG_PRT5_LCD_COM_SEG
#define TOP_2__LCD_EN CYREG_PRT5_LCD_EN
#define TOP_2__MASK 0x10u
#define TOP_2__PORT 5
#define TOP_2__PRT CYREG_PRT5_PRT
#define TOP_2__PRTDSI__CAPS_SEL CYREG_PRT5_CAPS_SEL
#define TOP_2__PRTDSI__DBL_SYNC_IN CYREG_PRT5_DBL_SYNC_IN
#define TOP_2__PRTDSI__OE_SEL0 CYREG_PRT5_OE_SEL0
#define TOP_2__PRTDSI__OE_SEL1 CYREG_PRT5_OE_SEL1
#define TOP_2__PRTDSI__OUT_SEL0 CYREG_PRT5_OUT_SEL0
#define TOP_2__PRTDSI__OUT_SEL1 CYREG_PRT5_OUT_SEL1
#define TOP_2__PRTDSI__SYNC_OUT CYREG_PRT5_SYNC_OUT
#define TOP_2__PS CYREG_PRT5_PS
#define TOP_2__SHIFT 4
#define TOP_2__SLW CYREG_PRT5_SLW

/* TOP_3 */
#define TOP_3__0__MASK 0x01u
#define TOP_3__0__PC CYREG_PRT3_PC0
#define TOP_3__0__PORT 3
#define TOP_3__0__SHIFT 0
#define TOP_3__AG CYREG_PRT3_AG
#define TOP_3__AMUX CYREG_PRT3_AMUX
#define TOP_3__BIE CYREG_PRT3_BIE
#define TOP_3__BIT_MASK CYREG_PRT3_BIT_MASK
#define TOP_3__BYP CYREG_PRT3_BYP
#define TOP_3__CTL CYREG_PRT3_CTL
#define TOP_3__DM0 CYREG_PRT3_DM0
#define TOP_3__DM1 CYREG_PRT3_DM1
#define TOP_3__DM2 CYREG_PRT3_DM2
#define TOP_3__DR CYREG_PRT3_DR
#define TOP_3__INP_DIS CYREG_PRT3_INP_DIS
#define TOP_3__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define TOP_3__LCD_EN CYREG_PRT3_LCD_EN
#define TOP_3__MASK 0x01u
#define TOP_3__PORT 3
#define TOP_3__PRT CYREG_PRT3_PRT
#define TOP_3__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define TOP_3__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define TOP_3__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define TOP_3__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define TOP_3__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define TOP_3__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define TOP_3__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define TOP_3__PS CYREG_PRT3_PS
#define TOP_3__SHIFT 0
#define TOP_3__SLW CYREG_PRT3_SLW

/* TOP_4 */
#define TOP_4__0__MASK 0x04u
#define TOP_4__0__PC CYREG_PRT4_PC2
#define TOP_4__0__PORT 4
#define TOP_4__0__SHIFT 2
#define TOP_4__AG CYREG_PRT4_AG
#define TOP_4__AMUX CYREG_PRT4_AMUX
#define TOP_4__BIE CYREG_PRT4_BIE
#define TOP_4__BIT_MASK CYREG_PRT4_BIT_MASK
#define TOP_4__BYP CYREG_PRT4_BYP
#define TOP_4__CTL CYREG_PRT4_CTL
#define TOP_4__DM0 CYREG_PRT4_DM0
#define TOP_4__DM1 CYREG_PRT4_DM1
#define TOP_4__DM2 CYREG_PRT4_DM2
#define TOP_4__DR CYREG_PRT4_DR
#define TOP_4__INP_DIS CYREG_PRT4_INP_DIS
#define TOP_4__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define TOP_4__LCD_EN CYREG_PRT4_LCD_EN
#define TOP_4__MASK 0x04u
#define TOP_4__PORT 4
#define TOP_4__PRT CYREG_PRT4_PRT
#define TOP_4__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define TOP_4__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define TOP_4__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define TOP_4__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define TOP_4__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define TOP_4__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define TOP_4__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define TOP_4__PS CYREG_PRT4_PS
#define TOP_4__SHIFT 2
#define TOP_4__SLW CYREG_PRT4_SLW

/* RX */
#define RX__0__MASK 0x01u
#define RX__0__PC CYREG_PRT6_PC0
#define RX__0__PORT 6
#define RX__0__SHIFT 0
#define RX__AG CYREG_PRT6_AG
#define RX__AMUX CYREG_PRT6_AMUX
#define RX__BIE CYREG_PRT6_BIE
#define RX__BIT_MASK CYREG_PRT6_BIT_MASK
#define RX__BYP CYREG_PRT6_BYP
#define RX__CTL CYREG_PRT6_CTL
#define RX__DM0 CYREG_PRT6_DM0
#define RX__DM1 CYREG_PRT6_DM1
#define RX__DM2 CYREG_PRT6_DM2
#define RX__DR CYREG_PRT6_DR
#define RX__INP_DIS CYREG_PRT6_INP_DIS
#define RX__LCD_COM_SEG CYREG_PRT6_LCD_COM_SEG
#define RX__LCD_EN CYREG_PRT6_LCD_EN
#define RX__MASK 0x01u
#define RX__PORT 6
#define RX__PRT CYREG_PRT6_PRT
#define RX__PRTDSI__CAPS_SEL CYREG_PRT6_CAPS_SEL
#define RX__PRTDSI__DBL_SYNC_IN CYREG_PRT6_DBL_SYNC_IN
#define RX__PRTDSI__OE_SEL0 CYREG_PRT6_OE_SEL0
#define RX__PRTDSI__OE_SEL1 CYREG_PRT6_OE_SEL1
#define RX__PRTDSI__OUT_SEL0 CYREG_PRT6_OUT_SEL0
#define RX__PRTDSI__OUT_SEL1 CYREG_PRT6_OUT_SEL1
#define RX__PRTDSI__SYNC_OUT CYREG_PRT6_SYNC_OUT
#define RX__PS CYREG_PRT6_PS
#define RX__SHIFT 0
#define RX__SLW CYREG_PRT6_SLW

/* TX */
#define TX__0__MASK 0x40u
#define TX__0__PC CYREG_PRT6_PC6
#define TX__0__PORT 6
#define TX__0__SHIFT 6
#define TX__AG CYREG_PRT6_AG
#define TX__AMUX CYREG_PRT6_AMUX
#define TX__BIE CYREG_PRT6_BIE
#define TX__BIT_MASK CYREG_PRT6_BIT_MASK
#define TX__BYP CYREG_PRT6_BYP
#define TX__CTL CYREG_PRT6_CTL
#define TX__DM0 CYREG_PRT6_DM0
#define TX__DM1 CYREG_PRT6_DM1
#define TX__DM2 CYREG_PRT6_DM2
#define TX__DR CYREG_PRT6_DR
#define TX__INP_DIS CYREG_PRT6_INP_DIS
#define TX__LCD_COM_SEG CYREG_PRT6_LCD_COM_SEG
#define TX__LCD_EN CYREG_PRT6_LCD_EN
#define TX__MASK 0x40u
#define TX__PORT 6
#define TX__PRT CYREG_PRT6_PRT
#define TX__PRTDSI__CAPS_SEL CYREG_PRT6_CAPS_SEL
#define TX__PRTDSI__DBL_SYNC_IN CYREG_PRT6_DBL_SYNC_IN
#define TX__PRTDSI__OE_SEL0 CYREG_PRT6_OE_SEL0
#define TX__PRTDSI__OE_SEL1 CYREG_PRT6_OE_SEL1
#define TX__PRTDSI__OUT_SEL0 CYREG_PRT6_OUT_SEL0
#define TX__PRTDSI__OUT_SEL1 CYREG_PRT6_OUT_SEL1
#define TX__PRTDSI__SYNC_OUT CYREG_PRT6_SYNC_OUT
#define TX__PS CYREG_PRT6_PS
#define TX__SHIFT 6
#define TX__SLW CYREG_PRT6_SLW

/* Miscellaneous */
/* -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release */
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0
#define CYDEV_CHIP_MEMBER_5B 3
#define CYDEV_CHIP_FAMILY_PSOC5 3
#define CYDEV_CHIP_DIE_PSOC5LP 3
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_DIE_PSOC5LP
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_DIE_LEOPARD 1
#define CYDEV_CHIP_DIE_PANTHER 2
#define CYDEV_CHIP_DIE_UNKNOWN 0
#define CYDEV_CHIP_FAMILY_PSOC3 1
#define CYDEV_CHIP_FAMILY_PSOC4 2
#define CYDEV_CHIP_FAMILY_UNKNOWN 0
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E123069
#define CYDEV_CHIP_MEMBER_3A 1
#define CYDEV_CHIP_MEMBER_5A 2
#define CYDEV_CHIP_MEMBER_UNKNOWN 0
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_REVISION_3A_ES1 0
#define CYDEV_CHIP_REVISION_3A_ES2 1
#define CYDEV_CHIP_REVISION_3A_ES3 3
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3
#define CYDEV_CHIP_REVISION_5A_ES0 0
#define CYDEV_CHIP_REVISION_5A_ES1 1
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1
#define CYDEV_CHIP_REVISION_5B_ES 0
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REV_PSOC5LP_PRODUCTION
#define CYDEV_CHIP_REV_LEOPARD_ES1 0
#define CYDEV_CHIP_REV_LEOPARD_ES2 1
#define CYDEV_CHIP_REV_LEOPARD_ES3 3
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3
#define CYDEV_CHIP_REV_PANTHER_ES0 0
#define CYDEV_CHIP_REV_PANTHER_ES1 1
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1
#define CYDEV_CHIP_REV_PSOC5LP_ES 0
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_CONFIG_FORCE_ROUTE 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_REQXRES 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DEBUG_ENABLE_MASK 0x20
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DMA_CHANNELS_AVAILABLE 24
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x1000
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x4000
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5
#define CYDEV_VIO3_MV 5000
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
