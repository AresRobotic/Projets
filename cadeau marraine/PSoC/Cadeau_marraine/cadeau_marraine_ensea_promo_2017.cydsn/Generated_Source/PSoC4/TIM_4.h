/*******************************************************************************
* File Name: TIM_4.h
* Version 1.10
*
* Description:
*  This file provides constants and parameter values for the TIM_4
*  component.
*
* Note:
*  None
*
********************************************************************************
* Copyright 2013-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_TCPWM_TIM_4_H)
#define CY_TCPWM_TIM_4_H

#include "cytypes.h"
#include "cyfitter.h"


/*******************************************************************************
* Internal Type defines
*******************************************************************************/

/* Structure to save state before go to sleep */
typedef struct
{
    uint8  enableState;
} TIM_4_BACKUP_STRUCT;


/*******************************************************************************
* Variables
*******************************************************************************/
extern uint8  TIM_4_initVar;


/***************************************
*   Conditional Compilation Parameters
****************************************/

#define TIM_4_CY_TCPWM_V2                    (CYIPBLOCK_m0s8tcpwm_VERSION == 2u)

/* TCPWM Configuration */
#define TIM_4_CONFIG                         (1lu)

/* Quad Mode */
/* Parameters */
#define TIM_4_QUAD_ENCODING_MODES            (0lu)

/* Signal modes */
#define TIM_4_QUAD_INDEX_SIGNAL_MODE         (0lu)
#define TIM_4_QUAD_PHIA_SIGNAL_MODE          (3lu)
#define TIM_4_QUAD_PHIB_SIGNAL_MODE          (3lu)
#define TIM_4_QUAD_STOP_SIGNAL_MODE          (0lu)

/* Signal present */
#define TIM_4_QUAD_INDEX_SIGNAL_PRESENT      (0lu)
#define TIM_4_QUAD_STOP_SIGNAL_PRESENT       (0lu)

/* Interrupt Mask */
#define TIM_4_QUAD_INTERRUPT_MASK            (1lu)

/* Timer/Counter Mode */
/* Parameters */
#define TIM_4_TC_RUN_MODE                    (0lu)
#define TIM_4_TC_COUNTER_MODE                (0lu)
#define TIM_4_TC_COMP_CAP_MODE               (2lu)
#define TIM_4_TC_PRESCALER                   (0lu)

/* Signal modes */
#define TIM_4_TC_RELOAD_SIGNAL_MODE          (0lu)
#define TIM_4_TC_COUNT_SIGNAL_MODE           (3lu)
#define TIM_4_TC_START_SIGNAL_MODE           (0lu)
#define TIM_4_TC_STOP_SIGNAL_MODE            (0lu)
#define TIM_4_TC_CAPTURE_SIGNAL_MODE         (0lu)

/* Signal present */
#define TIM_4_TC_RELOAD_SIGNAL_PRESENT       (0lu)
#define TIM_4_TC_COUNT_SIGNAL_PRESENT        (0lu)
#define TIM_4_TC_START_SIGNAL_PRESENT        (0lu)
#define TIM_4_TC_STOP_SIGNAL_PRESENT         (0lu)
#define TIM_4_TC_CAPTURE_SIGNAL_PRESENT      (0lu)

/* Interrupt Mask */
#define TIM_4_TC_INTERRUPT_MASK              (1lu)

/* PWM Mode */
/* Parameters */
#define TIM_4_PWM_KILL_EVENT                 (0lu)
#define TIM_4_PWM_STOP_EVENT                 (0lu)
#define TIM_4_PWM_MODE                       (4lu)
#define TIM_4_PWM_OUT_N_INVERT               (0lu)
#define TIM_4_PWM_OUT_INVERT                 (0lu)
#define TIM_4_PWM_ALIGN                      (0lu)
#define TIM_4_PWM_RUN_MODE                   (0lu)
#define TIM_4_PWM_DEAD_TIME_CYCLE            (0lu)
#define TIM_4_PWM_PRESCALER                  (0lu)

/* Signal modes */
#define TIM_4_PWM_RELOAD_SIGNAL_MODE         (0lu)
#define TIM_4_PWM_COUNT_SIGNAL_MODE          (3lu)
#define TIM_4_PWM_START_SIGNAL_MODE          (0lu)
#define TIM_4_PWM_STOP_SIGNAL_MODE           (0lu)
#define TIM_4_PWM_SWITCH_SIGNAL_MODE         (0lu)

/* Signal present */
#define TIM_4_PWM_RELOAD_SIGNAL_PRESENT      (0lu)
#define TIM_4_PWM_COUNT_SIGNAL_PRESENT       (0lu)
#define TIM_4_PWM_START_SIGNAL_PRESENT       (0lu)
#define TIM_4_PWM_STOP_SIGNAL_PRESENT        (0lu)
#define TIM_4_PWM_SWITCH_SIGNAL_PRESENT      (0lu)

/* Interrupt Mask */
#define TIM_4_PWM_INTERRUPT_MASK             (1lu)


/***************************************
*    Initial Parameter Constants
***************************************/

/* Timer/Counter Mode */
#define TIM_4_TC_PERIOD_VALUE                (60000lu)
#define TIM_4_TC_COMPARE_VALUE               (65535lu)
#define TIM_4_TC_COMPARE_BUF_VALUE           (65535lu)
#define TIM_4_TC_COMPARE_SWAP                (0lu)

/* PWM Mode */
#define TIM_4_PWM_PERIOD_VALUE               (10000lu)
#define TIM_4_PWM_PERIOD_BUF_VALUE           (65535lu)
#define TIM_4_PWM_PERIOD_SWAP                (0lu)
#define TIM_4_PWM_COMPARE_VALUE              (0lu)
#define TIM_4_PWM_COMPARE_BUF_VALUE          (65535lu)
#define TIM_4_PWM_COMPARE_SWAP               (0lu)


/***************************************
*    Enumerated Types and Parameters
***************************************/

#define TIM_4__LEFT 0
#define TIM_4__RIGHT 1
#define TIM_4__CENTER 2
#define TIM_4__ASYMMETRIC 3

#define TIM_4__X1 0
#define TIM_4__X2 1
#define TIM_4__X4 2

#define TIM_4__PWM 4
#define TIM_4__PWM_DT 5
#define TIM_4__PWM_PR 6

#define TIM_4__INVERSE 1
#define TIM_4__DIRECT 0

#define TIM_4__CAPTURE 2
#define TIM_4__COMPARE 0

#define TIM_4__TRIG_LEVEL 3
#define TIM_4__TRIG_RISING 0
#define TIM_4__TRIG_FALLING 1
#define TIM_4__TRIG_BOTH 2

#define TIM_4__INTR_MASK_TC 1
#define TIM_4__INTR_MASK_CC_MATCH 2
#define TIM_4__INTR_MASK_NONE 0
#define TIM_4__INTR_MASK_TC_CC 3

#define TIM_4__UNCONFIG 8
#define TIM_4__TIMER 1
#define TIM_4__QUAD 3
#define TIM_4__PWM_SEL 7

#define TIM_4__COUNT_UP 0
#define TIM_4__COUNT_DOWN 1
#define TIM_4__COUNT_UPDOWN0 2
#define TIM_4__COUNT_UPDOWN1 3


/* Prescaler */
#define TIM_4_PRESCALE_DIVBY1                ((uint32)(0u << TIM_4_PRESCALER_SHIFT))
#define TIM_4_PRESCALE_DIVBY2                ((uint32)(1u << TIM_4_PRESCALER_SHIFT))
#define TIM_4_PRESCALE_DIVBY4                ((uint32)(2u << TIM_4_PRESCALER_SHIFT))
#define TIM_4_PRESCALE_DIVBY8                ((uint32)(3u << TIM_4_PRESCALER_SHIFT))
#define TIM_4_PRESCALE_DIVBY16               ((uint32)(4u << TIM_4_PRESCALER_SHIFT))
#define TIM_4_PRESCALE_DIVBY32               ((uint32)(5u << TIM_4_PRESCALER_SHIFT))
#define TIM_4_PRESCALE_DIVBY64               ((uint32)(6u << TIM_4_PRESCALER_SHIFT))
#define TIM_4_PRESCALE_DIVBY128              ((uint32)(7u << TIM_4_PRESCALER_SHIFT))

/* TCPWM set modes */
#define TIM_4_MODE_TIMER_COMPARE             ((uint32)(TIM_4__COMPARE         <<  \
                                                                  TIM_4_MODE_SHIFT))
#define TIM_4_MODE_TIMER_CAPTURE             ((uint32)(TIM_4__CAPTURE         <<  \
                                                                  TIM_4_MODE_SHIFT))
#define TIM_4_MODE_QUAD                      ((uint32)(TIM_4__QUAD            <<  \
                                                                  TIM_4_MODE_SHIFT))
#define TIM_4_MODE_PWM                       ((uint32)(TIM_4__PWM             <<  \
                                                                  TIM_4_MODE_SHIFT))
#define TIM_4_MODE_PWM_DT                    ((uint32)(TIM_4__PWM_DT          <<  \
                                                                  TIM_4_MODE_SHIFT))
#define TIM_4_MODE_PWM_PR                    ((uint32)(TIM_4__PWM_PR          <<  \
                                                                  TIM_4_MODE_SHIFT))

/* Quad Modes */
#define TIM_4_MODE_X1                        ((uint32)(TIM_4__X1              <<  \
                                                                  TIM_4_QUAD_MODE_SHIFT))
#define TIM_4_MODE_X2                        ((uint32)(TIM_4__X2              <<  \
                                                                  TIM_4_QUAD_MODE_SHIFT))
#define TIM_4_MODE_X4                        ((uint32)(TIM_4__X4              <<  \
                                                                  TIM_4_QUAD_MODE_SHIFT))

/* Counter modes */
#define TIM_4_COUNT_UP                       ((uint32)(TIM_4__COUNT_UP        <<  \
                                                                  TIM_4_UPDOWN_SHIFT))
#define TIM_4_COUNT_DOWN                     ((uint32)(TIM_4__COUNT_DOWN      <<  \
                                                                  TIM_4_UPDOWN_SHIFT))
#define TIM_4_COUNT_UPDOWN0                  ((uint32)(TIM_4__COUNT_UPDOWN0   <<  \
                                                                  TIM_4_UPDOWN_SHIFT))
#define TIM_4_COUNT_UPDOWN1                  ((uint32)(TIM_4__COUNT_UPDOWN1   <<  \
                                                                  TIM_4_UPDOWN_SHIFT))

/* PWM output invert */
#define TIM_4_INVERT_LINE                    ((uint32)(TIM_4__INVERSE         <<  \
                                                                  TIM_4_INV_OUT_SHIFT))
#define TIM_4_INVERT_LINE_N                  ((uint32)(TIM_4__INVERSE         <<  \
                                                                  TIM_4_INV_COMPL_OUT_SHIFT))

/* Trigger modes */
#define TIM_4_TRIG_RISING                    ((uint32)TIM_4__TRIG_RISING)
#define TIM_4_TRIG_FALLING                   ((uint32)TIM_4__TRIG_FALLING)
#define TIM_4_TRIG_BOTH                      ((uint32)TIM_4__TRIG_BOTH)
#define TIM_4_TRIG_LEVEL                     ((uint32)TIM_4__TRIG_LEVEL)

/* Interrupt mask */
#define TIM_4_INTR_MASK_TC                   ((uint32)TIM_4__INTR_MASK_TC)
#define TIM_4_INTR_MASK_CC_MATCH             ((uint32)TIM_4__INTR_MASK_CC_MATCH)

/* PWM Output Controls */
#define TIM_4_CC_MATCH_SET                   (0x00u)
#define TIM_4_CC_MATCH_CLEAR                 (0x01u)
#define TIM_4_CC_MATCH_INVERT                (0x02u)
#define TIM_4_CC_MATCH_NO_CHANGE             (0x03u)
#define TIM_4_OVERLOW_SET                    (0x00u)
#define TIM_4_OVERLOW_CLEAR                  (0x04u)
#define TIM_4_OVERLOW_INVERT                 (0x08u)
#define TIM_4_OVERLOW_NO_CHANGE              (0x0Cu)
#define TIM_4_UNDERFLOW_SET                  (0x00u)
#define TIM_4_UNDERFLOW_CLEAR                (0x10u)
#define TIM_4_UNDERFLOW_INVERT               (0x20u)
#define TIM_4_UNDERFLOW_NO_CHANGE            (0x30u)

/* PWM Align */
#define TIM_4_PWM_MODE_LEFT                  (TIM_4_CC_MATCH_CLEAR        |   \
                                                         TIM_4_OVERLOW_SET           |   \
                                                         TIM_4_UNDERFLOW_NO_CHANGE)
#define TIM_4_PWM_MODE_RIGHT                 (TIM_4_CC_MATCH_SET          |   \
                                                         TIM_4_OVERLOW_NO_CHANGE     |   \
                                                         TIM_4_UNDERFLOW_CLEAR)
#define TIM_4_PWM_MODE_CENTER                (TIM_4_CC_MATCH_INVERT       |   \
                                                         TIM_4_OVERLOW_NO_CHANGE     |   \
                                                         TIM_4_UNDERFLOW_CLEAR)
#define TIM_4_PWM_MODE_ASYM                  (TIM_4_CC_MATCH_NO_CHANGE    |   \
                                                         TIM_4_OVERLOW_SET           |   \
                                                         TIM_4_UNDERFLOW_CLEAR )

/* Command operations without condition */
#define TIM_4_CMD_CAPTURE                    (0u)
#define TIM_4_CMD_RELOAD                     (8u)
#define TIM_4_CMD_STOP                       (16u)
#define TIM_4_CMD_START                      (24u)

/* Status */
#define TIM_4_STATUS_DOWN                    (1u)
#define TIM_4_STATUS_RUNNING                 (2u)


/***************************************
*        Function Prototypes
****************************************/

void   TIM_4_Init(void);
void   TIM_4_Enable(void);
void   TIM_4_Start(void);
void   TIM_4_Stop(void);

void   TIM_4_SetMode(uint32 mode);
void   TIM_4_SetCounterMode(uint32 counterMode);
void   TIM_4_SetPWMMode(uint32 modeMask);
void   TIM_4_SetQDMode(uint32 qdMode);

void   TIM_4_SetPrescaler(uint32 prescaler);
void   TIM_4_TriggerCommand(uint32 mask, uint32 command);
void   TIM_4_SetOneShot(uint32 oneShotEnable);
uint32 TIM_4_ReadStatus(void);

void   TIM_4_SetPWMSyncKill(uint32 syncKillEnable);
void   TIM_4_SetPWMStopOnKill(uint32 stopOnKillEnable);
void   TIM_4_SetPWMDeadTime(uint32 deadTime);
void   TIM_4_SetPWMInvert(uint32 mask);

void   TIM_4_SetInterruptMode(uint32 interruptMask);
uint32 TIM_4_GetInterruptSourceMasked(void);
uint32 TIM_4_GetInterruptSource(void);
void   TIM_4_ClearInterrupt(uint32 interruptMask);
void   TIM_4_SetInterrupt(uint32 interruptMask);

void   TIM_4_WriteCounter(uint32 count);
uint32 TIM_4_ReadCounter(void);

uint32 TIM_4_ReadCapture(void);
uint32 TIM_4_ReadCaptureBuf(void);

void   TIM_4_WritePeriod(uint32 period);
uint32 TIM_4_ReadPeriod(void);
void   TIM_4_WritePeriodBuf(uint32 periodBuf);
uint32 TIM_4_ReadPeriodBuf(void);

void   TIM_4_WriteCompare(uint32 compare);
uint32 TIM_4_ReadCompare(void);
void   TIM_4_WriteCompareBuf(uint32 compareBuf);
uint32 TIM_4_ReadCompareBuf(void);

void   TIM_4_SetPeriodSwap(uint32 swapEnable);
void   TIM_4_SetCompareSwap(uint32 swapEnable);

void   TIM_4_SetCaptureMode(uint32 triggerMode);
void   TIM_4_SetReloadMode(uint32 triggerMode);
void   TIM_4_SetStartMode(uint32 triggerMode);
void   TIM_4_SetStopMode(uint32 triggerMode);
void   TIM_4_SetCountMode(uint32 triggerMode);

void   TIM_4_SaveConfig(void);
void   TIM_4_RestoreConfig(void);
void   TIM_4_Sleep(void);
void   TIM_4_Wakeup(void);


/***************************************
*             Registers
***************************************/

#define TIM_4_BLOCK_CONTROL_REG              (*(reg32 *) TIM_4_cy_m0s8_tcpwm_1__TCPWM_CTRL )
#define TIM_4_BLOCK_CONTROL_PTR              ( (reg32 *) TIM_4_cy_m0s8_tcpwm_1__TCPWM_CTRL )
#define TIM_4_COMMAND_REG                    (*(reg32 *) TIM_4_cy_m0s8_tcpwm_1__TCPWM_CMD )
#define TIM_4_COMMAND_PTR                    ( (reg32 *) TIM_4_cy_m0s8_tcpwm_1__TCPWM_CMD )
#define TIM_4_INTRRUPT_CAUSE_REG             (*(reg32 *) TIM_4_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE )
#define TIM_4_INTRRUPT_CAUSE_PTR             ( (reg32 *) TIM_4_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE )
#define TIM_4_CONTROL_REG                    (*(reg32 *) TIM_4_cy_m0s8_tcpwm_1__CTRL )
#define TIM_4_CONTROL_PTR                    ( (reg32 *) TIM_4_cy_m0s8_tcpwm_1__CTRL )
#define TIM_4_STATUS_REG                     (*(reg32 *) TIM_4_cy_m0s8_tcpwm_1__STATUS )
#define TIM_4_STATUS_PTR                     ( (reg32 *) TIM_4_cy_m0s8_tcpwm_1__STATUS )
#define TIM_4_COUNTER_REG                    (*(reg32 *) TIM_4_cy_m0s8_tcpwm_1__COUNTER )
#define TIM_4_COUNTER_PTR                    ( (reg32 *) TIM_4_cy_m0s8_tcpwm_1__COUNTER )
#define TIM_4_COMP_CAP_REG                   (*(reg32 *) TIM_4_cy_m0s8_tcpwm_1__CC )
#define TIM_4_COMP_CAP_PTR                   ( (reg32 *) TIM_4_cy_m0s8_tcpwm_1__CC )
#define TIM_4_COMP_CAP_BUF_REG               (*(reg32 *) TIM_4_cy_m0s8_tcpwm_1__CC_BUFF )
#define TIM_4_COMP_CAP_BUF_PTR               ( (reg32 *) TIM_4_cy_m0s8_tcpwm_1__CC_BUFF )
#define TIM_4_PERIOD_REG                     (*(reg32 *) TIM_4_cy_m0s8_tcpwm_1__PERIOD )
#define TIM_4_PERIOD_PTR                     ( (reg32 *) TIM_4_cy_m0s8_tcpwm_1__PERIOD )
#define TIM_4_PERIOD_BUF_REG                 (*(reg32 *) TIM_4_cy_m0s8_tcpwm_1__PERIOD_BUFF )
#define TIM_4_PERIOD_BUF_PTR                 ( (reg32 *) TIM_4_cy_m0s8_tcpwm_1__PERIOD_BUFF )
#define TIM_4_TRIG_CONTROL0_REG              (*(reg32 *) TIM_4_cy_m0s8_tcpwm_1__TR_CTRL0 )
#define TIM_4_TRIG_CONTROL0_PTR              ( (reg32 *) TIM_4_cy_m0s8_tcpwm_1__TR_CTRL0 )
#define TIM_4_TRIG_CONTROL1_REG              (*(reg32 *) TIM_4_cy_m0s8_tcpwm_1__TR_CTRL1 )
#define TIM_4_TRIG_CONTROL1_PTR              ( (reg32 *) TIM_4_cy_m0s8_tcpwm_1__TR_CTRL1 )
#define TIM_4_TRIG_CONTROL2_REG              (*(reg32 *) TIM_4_cy_m0s8_tcpwm_1__TR_CTRL2 )
#define TIM_4_TRIG_CONTROL2_PTR              ( (reg32 *) TIM_4_cy_m0s8_tcpwm_1__TR_CTRL2 )
#define TIM_4_INTERRUPT_REQ_REG              (*(reg32 *) TIM_4_cy_m0s8_tcpwm_1__INTR )
#define TIM_4_INTERRUPT_REQ_PTR              ( (reg32 *) TIM_4_cy_m0s8_tcpwm_1__INTR )
#define TIM_4_INTERRUPT_SET_REG              (*(reg32 *) TIM_4_cy_m0s8_tcpwm_1__INTR_SET )
#define TIM_4_INTERRUPT_SET_PTR              ( (reg32 *) TIM_4_cy_m0s8_tcpwm_1__INTR_SET )
#define TIM_4_INTERRUPT_MASK_REG             (*(reg32 *) TIM_4_cy_m0s8_tcpwm_1__INTR_MASK )
#define TIM_4_INTERRUPT_MASK_PTR             ( (reg32 *) TIM_4_cy_m0s8_tcpwm_1__INTR_MASK )
#define TIM_4_INTERRUPT_MASKED_REG           (*(reg32 *) TIM_4_cy_m0s8_tcpwm_1__INTR_MASKED )
#define TIM_4_INTERRUPT_MASKED_PTR           ( (reg32 *) TIM_4_cy_m0s8_tcpwm_1__INTR_MASKED )


/***************************************
*       Registers Constants
***************************************/

/* Mask */
#define TIM_4_MASK                           ((uint32)TIM_4_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK)

/* Shift constants for control register */
#define TIM_4_RELOAD_CC_SHIFT                (0u)
#define TIM_4_RELOAD_PERIOD_SHIFT            (1u)
#define TIM_4_PWM_SYNC_KILL_SHIFT            (2u)
#define TIM_4_PWM_STOP_KILL_SHIFT            (3u)
#define TIM_4_PRESCALER_SHIFT                (8u)
#define TIM_4_UPDOWN_SHIFT                   (16u)
#define TIM_4_ONESHOT_SHIFT                  (18u)
#define TIM_4_QUAD_MODE_SHIFT                (20u)
#define TIM_4_INV_OUT_SHIFT                  (20u)
#define TIM_4_INV_COMPL_OUT_SHIFT            (21u)
#define TIM_4_MODE_SHIFT                     (24u)

/* Mask constants for control register */
#define TIM_4_RELOAD_CC_MASK                 ((uint32)(TIM_4_1BIT_MASK        <<  \
                                                                            TIM_4_RELOAD_CC_SHIFT))
#define TIM_4_RELOAD_PERIOD_MASK             ((uint32)(TIM_4_1BIT_MASK        <<  \
                                                                            TIM_4_RELOAD_PERIOD_SHIFT))
#define TIM_4_PWM_SYNC_KILL_MASK             ((uint32)(TIM_4_1BIT_MASK        <<  \
                                                                            TIM_4_PWM_SYNC_KILL_SHIFT))
#define TIM_4_PWM_STOP_KILL_MASK             ((uint32)(TIM_4_1BIT_MASK        <<  \
                                                                            TIM_4_PWM_STOP_KILL_SHIFT))
#define TIM_4_PRESCALER_MASK                 ((uint32)(TIM_4_8BIT_MASK        <<  \
                                                                            TIM_4_PRESCALER_SHIFT))
#define TIM_4_UPDOWN_MASK                    ((uint32)(TIM_4_2BIT_MASK        <<  \
                                                                            TIM_4_UPDOWN_SHIFT))
#define TIM_4_ONESHOT_MASK                   ((uint32)(TIM_4_1BIT_MASK        <<  \
                                                                            TIM_4_ONESHOT_SHIFT))
#define TIM_4_QUAD_MODE_MASK                 ((uint32)(TIM_4_3BIT_MASK        <<  \
                                                                            TIM_4_QUAD_MODE_SHIFT))
#define TIM_4_INV_OUT_MASK                   ((uint32)(TIM_4_2BIT_MASK        <<  \
                                                                            TIM_4_INV_OUT_SHIFT))
#define TIM_4_MODE_MASK                      ((uint32)(TIM_4_3BIT_MASK        <<  \
                                                                            TIM_4_MODE_SHIFT))

/* Shift constants for trigger control register 1 */
#define TIM_4_CAPTURE_SHIFT                  (0u)
#define TIM_4_COUNT_SHIFT                    (2u)
#define TIM_4_RELOAD_SHIFT                   (4u)
#define TIM_4_STOP_SHIFT                     (6u)
#define TIM_4_START_SHIFT                    (8u)

/* Mask constants for trigger control register 1 */
#define TIM_4_CAPTURE_MASK                   ((uint32)(TIM_4_2BIT_MASK        <<  \
                                                                  TIM_4_CAPTURE_SHIFT))
#define TIM_4_COUNT_MASK                     ((uint32)(TIM_4_2BIT_MASK        <<  \
                                                                  TIM_4_COUNT_SHIFT))
#define TIM_4_RELOAD_MASK                    ((uint32)(TIM_4_2BIT_MASK        <<  \
                                                                  TIM_4_RELOAD_SHIFT))
#define TIM_4_STOP_MASK                      ((uint32)(TIM_4_2BIT_MASK        <<  \
                                                                  TIM_4_STOP_SHIFT))
#define TIM_4_START_MASK                     ((uint32)(TIM_4_2BIT_MASK        <<  \
                                                                  TIM_4_START_SHIFT))

/* MASK */
#define TIM_4_1BIT_MASK                      ((uint32)0x01u)
#define TIM_4_2BIT_MASK                      ((uint32)0x03u)
#define TIM_4_3BIT_MASK                      ((uint32)0x07u)
#define TIM_4_6BIT_MASK                      ((uint32)0x3Fu)
#define TIM_4_8BIT_MASK                      ((uint32)0xFFu)
#define TIM_4_16BIT_MASK                     ((uint32)0xFFFFu)

/* Shift constant for status register */
#define TIM_4_RUNNING_STATUS_SHIFT           (30u)


/***************************************
*    Initial Constants
***************************************/

#define TIM_4_PWM_PR_INIT_VALUE              (1u)

#endif /* End CY_TCPWM_TIM_4_H */

/* [] END OF FILE */
