.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu_trm.inc"

/* PWM1 */
.set PWM1__0__DM__MASK, 0x38
.set PWM1__0__DM__SHIFT, 3
.set PWM1__0__DR, CYREG_PRT1_DR
.set PWM1__0__HSIOM, CYREG_HSIOM_PORT_SEL1
.set PWM1__0__HSIOM_MASK, 0x000000F0
.set PWM1__0__HSIOM_SHIFT, 4
.set PWM1__0__INTCFG, CYREG_PRT1_INTCFG
.set PWM1__0__INTSTAT, CYREG_PRT1_INTSTAT
.set PWM1__0__MASK, 0x02
.set PWM1__0__OUT_SEL, CYREG_UDB_PA1_CFG10
.set PWM1__0__OUT_SEL_SHIFT, 2
.set PWM1__0__OUT_SEL_VAL, 2
.set PWM1__0__PA__CFG0, CYREG_UDB_PA1_CFG0
.set PWM1__0__PA__CFG1, CYREG_UDB_PA1_CFG1
.set PWM1__0__PA__CFG10, CYREG_UDB_PA1_CFG10
.set PWM1__0__PA__CFG11, CYREG_UDB_PA1_CFG11
.set PWM1__0__PA__CFG12, CYREG_UDB_PA1_CFG12
.set PWM1__0__PA__CFG13, CYREG_UDB_PA1_CFG13
.set PWM1__0__PA__CFG14, CYREG_UDB_PA1_CFG14
.set PWM1__0__PA__CFG2, CYREG_UDB_PA1_CFG2
.set PWM1__0__PA__CFG3, CYREG_UDB_PA1_CFG3
.set PWM1__0__PA__CFG4, CYREG_UDB_PA1_CFG4
.set PWM1__0__PA__CFG5, CYREG_UDB_PA1_CFG5
.set PWM1__0__PA__CFG6, CYREG_UDB_PA1_CFG6
.set PWM1__0__PA__CFG7, CYREG_UDB_PA1_CFG7
.set PWM1__0__PA__CFG8, CYREG_UDB_PA1_CFG8
.set PWM1__0__PA__CFG9, CYREG_UDB_PA1_CFG9
.set PWM1__0__PC, CYREG_PRT1_PC
.set PWM1__0__PC2, CYREG_PRT1_PC2
.set PWM1__0__PORT, 1
.set PWM1__0__PS, CYREG_PRT1_PS
.set PWM1__0__SHIFT, 1
.set PWM1__DR, CYREG_PRT1_DR
.set PWM1__INTCFG, CYREG_PRT1_INTCFG
.set PWM1__INTSTAT, CYREG_PRT1_INTSTAT
.set PWM1__MASK, 0x02
.set PWM1__PA__CFG0, CYREG_UDB_PA1_CFG0
.set PWM1__PA__CFG1, CYREG_UDB_PA1_CFG1
.set PWM1__PA__CFG10, CYREG_UDB_PA1_CFG10
.set PWM1__PA__CFG11, CYREG_UDB_PA1_CFG11
.set PWM1__PA__CFG12, CYREG_UDB_PA1_CFG12
.set PWM1__PA__CFG13, CYREG_UDB_PA1_CFG13
.set PWM1__PA__CFG14, CYREG_UDB_PA1_CFG14
.set PWM1__PA__CFG2, CYREG_UDB_PA1_CFG2
.set PWM1__PA__CFG3, CYREG_UDB_PA1_CFG3
.set PWM1__PA__CFG4, CYREG_UDB_PA1_CFG4
.set PWM1__PA__CFG5, CYREG_UDB_PA1_CFG5
.set PWM1__PA__CFG6, CYREG_UDB_PA1_CFG6
.set PWM1__PA__CFG7, CYREG_UDB_PA1_CFG7
.set PWM1__PA__CFG8, CYREG_UDB_PA1_CFG8
.set PWM1__PA__CFG9, CYREG_UDB_PA1_CFG9
.set PWM1__PC, CYREG_PRT1_PC
.set PWM1__PC2, CYREG_PRT1_PC2
.set PWM1__PORT, 1
.set PWM1__PS, CYREG_PRT1_PS
.set PWM1__SHIFT, 1

/* PWM2 */
.set PWM2__0__DM__MASK, 0x1C0
.set PWM2__0__DM__SHIFT, 6
.set PWM2__0__DR, CYREG_PRT1_DR
.set PWM2__0__HSIOM, CYREG_HSIOM_PORT_SEL1
.set PWM2__0__HSIOM_MASK, 0x00000F00
.set PWM2__0__HSIOM_SHIFT, 8
.set PWM2__0__INTCFG, CYREG_PRT1_INTCFG
.set PWM2__0__INTSTAT, CYREG_PRT1_INTSTAT
.set PWM2__0__MASK, 0x04
.set PWM2__0__OUT_SEL, CYREG_UDB_PA1_CFG10
.set PWM2__0__OUT_SEL_SHIFT, 4
.set PWM2__0__OUT_SEL_VAL, -1
.set PWM2__0__PA__CFG0, CYREG_UDB_PA1_CFG0
.set PWM2__0__PA__CFG1, CYREG_UDB_PA1_CFG1
.set PWM2__0__PA__CFG10, CYREG_UDB_PA1_CFG10
.set PWM2__0__PA__CFG11, CYREG_UDB_PA1_CFG11
.set PWM2__0__PA__CFG12, CYREG_UDB_PA1_CFG12
.set PWM2__0__PA__CFG13, CYREG_UDB_PA1_CFG13
.set PWM2__0__PA__CFG14, CYREG_UDB_PA1_CFG14
.set PWM2__0__PA__CFG2, CYREG_UDB_PA1_CFG2
.set PWM2__0__PA__CFG3, CYREG_UDB_PA1_CFG3
.set PWM2__0__PA__CFG4, CYREG_UDB_PA1_CFG4
.set PWM2__0__PA__CFG5, CYREG_UDB_PA1_CFG5
.set PWM2__0__PA__CFG6, CYREG_UDB_PA1_CFG6
.set PWM2__0__PA__CFG7, CYREG_UDB_PA1_CFG7
.set PWM2__0__PA__CFG8, CYREG_UDB_PA1_CFG8
.set PWM2__0__PA__CFG9, CYREG_UDB_PA1_CFG9
.set PWM2__0__PC, CYREG_PRT1_PC
.set PWM2__0__PC2, CYREG_PRT1_PC2
.set PWM2__0__PORT, 1
.set PWM2__0__PS, CYREG_PRT1_PS
.set PWM2__0__SHIFT, 2
.set PWM2__DR, CYREG_PRT1_DR
.set PWM2__INTCFG, CYREG_PRT1_INTCFG
.set PWM2__INTSTAT, CYREG_PRT1_INTSTAT
.set PWM2__MASK, 0x04
.set PWM2__PA__CFG0, CYREG_UDB_PA1_CFG0
.set PWM2__PA__CFG1, CYREG_UDB_PA1_CFG1
.set PWM2__PA__CFG10, CYREG_UDB_PA1_CFG10
.set PWM2__PA__CFG11, CYREG_UDB_PA1_CFG11
.set PWM2__PA__CFG12, CYREG_UDB_PA1_CFG12
.set PWM2__PA__CFG13, CYREG_UDB_PA1_CFG13
.set PWM2__PA__CFG14, CYREG_UDB_PA1_CFG14
.set PWM2__PA__CFG2, CYREG_UDB_PA1_CFG2
.set PWM2__PA__CFG3, CYREG_UDB_PA1_CFG3
.set PWM2__PA__CFG4, CYREG_UDB_PA1_CFG4
.set PWM2__PA__CFG5, CYREG_UDB_PA1_CFG5
.set PWM2__PA__CFG6, CYREG_UDB_PA1_CFG6
.set PWM2__PA__CFG7, CYREG_UDB_PA1_CFG7
.set PWM2__PA__CFG8, CYREG_UDB_PA1_CFG8
.set PWM2__PA__CFG9, CYREG_UDB_PA1_CFG9
.set PWM2__PC, CYREG_PRT1_PC
.set PWM2__PC2, CYREG_PRT1_PC2
.set PWM2__PORT, 1
.set PWM2__PS, CYREG_PRT1_PS
.set PWM2__SHIFT, 2

/* PWM3 */
.set PWM3__0__DM__MASK, 0xE00
.set PWM3__0__DM__SHIFT, 9
.set PWM3__0__DR, CYREG_PRT1_DR
.set PWM3__0__HSIOM, CYREG_HSIOM_PORT_SEL1
.set PWM3__0__HSIOM_MASK, 0x0000F000
.set PWM3__0__HSIOM_SHIFT, 12
.set PWM3__0__INTCFG, CYREG_PRT1_INTCFG
.set PWM3__0__INTSTAT, CYREG_PRT1_INTSTAT
.set PWM3__0__MASK, 0x08
.set PWM3__0__OUT_SEL, CYREG_UDB_PA1_CFG10
.set PWM3__0__OUT_SEL_SHIFT, 6
.set PWM3__0__OUT_SEL_VAL, 0
.set PWM3__0__PA__CFG0, CYREG_UDB_PA1_CFG0
.set PWM3__0__PA__CFG1, CYREG_UDB_PA1_CFG1
.set PWM3__0__PA__CFG10, CYREG_UDB_PA1_CFG10
.set PWM3__0__PA__CFG11, CYREG_UDB_PA1_CFG11
.set PWM3__0__PA__CFG12, CYREG_UDB_PA1_CFG12
.set PWM3__0__PA__CFG13, CYREG_UDB_PA1_CFG13
.set PWM3__0__PA__CFG14, CYREG_UDB_PA1_CFG14
.set PWM3__0__PA__CFG2, CYREG_UDB_PA1_CFG2
.set PWM3__0__PA__CFG3, CYREG_UDB_PA1_CFG3
.set PWM3__0__PA__CFG4, CYREG_UDB_PA1_CFG4
.set PWM3__0__PA__CFG5, CYREG_UDB_PA1_CFG5
.set PWM3__0__PA__CFG6, CYREG_UDB_PA1_CFG6
.set PWM3__0__PA__CFG7, CYREG_UDB_PA1_CFG7
.set PWM3__0__PA__CFG8, CYREG_UDB_PA1_CFG8
.set PWM3__0__PA__CFG9, CYREG_UDB_PA1_CFG9
.set PWM3__0__PC, CYREG_PRT1_PC
.set PWM3__0__PC2, CYREG_PRT1_PC2
.set PWM3__0__PORT, 1
.set PWM3__0__PS, CYREG_PRT1_PS
.set PWM3__0__SHIFT, 3
.set PWM3__DR, CYREG_PRT1_DR
.set PWM3__INTCFG, CYREG_PRT1_INTCFG
.set PWM3__INTSTAT, CYREG_PRT1_INTSTAT
.set PWM3__MASK, 0x08
.set PWM3__PA__CFG0, CYREG_UDB_PA1_CFG0
.set PWM3__PA__CFG1, CYREG_UDB_PA1_CFG1
.set PWM3__PA__CFG10, CYREG_UDB_PA1_CFG10
.set PWM3__PA__CFG11, CYREG_UDB_PA1_CFG11
.set PWM3__PA__CFG12, CYREG_UDB_PA1_CFG12
.set PWM3__PA__CFG13, CYREG_UDB_PA1_CFG13
.set PWM3__PA__CFG14, CYREG_UDB_PA1_CFG14
.set PWM3__PA__CFG2, CYREG_UDB_PA1_CFG2
.set PWM3__PA__CFG3, CYREG_UDB_PA1_CFG3
.set PWM3__PA__CFG4, CYREG_UDB_PA1_CFG4
.set PWM3__PA__CFG5, CYREG_UDB_PA1_CFG5
.set PWM3__PA__CFG6, CYREG_UDB_PA1_CFG6
.set PWM3__PA__CFG7, CYREG_UDB_PA1_CFG7
.set PWM3__PA__CFG8, CYREG_UDB_PA1_CFG8
.set PWM3__PA__CFG9, CYREG_UDB_PA1_CFG9
.set PWM3__PC, CYREG_PRT1_PC
.set PWM3__PC2, CYREG_PRT1_PC2
.set PWM3__PORT, 1
.set PWM3__PS, CYREG_PRT1_PS
.set PWM3__SHIFT, 3

/* PWM_1_cy_m0s8_tcpwm_1 */
.set PWM_1_cy_m0s8_tcpwm_1__CC, CYREG_TCPWM_CNT0_CC
.set PWM_1_cy_m0s8_tcpwm_1__CC_BUFF, CYREG_TCPWM_CNT0_CC_BUFF
.set PWM_1_cy_m0s8_tcpwm_1__COUNTER, CYREG_TCPWM_CNT0_COUNTER
.set PWM_1_cy_m0s8_tcpwm_1__CTRL, CYREG_TCPWM_CNT0_CTRL
.set PWM_1_cy_m0s8_tcpwm_1__INTR, CYREG_TCPWM_CNT0_INTR
.set PWM_1_cy_m0s8_tcpwm_1__INTR_MASK, CYREG_TCPWM_CNT0_INTR_MASK
.set PWM_1_cy_m0s8_tcpwm_1__INTR_MASKED, CYREG_TCPWM_CNT0_INTR_MASKED
.set PWM_1_cy_m0s8_tcpwm_1__INTR_SET, CYREG_TCPWM_CNT0_INTR_SET
.set PWM_1_cy_m0s8_tcpwm_1__PERIOD, CYREG_TCPWM_CNT0_PERIOD
.set PWM_1_cy_m0s8_tcpwm_1__PERIOD_BUFF, CYREG_TCPWM_CNT0_PERIOD_BUFF
.set PWM_1_cy_m0s8_tcpwm_1__STATUS, CYREG_TCPWM_CNT0_STATUS
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMD, CYREG_TCPWM_CMD
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK, 0x01
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT, 0
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK, 0x100
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT, 8
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK, 0x1000000
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT, 24
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK, 0x10000
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT, 16
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CTRL, CYREG_TCPWM_CTRL
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK, 0x01
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT, 0
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE, CYREG_TCPWM_INTR_CAUSE
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK, 0x01
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT, 0
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_NUMBER, 0
.set PWM_1_cy_m0s8_tcpwm_1__TR_CTRL0, CYREG_TCPWM_CNT0_TR_CTRL0
.set PWM_1_cy_m0s8_tcpwm_1__TR_CTRL1, CYREG_TCPWM_CNT0_TR_CTRL1
.set PWM_1_cy_m0s8_tcpwm_1__TR_CTRL2, CYREG_TCPWM_CNT0_TR_CTRL2

/* PWM_2_cy_m0s8_tcpwm_1 */
.set PWM_2_cy_m0s8_tcpwm_1__CC, CYREG_TCPWM_CNT3_CC
.set PWM_2_cy_m0s8_tcpwm_1__CC_BUFF, CYREG_TCPWM_CNT3_CC_BUFF
.set PWM_2_cy_m0s8_tcpwm_1__COUNTER, CYREG_TCPWM_CNT3_COUNTER
.set PWM_2_cy_m0s8_tcpwm_1__CTRL, CYREG_TCPWM_CNT3_CTRL
.set PWM_2_cy_m0s8_tcpwm_1__INTR, CYREG_TCPWM_CNT3_INTR
.set PWM_2_cy_m0s8_tcpwm_1__INTR_MASK, CYREG_TCPWM_CNT3_INTR_MASK
.set PWM_2_cy_m0s8_tcpwm_1__INTR_MASKED, CYREG_TCPWM_CNT3_INTR_MASKED
.set PWM_2_cy_m0s8_tcpwm_1__INTR_SET, CYREG_TCPWM_CNT3_INTR_SET
.set PWM_2_cy_m0s8_tcpwm_1__PERIOD, CYREG_TCPWM_CNT3_PERIOD
.set PWM_2_cy_m0s8_tcpwm_1__PERIOD_BUFF, CYREG_TCPWM_CNT3_PERIOD_BUFF
.set PWM_2_cy_m0s8_tcpwm_1__STATUS, CYREG_TCPWM_CNT3_STATUS
.set PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMD, CYREG_TCPWM_CMD
.set PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK, 0x08
.set PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT, 3
.set PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK, 0x800
.set PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT, 11
.set PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK, 0x8000000
.set PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT, 27
.set PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK, 0x80000
.set PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT, 19
.set PWM_2_cy_m0s8_tcpwm_1__TCPWM_CTRL, CYREG_TCPWM_CTRL
.set PWM_2_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK, 0x08
.set PWM_2_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT, 3
.set PWM_2_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE, CYREG_TCPWM_INTR_CAUSE
.set PWM_2_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK, 0x08
.set PWM_2_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT, 3
.set PWM_2_cy_m0s8_tcpwm_1__TCPWM_NUMBER, 3
.set PWM_2_cy_m0s8_tcpwm_1__TR_CTRL0, CYREG_TCPWM_CNT3_TR_CTRL0
.set PWM_2_cy_m0s8_tcpwm_1__TR_CTRL1, CYREG_TCPWM_CNT3_TR_CTRL1
.set PWM_2_cy_m0s8_tcpwm_1__TR_CTRL2, CYREG_TCPWM_CNT3_TR_CTRL2

/* PWM_3_cy_m0s8_tcpwm_1 */
.set PWM_3_cy_m0s8_tcpwm_1__CC, CYREG_TCPWM_CNT1_CC
.set PWM_3_cy_m0s8_tcpwm_1__CC_BUFF, CYREG_TCPWM_CNT1_CC_BUFF
.set PWM_3_cy_m0s8_tcpwm_1__COUNTER, CYREG_TCPWM_CNT1_COUNTER
.set PWM_3_cy_m0s8_tcpwm_1__CTRL, CYREG_TCPWM_CNT1_CTRL
.set PWM_3_cy_m0s8_tcpwm_1__INTR, CYREG_TCPWM_CNT1_INTR
.set PWM_3_cy_m0s8_tcpwm_1__INTR_MASK, CYREG_TCPWM_CNT1_INTR_MASK
.set PWM_3_cy_m0s8_tcpwm_1__INTR_MASKED, CYREG_TCPWM_CNT1_INTR_MASKED
.set PWM_3_cy_m0s8_tcpwm_1__INTR_SET, CYREG_TCPWM_CNT1_INTR_SET
.set PWM_3_cy_m0s8_tcpwm_1__PERIOD, CYREG_TCPWM_CNT1_PERIOD
.set PWM_3_cy_m0s8_tcpwm_1__PERIOD_BUFF, CYREG_TCPWM_CNT1_PERIOD_BUFF
.set PWM_3_cy_m0s8_tcpwm_1__STATUS, CYREG_TCPWM_CNT1_STATUS
.set PWM_3_cy_m0s8_tcpwm_1__TCPWM_CMD, CYREG_TCPWM_CMD
.set PWM_3_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK, 0x02
.set PWM_3_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT, 1
.set PWM_3_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK, 0x200
.set PWM_3_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT, 9
.set PWM_3_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK, 0x2000000
.set PWM_3_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT, 25
.set PWM_3_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK, 0x20000
.set PWM_3_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT, 17
.set PWM_3_cy_m0s8_tcpwm_1__TCPWM_CTRL, CYREG_TCPWM_CTRL
.set PWM_3_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK, 0x02
.set PWM_3_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT, 1
.set PWM_3_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE, CYREG_TCPWM_INTR_CAUSE
.set PWM_3_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK, 0x02
.set PWM_3_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT, 1
.set PWM_3_cy_m0s8_tcpwm_1__TCPWM_NUMBER, 1
.set PWM_3_cy_m0s8_tcpwm_1__TR_CTRL0, CYREG_TCPWM_CNT1_TR_CTRL0
.set PWM_3_cy_m0s8_tcpwm_1__TR_CTRL1, CYREG_TCPWM_CNT1_TR_CTRL1
.set PWM_3_cy_m0s8_tcpwm_1__TR_CTRL2, CYREG_TCPWM_CNT1_TR_CTRL2

/* TIM_4_cy_m0s8_tcpwm_1 */
.set TIM_4_cy_m0s8_tcpwm_1__CC, CYREG_TCPWM_CNT2_CC
.set TIM_4_cy_m0s8_tcpwm_1__CC_BUFF, CYREG_TCPWM_CNT2_CC_BUFF
.set TIM_4_cy_m0s8_tcpwm_1__COUNTER, CYREG_TCPWM_CNT2_COUNTER
.set TIM_4_cy_m0s8_tcpwm_1__CTRL, CYREG_TCPWM_CNT2_CTRL
.set TIM_4_cy_m0s8_tcpwm_1__INTR, CYREG_TCPWM_CNT2_INTR
.set TIM_4_cy_m0s8_tcpwm_1__INTR_MASK, CYREG_TCPWM_CNT2_INTR_MASK
.set TIM_4_cy_m0s8_tcpwm_1__INTR_MASKED, CYREG_TCPWM_CNT2_INTR_MASKED
.set TIM_4_cy_m0s8_tcpwm_1__INTR_SET, CYREG_TCPWM_CNT2_INTR_SET
.set TIM_4_cy_m0s8_tcpwm_1__PERIOD, CYREG_TCPWM_CNT2_PERIOD
.set TIM_4_cy_m0s8_tcpwm_1__PERIOD_BUFF, CYREG_TCPWM_CNT2_PERIOD_BUFF
.set TIM_4_cy_m0s8_tcpwm_1__STATUS, CYREG_TCPWM_CNT2_STATUS
.set TIM_4_cy_m0s8_tcpwm_1__TCPWM_CMD, CYREG_TCPWM_CMD
.set TIM_4_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK, 0x04
.set TIM_4_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT, 2
.set TIM_4_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK, 0x400
.set TIM_4_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT, 10
.set TIM_4_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK, 0x4000000
.set TIM_4_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT, 26
.set TIM_4_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK, 0x40000
.set TIM_4_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT, 18
.set TIM_4_cy_m0s8_tcpwm_1__TCPWM_CTRL, CYREG_TCPWM_CTRL
.set TIM_4_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK, 0x04
.set TIM_4_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT, 2
.set TIM_4_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE, CYREG_TCPWM_INTR_CAUSE
.set TIM_4_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK, 0x04
.set TIM_4_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT, 2
.set TIM_4_cy_m0s8_tcpwm_1__TCPWM_NUMBER, 2
.set TIM_4_cy_m0s8_tcpwm_1__TR_CTRL0, CYREG_TCPWM_CNT2_TR_CTRL0
.set TIM_4_cy_m0s8_tcpwm_1__TR_CTRL1, CYREG_TCPWM_CNT2_TR_CTRL1
.set TIM_4_cy_m0s8_tcpwm_1__TR_CTRL2, CYREG_TCPWM_CNT2_TR_CTRL2

/* Clock_1 */
.set Clock_1__DIVIDER_MASK, 0x0000FFFF
.set Clock_1__ENABLE, CYREG_CLK_DIVIDER_C00
.set Clock_1__ENABLE_MASK, 0x80000000
.set Clock_1__MASK, 0x80000000
.set Clock_1__REGISTER, CYREG_CLK_DIVIDER_C00

/* Clock_2 */
.set Clock_2__DIVIDER_MASK, 0x0000FFFF
.set Clock_2__ENABLE, CYREG_CLK_DIVIDER_A00
.set Clock_2__ENABLE_MASK, 0x80000000
.set Clock_2__MASK, 0x80000000
.set Clock_2__REGISTER, CYREG_CLK_DIVIDER_A00

/* Clock_3 */
.set Clock_3__DIVIDER_MASK, 0x0000FFFF
.set Clock_3__ENABLE, CYREG_CLK_DIVIDER_B00
.set Clock_3__ENABLE_MASK, 0x80000000
.set Clock_3__MASK, 0x80000000
.set Clock_3__REGISTER, CYREG_CLK_DIVIDER_B00

/* Clock_4 */
.set Clock_4__DIVIDER_MASK, 0x0000FFFF
.set Clock_4__ENABLE, CYREG_CLK_DIVIDER_A01
.set Clock_4__ENABLE_MASK, 0x80000000
.set Clock_4__MASK, 0x80000000
.set Clock_4__REGISTER, CYREG_CLK_DIVIDER_A01

/* TC1_ISR */
.set TC1_ISR__INTC_CLR_EN_REG, CYREG_CM0_ICER
.set TC1_ISR__INTC_CLR_PD_REG, CYREG_CM0_ICPR
.set TC1_ISR__INTC_MASK, 0x10000
.set TC1_ISR__INTC_NUMBER, 16
.set TC1_ISR__INTC_PRIOR_MASK, 0xC0
.set TC1_ISR__INTC_PRIOR_NUM, 3
.set TC1_ISR__INTC_PRIOR_REG, CYREG_CM0_IPR4
.set TC1_ISR__INTC_SET_EN_REG, CYREG_CM0_ISER
.set TC1_ISR__INTC_SET_PD_REG, CYREG_CM0_ISPR

/* TC2_ISR */
.set TC2_ISR__INTC_CLR_EN_REG, CYREG_CM0_ICER
.set TC2_ISR__INTC_CLR_PD_REG, CYREG_CM0_ICPR
.set TC2_ISR__INTC_MASK, 0x80000
.set TC2_ISR__INTC_NUMBER, 19
.set TC2_ISR__INTC_PRIOR_MASK, 0xC0000000
.set TC2_ISR__INTC_PRIOR_NUM, 3
.set TC2_ISR__INTC_PRIOR_REG, CYREG_CM0_IPR4
.set TC2_ISR__INTC_SET_EN_REG, CYREG_CM0_ISER
.set TC2_ISR__INTC_SET_PD_REG, CYREG_CM0_ISPR

/* TC3_ISR */
.set TC3_ISR__INTC_CLR_EN_REG, CYREG_CM0_ICER
.set TC3_ISR__INTC_CLR_PD_REG, CYREG_CM0_ICPR
.set TC3_ISR__INTC_MASK, 0x20000
.set TC3_ISR__INTC_NUMBER, 17
.set TC3_ISR__INTC_PRIOR_MASK, 0xC000
.set TC3_ISR__INTC_PRIOR_NUM, 3
.set TC3_ISR__INTC_PRIOR_REG, CYREG_CM0_IPR4
.set TC3_ISR__INTC_SET_EN_REG, CYREG_CM0_ISER
.set TC3_ISR__INTC_SET_PD_REG, CYREG_CM0_ISPR

/* TC4_ISR */
.set TC4_ISR__INTC_CLR_EN_REG, CYREG_CM0_ICER
.set TC4_ISR__INTC_CLR_PD_REG, CYREG_CM0_ICPR
.set TC4_ISR__INTC_MASK, 0x40000
.set TC4_ISR__INTC_NUMBER, 18
.set TC4_ISR__INTC_PRIOR_MASK, 0xC00000
.set TC4_ISR__INTC_PRIOR_NUM, 3
.set TC4_ISR__INTC_PRIOR_REG, CYREG_CM0_IPR4
.set TC4_ISR__INTC_SET_EN_REG, CYREG_CM0_ISER
.set TC4_ISR__INTC_SET_PD_REG, CYREG_CM0_ISPR

/* LCD_Char_1_LCDPort */
.set LCD_Char_1_LCDPort__0__DM__MASK, 0x07
.set LCD_Char_1_LCDPort__0__DM__SHIFT, 0
.set LCD_Char_1_LCDPort__0__DR, CYREG_PRT0_DR
.set LCD_Char_1_LCDPort__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set LCD_Char_1_LCDPort__0__HSIOM_MASK, 0x0000000F
.set LCD_Char_1_LCDPort__0__HSIOM_SHIFT, 0
.set LCD_Char_1_LCDPort__0__INTCFG, CYREG_PRT0_INTCFG
.set LCD_Char_1_LCDPort__0__INTSTAT, CYREG_PRT0_INTSTAT
.set LCD_Char_1_LCDPort__0__MASK, 0x01
.set LCD_Char_1_LCDPort__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set LCD_Char_1_LCDPort__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set LCD_Char_1_LCDPort__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set LCD_Char_1_LCDPort__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set LCD_Char_1_LCDPort__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set LCD_Char_1_LCDPort__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set LCD_Char_1_LCDPort__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set LCD_Char_1_LCDPort__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set LCD_Char_1_LCDPort__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set LCD_Char_1_LCDPort__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set LCD_Char_1_LCDPort__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set LCD_Char_1_LCDPort__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set LCD_Char_1_LCDPort__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set LCD_Char_1_LCDPort__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set LCD_Char_1_LCDPort__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set LCD_Char_1_LCDPort__0__PC, CYREG_PRT0_PC
.set LCD_Char_1_LCDPort__0__PC2, CYREG_PRT0_PC2
.set LCD_Char_1_LCDPort__0__PORT, 0
.set LCD_Char_1_LCDPort__0__PS, CYREG_PRT0_PS
.set LCD_Char_1_LCDPort__0__SHIFT, 0
.set LCD_Char_1_LCDPort__1__DM__MASK, 0x38
.set LCD_Char_1_LCDPort__1__DM__SHIFT, 3
.set LCD_Char_1_LCDPort__1__DR, CYREG_PRT0_DR
.set LCD_Char_1_LCDPort__1__HSIOM, CYREG_HSIOM_PORT_SEL0
.set LCD_Char_1_LCDPort__1__HSIOM_MASK, 0x000000F0
.set LCD_Char_1_LCDPort__1__HSIOM_SHIFT, 4
.set LCD_Char_1_LCDPort__1__INTCFG, CYREG_PRT0_INTCFG
.set LCD_Char_1_LCDPort__1__INTSTAT, CYREG_PRT0_INTSTAT
.set LCD_Char_1_LCDPort__1__MASK, 0x02
.set LCD_Char_1_LCDPort__1__PA__CFG0, CYREG_UDB_PA0_CFG0
.set LCD_Char_1_LCDPort__1__PA__CFG1, CYREG_UDB_PA0_CFG1
.set LCD_Char_1_LCDPort__1__PA__CFG10, CYREG_UDB_PA0_CFG10
.set LCD_Char_1_LCDPort__1__PA__CFG11, CYREG_UDB_PA0_CFG11
.set LCD_Char_1_LCDPort__1__PA__CFG12, CYREG_UDB_PA0_CFG12
.set LCD_Char_1_LCDPort__1__PA__CFG13, CYREG_UDB_PA0_CFG13
.set LCD_Char_1_LCDPort__1__PA__CFG14, CYREG_UDB_PA0_CFG14
.set LCD_Char_1_LCDPort__1__PA__CFG2, CYREG_UDB_PA0_CFG2
.set LCD_Char_1_LCDPort__1__PA__CFG3, CYREG_UDB_PA0_CFG3
.set LCD_Char_1_LCDPort__1__PA__CFG4, CYREG_UDB_PA0_CFG4
.set LCD_Char_1_LCDPort__1__PA__CFG5, CYREG_UDB_PA0_CFG5
.set LCD_Char_1_LCDPort__1__PA__CFG6, CYREG_UDB_PA0_CFG6
.set LCD_Char_1_LCDPort__1__PA__CFG7, CYREG_UDB_PA0_CFG7
.set LCD_Char_1_LCDPort__1__PA__CFG8, CYREG_UDB_PA0_CFG8
.set LCD_Char_1_LCDPort__1__PA__CFG9, CYREG_UDB_PA0_CFG9
.set LCD_Char_1_LCDPort__1__PC, CYREG_PRT0_PC
.set LCD_Char_1_LCDPort__1__PC2, CYREG_PRT0_PC2
.set LCD_Char_1_LCDPort__1__PORT, 0
.set LCD_Char_1_LCDPort__1__PS, CYREG_PRT0_PS
.set LCD_Char_1_LCDPort__1__SHIFT, 1
.set LCD_Char_1_LCDPort__2__DM__MASK, 0x1C0
.set LCD_Char_1_LCDPort__2__DM__SHIFT, 6
.set LCD_Char_1_LCDPort__2__DR, CYREG_PRT0_DR
.set LCD_Char_1_LCDPort__2__HSIOM, CYREG_HSIOM_PORT_SEL0
.set LCD_Char_1_LCDPort__2__HSIOM_MASK, 0x00000F00
.set LCD_Char_1_LCDPort__2__HSIOM_SHIFT, 8
.set LCD_Char_1_LCDPort__2__INTCFG, CYREG_PRT0_INTCFG
.set LCD_Char_1_LCDPort__2__INTSTAT, CYREG_PRT0_INTSTAT
.set LCD_Char_1_LCDPort__2__MASK, 0x04
.set LCD_Char_1_LCDPort__2__PA__CFG0, CYREG_UDB_PA0_CFG0
.set LCD_Char_1_LCDPort__2__PA__CFG1, CYREG_UDB_PA0_CFG1
.set LCD_Char_1_LCDPort__2__PA__CFG10, CYREG_UDB_PA0_CFG10
.set LCD_Char_1_LCDPort__2__PA__CFG11, CYREG_UDB_PA0_CFG11
.set LCD_Char_1_LCDPort__2__PA__CFG12, CYREG_UDB_PA0_CFG12
.set LCD_Char_1_LCDPort__2__PA__CFG13, CYREG_UDB_PA0_CFG13
.set LCD_Char_1_LCDPort__2__PA__CFG14, CYREG_UDB_PA0_CFG14
.set LCD_Char_1_LCDPort__2__PA__CFG2, CYREG_UDB_PA0_CFG2
.set LCD_Char_1_LCDPort__2__PA__CFG3, CYREG_UDB_PA0_CFG3
.set LCD_Char_1_LCDPort__2__PA__CFG4, CYREG_UDB_PA0_CFG4
.set LCD_Char_1_LCDPort__2__PA__CFG5, CYREG_UDB_PA0_CFG5
.set LCD_Char_1_LCDPort__2__PA__CFG6, CYREG_UDB_PA0_CFG6
.set LCD_Char_1_LCDPort__2__PA__CFG7, CYREG_UDB_PA0_CFG7
.set LCD_Char_1_LCDPort__2__PA__CFG8, CYREG_UDB_PA0_CFG8
.set LCD_Char_1_LCDPort__2__PA__CFG9, CYREG_UDB_PA0_CFG9
.set LCD_Char_1_LCDPort__2__PC, CYREG_PRT0_PC
.set LCD_Char_1_LCDPort__2__PC2, CYREG_PRT0_PC2
.set LCD_Char_1_LCDPort__2__PORT, 0
.set LCD_Char_1_LCDPort__2__PS, CYREG_PRT0_PS
.set LCD_Char_1_LCDPort__2__SHIFT, 2
.set LCD_Char_1_LCDPort__3__DM__MASK, 0xE00
.set LCD_Char_1_LCDPort__3__DM__SHIFT, 9
.set LCD_Char_1_LCDPort__3__DR, CYREG_PRT0_DR
.set LCD_Char_1_LCDPort__3__HSIOM, CYREG_HSIOM_PORT_SEL0
.set LCD_Char_1_LCDPort__3__HSIOM_MASK, 0x0000F000
.set LCD_Char_1_LCDPort__3__HSIOM_SHIFT, 12
.set LCD_Char_1_LCDPort__3__INTCFG, CYREG_PRT0_INTCFG
.set LCD_Char_1_LCDPort__3__INTSTAT, CYREG_PRT0_INTSTAT
.set LCD_Char_1_LCDPort__3__MASK, 0x08
.set LCD_Char_1_LCDPort__3__PA__CFG0, CYREG_UDB_PA0_CFG0
.set LCD_Char_1_LCDPort__3__PA__CFG1, CYREG_UDB_PA0_CFG1
.set LCD_Char_1_LCDPort__3__PA__CFG10, CYREG_UDB_PA0_CFG10
.set LCD_Char_1_LCDPort__3__PA__CFG11, CYREG_UDB_PA0_CFG11
.set LCD_Char_1_LCDPort__3__PA__CFG12, CYREG_UDB_PA0_CFG12
.set LCD_Char_1_LCDPort__3__PA__CFG13, CYREG_UDB_PA0_CFG13
.set LCD_Char_1_LCDPort__3__PA__CFG14, CYREG_UDB_PA0_CFG14
.set LCD_Char_1_LCDPort__3__PA__CFG2, CYREG_UDB_PA0_CFG2
.set LCD_Char_1_LCDPort__3__PA__CFG3, CYREG_UDB_PA0_CFG3
.set LCD_Char_1_LCDPort__3__PA__CFG4, CYREG_UDB_PA0_CFG4
.set LCD_Char_1_LCDPort__3__PA__CFG5, CYREG_UDB_PA0_CFG5
.set LCD_Char_1_LCDPort__3__PA__CFG6, CYREG_UDB_PA0_CFG6
.set LCD_Char_1_LCDPort__3__PA__CFG7, CYREG_UDB_PA0_CFG7
.set LCD_Char_1_LCDPort__3__PA__CFG8, CYREG_UDB_PA0_CFG8
.set LCD_Char_1_LCDPort__3__PA__CFG9, CYREG_UDB_PA0_CFG9
.set LCD_Char_1_LCDPort__3__PC, CYREG_PRT0_PC
.set LCD_Char_1_LCDPort__3__PC2, CYREG_PRT0_PC2
.set LCD_Char_1_LCDPort__3__PORT, 0
.set LCD_Char_1_LCDPort__3__PS, CYREG_PRT0_PS
.set LCD_Char_1_LCDPort__3__SHIFT, 3
.set LCD_Char_1_LCDPort__4__DM__MASK, 0x7000
.set LCD_Char_1_LCDPort__4__DM__SHIFT, 12
.set LCD_Char_1_LCDPort__4__DR, CYREG_PRT0_DR
.set LCD_Char_1_LCDPort__4__HSIOM, CYREG_HSIOM_PORT_SEL0
.set LCD_Char_1_LCDPort__4__HSIOM_MASK, 0x000F0000
.set LCD_Char_1_LCDPort__4__HSIOM_SHIFT, 16
.set LCD_Char_1_LCDPort__4__INTCFG, CYREG_PRT0_INTCFG
.set LCD_Char_1_LCDPort__4__INTSTAT, CYREG_PRT0_INTSTAT
.set LCD_Char_1_LCDPort__4__MASK, 0x10
.set LCD_Char_1_LCDPort__4__PA__CFG0, CYREG_UDB_PA0_CFG0
.set LCD_Char_1_LCDPort__4__PA__CFG1, CYREG_UDB_PA0_CFG1
.set LCD_Char_1_LCDPort__4__PA__CFG10, CYREG_UDB_PA0_CFG10
.set LCD_Char_1_LCDPort__4__PA__CFG11, CYREG_UDB_PA0_CFG11
.set LCD_Char_1_LCDPort__4__PA__CFG12, CYREG_UDB_PA0_CFG12
.set LCD_Char_1_LCDPort__4__PA__CFG13, CYREG_UDB_PA0_CFG13
.set LCD_Char_1_LCDPort__4__PA__CFG14, CYREG_UDB_PA0_CFG14
.set LCD_Char_1_LCDPort__4__PA__CFG2, CYREG_UDB_PA0_CFG2
.set LCD_Char_1_LCDPort__4__PA__CFG3, CYREG_UDB_PA0_CFG3
.set LCD_Char_1_LCDPort__4__PA__CFG4, CYREG_UDB_PA0_CFG4
.set LCD_Char_1_LCDPort__4__PA__CFG5, CYREG_UDB_PA0_CFG5
.set LCD_Char_1_LCDPort__4__PA__CFG6, CYREG_UDB_PA0_CFG6
.set LCD_Char_1_LCDPort__4__PA__CFG7, CYREG_UDB_PA0_CFG7
.set LCD_Char_1_LCDPort__4__PA__CFG8, CYREG_UDB_PA0_CFG8
.set LCD_Char_1_LCDPort__4__PA__CFG9, CYREG_UDB_PA0_CFG9
.set LCD_Char_1_LCDPort__4__PC, CYREG_PRT0_PC
.set LCD_Char_1_LCDPort__4__PC2, CYREG_PRT0_PC2
.set LCD_Char_1_LCDPort__4__PORT, 0
.set LCD_Char_1_LCDPort__4__PS, CYREG_PRT0_PS
.set LCD_Char_1_LCDPort__4__SHIFT, 4
.set LCD_Char_1_LCDPort__5__DM__MASK, 0x38000
.set LCD_Char_1_LCDPort__5__DM__SHIFT, 15
.set LCD_Char_1_LCDPort__5__DR, CYREG_PRT0_DR
.set LCD_Char_1_LCDPort__5__HSIOM, CYREG_HSIOM_PORT_SEL0
.set LCD_Char_1_LCDPort__5__HSIOM_MASK, 0x00F00000
.set LCD_Char_1_LCDPort__5__HSIOM_SHIFT, 20
.set LCD_Char_1_LCDPort__5__INTCFG, CYREG_PRT0_INTCFG
.set LCD_Char_1_LCDPort__5__INTSTAT, CYREG_PRT0_INTSTAT
.set LCD_Char_1_LCDPort__5__MASK, 0x20
.set LCD_Char_1_LCDPort__5__PA__CFG0, CYREG_UDB_PA0_CFG0
.set LCD_Char_1_LCDPort__5__PA__CFG1, CYREG_UDB_PA0_CFG1
.set LCD_Char_1_LCDPort__5__PA__CFG10, CYREG_UDB_PA0_CFG10
.set LCD_Char_1_LCDPort__5__PA__CFG11, CYREG_UDB_PA0_CFG11
.set LCD_Char_1_LCDPort__5__PA__CFG12, CYREG_UDB_PA0_CFG12
.set LCD_Char_1_LCDPort__5__PA__CFG13, CYREG_UDB_PA0_CFG13
.set LCD_Char_1_LCDPort__5__PA__CFG14, CYREG_UDB_PA0_CFG14
.set LCD_Char_1_LCDPort__5__PA__CFG2, CYREG_UDB_PA0_CFG2
.set LCD_Char_1_LCDPort__5__PA__CFG3, CYREG_UDB_PA0_CFG3
.set LCD_Char_1_LCDPort__5__PA__CFG4, CYREG_UDB_PA0_CFG4
.set LCD_Char_1_LCDPort__5__PA__CFG5, CYREG_UDB_PA0_CFG5
.set LCD_Char_1_LCDPort__5__PA__CFG6, CYREG_UDB_PA0_CFG6
.set LCD_Char_1_LCDPort__5__PA__CFG7, CYREG_UDB_PA0_CFG7
.set LCD_Char_1_LCDPort__5__PA__CFG8, CYREG_UDB_PA0_CFG8
.set LCD_Char_1_LCDPort__5__PA__CFG9, CYREG_UDB_PA0_CFG9
.set LCD_Char_1_LCDPort__5__PC, CYREG_PRT0_PC
.set LCD_Char_1_LCDPort__5__PC2, CYREG_PRT0_PC2
.set LCD_Char_1_LCDPort__5__PORT, 0
.set LCD_Char_1_LCDPort__5__PS, CYREG_PRT0_PS
.set LCD_Char_1_LCDPort__5__SHIFT, 5
.set LCD_Char_1_LCDPort__6__DM__MASK, 0x1C0000
.set LCD_Char_1_LCDPort__6__DM__SHIFT, 18
.set LCD_Char_1_LCDPort__6__DR, CYREG_PRT0_DR
.set LCD_Char_1_LCDPort__6__HSIOM, CYREG_HSIOM_PORT_SEL0
.set LCD_Char_1_LCDPort__6__HSIOM_MASK, 0x0F000000
.set LCD_Char_1_LCDPort__6__HSIOM_SHIFT, 24
.set LCD_Char_1_LCDPort__6__INTCFG, CYREG_PRT0_INTCFG
.set LCD_Char_1_LCDPort__6__INTSTAT, CYREG_PRT0_INTSTAT
.set LCD_Char_1_LCDPort__6__MASK, 0x40
.set LCD_Char_1_LCDPort__6__PA__CFG0, CYREG_UDB_PA0_CFG0
.set LCD_Char_1_LCDPort__6__PA__CFG1, CYREG_UDB_PA0_CFG1
.set LCD_Char_1_LCDPort__6__PA__CFG10, CYREG_UDB_PA0_CFG10
.set LCD_Char_1_LCDPort__6__PA__CFG11, CYREG_UDB_PA0_CFG11
.set LCD_Char_1_LCDPort__6__PA__CFG12, CYREG_UDB_PA0_CFG12
.set LCD_Char_1_LCDPort__6__PA__CFG13, CYREG_UDB_PA0_CFG13
.set LCD_Char_1_LCDPort__6__PA__CFG14, CYREG_UDB_PA0_CFG14
.set LCD_Char_1_LCDPort__6__PA__CFG2, CYREG_UDB_PA0_CFG2
.set LCD_Char_1_LCDPort__6__PA__CFG3, CYREG_UDB_PA0_CFG3
.set LCD_Char_1_LCDPort__6__PA__CFG4, CYREG_UDB_PA0_CFG4
.set LCD_Char_1_LCDPort__6__PA__CFG5, CYREG_UDB_PA0_CFG5
.set LCD_Char_1_LCDPort__6__PA__CFG6, CYREG_UDB_PA0_CFG6
.set LCD_Char_1_LCDPort__6__PA__CFG7, CYREG_UDB_PA0_CFG7
.set LCD_Char_1_LCDPort__6__PA__CFG8, CYREG_UDB_PA0_CFG8
.set LCD_Char_1_LCDPort__6__PA__CFG9, CYREG_UDB_PA0_CFG9
.set LCD_Char_1_LCDPort__6__PC, CYREG_PRT0_PC
.set LCD_Char_1_LCDPort__6__PC2, CYREG_PRT0_PC2
.set LCD_Char_1_LCDPort__6__PORT, 0
.set LCD_Char_1_LCDPort__6__PS, CYREG_PRT0_PS
.set LCD_Char_1_LCDPort__6__SHIFT, 6
.set LCD_Char_1_LCDPort__DR, CYREG_PRT0_DR
.set LCD_Char_1_LCDPort__INTCFG, CYREG_PRT0_INTCFG
.set LCD_Char_1_LCDPort__INTSTAT, CYREG_PRT0_INTSTAT
.set LCD_Char_1_LCDPort__MASK, 0x7F
.set LCD_Char_1_LCDPort__PA__CFG0, CYREG_UDB_PA0_CFG0
.set LCD_Char_1_LCDPort__PA__CFG1, CYREG_UDB_PA0_CFG1
.set LCD_Char_1_LCDPort__PA__CFG10, CYREG_UDB_PA0_CFG10
.set LCD_Char_1_LCDPort__PA__CFG11, CYREG_UDB_PA0_CFG11
.set LCD_Char_1_LCDPort__PA__CFG12, CYREG_UDB_PA0_CFG12
.set LCD_Char_1_LCDPort__PA__CFG13, CYREG_UDB_PA0_CFG13
.set LCD_Char_1_LCDPort__PA__CFG14, CYREG_UDB_PA0_CFG14
.set LCD_Char_1_LCDPort__PA__CFG2, CYREG_UDB_PA0_CFG2
.set LCD_Char_1_LCDPort__PA__CFG3, CYREG_UDB_PA0_CFG3
.set LCD_Char_1_LCDPort__PA__CFG4, CYREG_UDB_PA0_CFG4
.set LCD_Char_1_LCDPort__PA__CFG5, CYREG_UDB_PA0_CFG5
.set LCD_Char_1_LCDPort__PA__CFG6, CYREG_UDB_PA0_CFG6
.set LCD_Char_1_LCDPort__PA__CFG7, CYREG_UDB_PA0_CFG7
.set LCD_Char_1_LCDPort__PA__CFG8, CYREG_UDB_PA0_CFG8
.set LCD_Char_1_LCDPort__PA__CFG9, CYREG_UDB_PA0_CFG9
.set LCD_Char_1_LCDPort__PC, CYREG_PRT0_PC
.set LCD_Char_1_LCDPort__PC2, CYREG_PRT0_PC2
.set LCD_Char_1_LCDPort__PORT, 0
.set LCD_Char_1_LCDPort__PS, CYREG_PRT0_PS
.set LCD_Char_1_LCDPort__SHIFT, 0

/* Miscellaneous */
.set CYDEV_BCLK__HFCLK__HZ, 24000000
.set CYDEV_BCLK__HFCLK__KHZ, 24000
.set CYDEV_BCLK__HFCLK__MHZ, 24
.set CYDEV_BCLK__SYSCLK__HZ, 24000000
.set CYDEV_BCLK__SYSCLK__KHZ, 24000
.set CYDEV_BCLK__SYSCLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PANTHER, 4
.set CYDEV_CHIP_DIE_PSOC4A, 2
.set CYDEV_CHIP_DIE_PSOC5LP, 5
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC4
.set CYDEV_CHIP_JTAG_ID, 0x04161193
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 2
.set CYDEV_CHIP_MEMBER_4D, 3
.set CYDEV_CHIP_MEMBER_5A, 4
.set CYDEV_CHIP_MEMBER_5B, 5
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_4A
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PANTHER_ES0, 0
.set CYDEV_CHIP_REV_PANTHER_ES1, 1
.set CYDEV_CHIP_REV_PANTHER_PRODUCTION, 1
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_ES0, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_4A_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_READ_ACCELERATOR, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_PROTECT_KILL, 4
.set CYDEV_DEBUG_PROTECT_OPEN, 1
.set CYDEV_DEBUG_PROTECT, CYDEV_DEBUG_PROTECT_OPEN
.set CYDEV_DEBUG_PROTECT_PROTECTED, 2
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_HEAP_SIZE, 0x0100
.set CYDEV_PROJ_TYPE, 2
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_STACK_SIZE, 0x0400
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 1
.set CYDEV_VDDA_MV, 3300
.set CYDEV_VDDD_MV, 3300
.set CYIPBLOCK_M0S8_CTBM_VERSION, 0
.set CYIPBLOCK_m0s8cpuss_VERSION, 0
.set CYIPBLOCK_m0s8csd_VERSION, 0
.set CYIPBLOCK_m0s8gpio2_VERSION, 0
.set CYIPBLOCK_m0s8hsiom4a_VERSION, 0
.set CYIPBLOCK_m0s8lcd_VERSION, 0
.set CYIPBLOCK_m0s8lpcomp_VERSION, 0
.set CYIPBLOCK_m0s8pclk_VERSION, 0
.set CYIPBLOCK_m0s8sar_VERSION, 0
.set CYIPBLOCK_m0s8scb_VERSION, 0
.set CYIPBLOCK_m0s8srssv2_VERSION, 1
.set CYIPBLOCK_m0s8tcpwm_VERSION, 0
.set CYIPBLOCK_m0s8udbif_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 2
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
