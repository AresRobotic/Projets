/*******************************************************************************
* File Name: TIM1.h
* Version 1.10
*
* Description:
*  This file provides constants and parameter values for the TIM1
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

#if !defined(CY_TCPWM_TIM1_H)
#define CY_TCPWM_TIM1_H

#include "cytypes.h"
#include "cyfitter.h"


/*******************************************************************************
* Internal Type defines
*******************************************************************************/

/* Structure to save state before go to sleep */
typedef struct
{
    uint8  enableState;
} TIM1_BACKUP_STRUCT;


/*******************************************************************************
* Variables
*******************************************************************************/
extern uint8  TIM1_initVar;


/***************************************
*   Conditional Compilation Parameters
****************************************/

#define TIM1_CY_TCPWM_V2                    (CYIPBLOCK_m0s8tcpwm_VERSION == 2u)

/* TCPWM Configuration */
#define TIM1_CONFIG                         (1lu)

/* Quad Mode */
/* Parameters */
#define TIM1_QUAD_ENCODING_MODES            (0lu)

/* Signal modes */
#define TIM1_QUAD_INDEX_SIGNAL_MODE         (0lu)
#define TIM1_QUAD_PHIA_SIGNAL_MODE          (3lu)
#define TIM1_QUAD_PHIB_SIGNAL_MODE          (3lu)
#define TIM1_QUAD_STOP_SIGNAL_MODE          (0lu)

/* Signal present */
#define TIM1_QUAD_INDEX_SIGNAL_PRESENT      (0lu)
#define TIM1_QUAD_STOP_SIGNAL_PRESENT       (0lu)

/* Interrupt Mask */
#define TIM1_QUAD_INTERRUPT_MASK            (1lu)

/* Timer/Counter Mode */
/* Parameters */
#define TIM1_TC_RUN_MODE                    (0lu)
#define TIM1_TC_COUNTER_MODE                (0lu)
#define TIM1_TC_COMP_CAP_MODE               (2lu)
#define TIM1_TC_PRESCALER                   (0lu)

/* Signal modes */
#define TIM1_TC_RELOAD_SIGNAL_MODE          (0lu)
#define TIM1_TC_COUNT_SIGNAL_MODE           (3lu)
#define TIM1_TC_START_SIGNAL_MODE           (0lu)
#define TIM1_TC_STOP_SIGNAL_MODE            (0lu)
#define TIM1_TC_CAPTURE_SIGNAL_MODE         (0lu)

/* Signal present */
#define TIM1_TC_RELOAD_SIGNAL_PRESENT       (0lu)
#define TIM1_TC_COUNT_SIGNAL_PRESENT        (0lu)
#define TIM1_TC_START_SIGNAL_PRESENT        (0lu)
#define TIM1_TC_STOP_SIGNAL_PRESENT         (0lu)
#define TIM1_TC_CAPTURE_SIGNAL_PRESENT      (0lu)

/* Interrupt Mask */
#define TIM1_TC_INTERRUPT_MASK              (1lu)

/* PWM Mode */
/* Parameters */
#define TIM1_PWM_KILL_EVENT                 (0lu)
#define TIM1_PWM_STOP_EVENT                 (0lu)
#define TIM1_PWM_MODE                       (4lu)
#define TIM1_PWM_OUT_N_INVERT               (0lu)
#define TIM1_PWM_OUT_INVERT                 (0lu)
#define TIM1_PWM_ALIGN                      (0lu)
#define TIM1_PWM_RUN_MODE                   (0lu)
#define TIM1_PWM_DEAD_TIME_CYCLE            (0lu)
#define TIM1_PWM_PRESCALER                  (0lu)

/* Signal modes */
#define TIM1_PWM_RELOAD_SIGNAL_MODE         (0lu)
#define TIM1_PWM_COUNT_SIGNAL_MODE          (3lu)
#define TIM1_PWM_START_SIGNAL_MODE          (0lu)
#define TIM1_PWM_STOP_SIGNAL_MODE           (0lu)
#define TIM1_PWM_SWITCH_SIGNAL_MODE         (0lu)

/* Signal present */
#define TIM1_PWM_RELOAD_SIGNAL_PRESENT      (0lu)
#define TIM1_PWM_COUNT_SIGNAL_PRESENT       (0lu)
#define TIM1_PWM_START_SIGNAL_PRESENT       (0lu)
#define TIM1_PWM_STOP_SIGNAL_PRESENT        (0lu)
#define TIM1_PWM_SWITCH_SIGNAL_PRESENT      (0lu)

/* Interrupt Mask */
#define TIM1_PWM_INTERRUPT_MASK             (1lu)


/***************************************
*    Initial Parameter Constants
***************************************/

/* Timer/Counter Mode */
#define TIM1_TC_PERIOD_VALUE                (65535lu)
#define TIM1_TC_COMPARE_VALUE               (65535lu)
#define TIM1_TC_COMPARE_BUF_VALUE           (65535lu)
#define TIM1_TC_COMPARE_SWAP                (0lu)

/* PWM Mode */
#define TIM1_PWM_PERIOD_VALUE               (65535lu)
#define TIM1_PWM_PERIOD_BUF_VALUE           (65535lu)
#define TIM1_PWM_PERIOD_SWAP                (0lu)
#define TIM1_PWM_COMPARE_VALUE              (32000lu)
#define TIM1_PWM_COMPARE_BUF_VALUE          (65535lu)
#define TIM1_PWM_COMPARE_SWAP               (0lu)


/***************************************
*    Enumerated Types and Parameters
***************************************/

#define TIM1__LEFT 0
#define TIM1__RIGHT 1
#define TIM1__CENTER 2
#define TIM1__ASYMMETRIC 3

#define TIM1__X1 0
#define TIM1__X2 1
#define TIM1__X4 2

#define TIM1__PWM 4
#define TIM1__PWM_DT 5
#define TIM1__PWM_PR 6

#define TIM1__INVERSE 1
#define TIM1__DIRECT 0

#define TIM1__CAPTURE 2
#define TIM1__COMPARE 0

#define TIM1__TRIG_LEVEL 3
#define TIM1__TRIG_RISING 0
#define TIM1__TRIG_FALLING 1
#define TIM1__TRIG_BOTH 2

#define TIM1__INTR_MASK_TC 1
#define TIM1__INTR_MASK_CC_MATCH 2
#define TIM1__INTR_MASK_NONE 0
#define TIM1__INTR_MASK_TC_CC 3

#define TIM1__UNCONFIG 8
#define TIM1__TIMER 1
#define TIM1__QUAD 3
#define TIM1__PWM_SEL 7

#define TIM1__COUNT_UP 0
#define TIM1__COUNT_DOWN 1
#define TIM1__COUNT_UPDOWN0 2
#define TIM1__COUNT_UPDOWN1 3


/* Prescaler */
#define TIM1_PRESCALE_DIVBY1                ((uint32)(0u << TIM1_PRESCALER_SHIFT))
#define TIM1_PRESCALE_DIVBY2                ((uint32)(1u << TIM1_PRESCALER_SHIFT))
#define TIM1_PRESCALE_DIVBY4                ((uint32)(2u << TIM1_PRESCALER_SHIFT))
#define TIM1_PRESCALE_DIVBY8                ((uint32)(3u << TIM1_PRESCALER_SHIFT))
#define TIM1_PRESCALE_DIVBY16               ((uint32)(4u << TIM1_PRESCALER_SHIFT))
#define TIM1_PRESCALE_DIVBY32               ((uint32)(5u << TIM1_PRESCALER_SHIFT))
#define TIM1_PRESCALE_DIVBY64               ((uint32)(6u << TIM1_PRESCALER_SHIFT))
#define TIM1_PRESCALE_DIVBY128              ((uint32)(7u << TIM1_PRESCALER_SHIFT))

/* TCPWM set modes */
#define TIM1_MODE_TIMER_COMPARE             ((uint32)(TIM1__COMPARE         <<  \
                                                                  TIM1_MODE_SHIFT))
#define TIM1_MODE_TIMER_CAPTURE             ((uint32)(TIM1__CAPTURE         <<  \
                                                                  TIM1_MODE_SHIFT))
#define TIM1_MODE_QUAD                      ((uint32)(TIM1__QUAD            <<  \
                                                                  TIM1_MODE_SHIFT))
#define TIM1_MODE_PWM                       ((uint32)(TIM1__PWM             <<  \
                                                                  TIM1_MODE_SHIFT))
#define TIM1_MODE_PWM_DT                    ((uint32)(TIM1__PWM_DT          <<  \
                                                                  TIM1_MODE_SHIFT))
#define TIM1_MODE_PWM_PR                    ((uint32)(TIM1__PWM_PR          <<  \
                                                                  TIM1_MODE_SHIFT))

/* Quad Modes */
#define TIM1_MODE_X1                        ((uint32)(TIM1__X1              <<  \
                                                                  TIM1_QUAD_MODE_SHIFT))
#define TIM1_MODE_X2                        ((uint32)(TIM1__X2              <<  \
                                                                  TIM1_QUAD_MODE_SHIFT))
#define TIM1_MODE_X4                        ((uint32)(TIM1__X4              <<  \
                                                                  TIM1_QUAD_MODE_SHIFT))

/* Counter modes */
#define TIM1_COUNT_UP                       ((uint32)(TIM1__COUNT_UP        <<  \
                                                                  TIM1_UPDOWN_SHIFT))
#define TIM1_COUNT_DOWN                     ((uint32)(TIM1__COUNT_DOWN      <<  \
                                                                  TIM1_UPDOWN_SHIFT))
#define TIM1_COUNT_UPDOWN0                  ((uint32)(TIM1__COUNT_UPDOWN0   <<  \
                                                                  TIM1_UPDOWN_SHIFT))
#define TIM1_COUNT_UPDOWN1                  ((uint32)(TIM1__COUNT_UPDOWN1   <<  \
                                                                  TIM1_UPDOWN_SHIFT))

/* PWM output invert */
#define TIM1_INVERT_LINE                    ((uint32)(TIM1__INVERSE         <<  \
                                                                  TIM1_INV_OUT_SHIFT))
#define TIM1_INVERT_LINE_N                  ((uint32)(TIM1__INVERSE         <<  \
                                                                  TIM1_INV_COMPL_OUT_SHIFT))

/* Trigger modes */
#define TIM1_TRIG_RISING                    ((uint32)TIM1__TRIG_RISING)
#define TIM1_TRIG_FALLING                   ((uint32)TIM1__TRIG_FALLING)
#define TIM1_TRIG_BOTH                      ((uint32)TIM1__TRIG_BOTH)
#define TIM1_TRIG_LEVEL                     ((uint32)TIM1__TRIG_LEVEL)

/* Interrupt mask */
#define TIM1_INTR_MASK_TC                   ((uint32)TIM1__INTR_MASK_TC)
#define TIM1_INTR_MASK_CC_MATCH             ((uint32)TIM1__INTR_MASK_CC_MATCH)

/* PWM Output Controls */
#define TIM1_CC_MATCH_SET                   (0x00u)
#define TIM1_CC_MATCH_CLEAR                 (0x01u)
#define TIM1_CC_MATCH_INVERT                (0x02u)
#define TIM1_CC_MATCH_NO_CHANGE             (0x03u)
#define TIM1_OVERLOW_SET                    (0x00u)
#define TIM1_OVERLOW_CLEAR                  (0x04u)
#define TIM1_OVERLOW_INVERT                 (0x08u)
#define TIM1_OVERLOW_NO_CHANGE              (0x0Cu)
#define TIM1_UNDERFLOW_SET                  (0x00u)
#define TIM1_UNDERFLOW_CLEAR                (0x10u)
#define TIM1_UNDERFLOW_INVERT               (0x20u)
#define TIM1_UNDERFLOW_NO_CHANGE            (0x30u)

/* PWM Align */
#define TIM1_PWM_MODE_LEFT                  (TIM1_CC_MATCH_CLEAR        |   \
                                                         TIM1_OVERLOW_SET           |   \
                                                         TIM1_UNDERFLOW_NO_CHANGE)
#define TIM1_PWM_MODE_RIGHT                 (TIM1_CC_MATCH_SET          |   \
                                                         TIM1_OVERLOW_NO_CHANGE     |   \
                                                         TIM1_UNDERFLOW_CLEAR)
#define TIM1_PWM_MODE_CENTER                (TIM1_CC_MATCH_INVERT       |   \
                                                         TIM1_OVERLOW_NO_CHANGE     |   \
                                                         TIM1_UNDERFLOW_CLEAR)
#define TIM1_PWM_MODE_ASYM                  (TIM1_CC_MATCH_NO_CHANGE    |   \
                                                         TIM1_OVERLOW_SET           |   \
                                                         TIM1_UNDERFLOW_CLEAR )

/* Command operations without condition */
#define TIM1_CMD_CAPTURE                    (0u)
#define TIM1_CMD_RELOAD                     (8u)
#define TIM1_CMD_STOP                       (16u)
#define TIM1_CMD_START                      (24u)

/* Status */
#define TIM1_STATUS_DOWN                    (1u)
#define TIM1_STATUS_RUNNING                 (2u)


/***************************************
*        Function Prototypes
****************************************/

void   TIM1_Init(void);
void   TIM1_Enable(void);
void   TIM1_Start(void);
void   TIM1_Stop(void);

void   TIM1_SetMode(uint32 mode);
void   TIM1_SetCounterMode(uint32 counterMode);
void   TIM1_SetPWMMode(uint32 modeMask);
void   TIM1_SetQDMode(uint32 qdMode);

void   TIM1_SetPrescaler(uint32 prescaler);
void   TIM1_TriggerCommand(uint32 mask, uint32 command);
void   TIM1_SetOneShot(uint32 oneShotEnable);
uint32 TIM1_ReadStatus(void);

void   TIM1_SetPWMSyncKill(uint32 syncKillEnable);
void   TIM1_SetPWMStopOnKill(uint32 stopOnKillEnable);
void   TIM1_SetPWMDeadTime(uint32 deadTime);
void   TIM1_SetPWMInvert(uint32 mask);

void   TIM1_SetInterruptMode(uint32 interruptMask);
uint32 TIM1_GetInterruptSourceMasked(void);
uint32 TIM1_GetInterruptSource(void);
void   TIM1_ClearInterrupt(uint32 interruptMask);
void   TIM1_SetInterrupt(uint32 interruptMask);

void   TIM1_WriteCounter(uint32 count);
uint32 TIM1_ReadCounter(void);

uint32 TIM1_ReadCapture(void);
uint32 TIM1_ReadCaptureBuf(void);

void   TIM1_WritePeriod(uint32 period);
uint32 TIM1_ReadPeriod(void);
void   TIM1_WritePeriodBuf(uint32 periodBuf);
uint32 TIM1_ReadPeriodBuf(void);

void   TIM1_WriteCompare(uint32 compare);
uint32 TIM1_ReadCompare(void);
void   TIM1_WriteCompareBuf(uint32 compareBuf);
uint32 TIM1_ReadCompareBuf(void);

void   TIM1_SetPeriodSwap(uint32 swapEnable);
void   TIM1_SetCompareSwap(uint32 swapEnable);

void   TIM1_SetCaptureMode(uint32 triggerMode);
void   TIM1_SetReloadMode(uint32 triggerMode);
void   TIM1_SetStartMode(uint32 triggerMode);
void   TIM1_SetStopMode(uint32 triggerMode);
void   TIM1_SetCountMode(uint32 triggerMode);

void   TIM1_SaveConfig(void);
void   TIM1_RestoreConfig(void);
void   TIM1_Sleep(void);
void   TIM1_Wakeup(void);


/***************************************
*             Registers
***************************************/

#define TIM1_BLOCK_CONTROL_REG              (*(reg32 *) TIM1_cy_m0s8_tcpwm_1__TCPWM_CTRL )
#define TIM1_BLOCK_CONTROL_PTR              ( (reg32 *) TIM1_cy_m0s8_tcpwm_1__TCPWM_CTRL )
#define TIM1_COMMAND_REG                    (*(reg32 *) TIM1_cy_m0s8_tcpwm_1__TCPWM_CMD )
#define TIM1_COMMAND_PTR                    ( (reg32 *) TIM1_cy_m0s8_tcpwm_1__TCPWM_CMD )
#define TIM1_INTRRUPT_CAUSE_REG             (*(reg32 *) TIM1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE )
#define TIM1_INTRRUPT_CAUSE_PTR             ( (reg32 *) TIM1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE )
#define TIM1_CONTROL_REG                    (*(reg32 *) TIM1_cy_m0s8_tcpwm_1__CTRL )
#define TIM1_CONTROL_PTR                    ( (reg32 *) TIM1_cy_m0s8_tcpwm_1__CTRL )
#define TIM1_STATUS_REG                     (*(reg32 *) TIM1_cy_m0s8_tcpwm_1__STATUS )
#define TIM1_STATUS_PTR                     ( (reg32 *) TIM1_cy_m0s8_tcpwm_1__STATUS )
#define TIM1_COUNTER_REG                    (*(reg32 *) TIM1_cy_m0s8_tcpwm_1__COUNTER )
#define TIM1_COUNTER_PTR                    ( (reg32 *) TIM1_cy_m0s8_tcpwm_1__COUNTER )
#define TIM1_COMP_CAP_REG                   (*(reg32 *) TIM1_cy_m0s8_tcpwm_1__CC )
#define TIM1_COMP_CAP_PTR                   ( (reg32 *) TIM1_cy_m0s8_tcpwm_1__CC )
#define TIM1_COMP_CAP_BUF_REG               (*(reg32 *) TIM1_cy_m0s8_tcpwm_1__CC_BUFF )
#define TIM1_COMP_CAP_BUF_PTR               ( (reg32 *) TIM1_cy_m0s8_tcpwm_1__CC_BUFF )
#define TIM1_PERIOD_REG                     (*(reg32 *) TIM1_cy_m0s8_tcpwm_1__PERIOD )
#define TIM1_PERIOD_PTR                     ( (reg32 *) TIM1_cy_m0s8_tcpwm_1__PERIOD )
#define TIM1_PERIOD_BUF_REG                 (*(reg32 *) TIM1_cy_m0s8_tcpwm_1__PERIOD_BUFF )
#define TIM1_PERIOD_BUF_PTR                 ( (reg32 *) TIM1_cy_m0s8_tcpwm_1__PERIOD_BUFF )
#define TIM1_TRIG_CONTROL0_REG              (*(reg32 *) TIM1_cy_m0s8_tcpwm_1__TR_CTRL0 )
#define TIM1_TRIG_CONTROL0_PTR              ( (reg32 *) TIM1_cy_m0s8_tcpwm_1__TR_CTRL0 )
#define TIM1_TRIG_CONTROL1_REG              (*(reg32 *) TIM1_cy_m0s8_tcpwm_1__TR_CTRL1 )
#define TIM1_TRIG_CONTROL1_PTR              ( (reg32 *) TIM1_cy_m0s8_tcpwm_1__TR_CTRL1 )
#define TIM1_TRIG_CONTROL2_REG              (*(reg32 *) TIM1_cy_m0s8_tcpwm_1__TR_CTRL2 )
#define TIM1_TRIG_CONTROL2_PTR              ( (reg32 *) TIM1_cy_m0s8_tcpwm_1__TR_CTRL2 )
#define TIM1_INTERRUPT_REQ_REG              (*(reg32 *) TIM1_cy_m0s8_tcpwm_1__INTR )
#define TIM1_INTERRUPT_REQ_PTR              ( (reg32 *) TIM1_cy_m0s8_tcpwm_1__INTR )
#define TIM1_INTERRUPT_SET_REG              (*(reg32 *) TIM1_cy_m0s8_tcpwm_1__INTR_SET )
#define TIM1_INTERRUPT_SET_PTR              ( (reg32 *) TIM1_cy_m0s8_tcpwm_1__INTR_SET )
#define TIM1_INTERRUPT_MASK_REG             (*(reg32 *) TIM1_cy_m0s8_tcpwm_1__INTR_MASK )
#define TIM1_INTERRUPT_MASK_PTR             ( (reg32 *) TIM1_cy_m0s8_tcpwm_1__INTR_MASK )
#define TIM1_INTERRUPT_MASKED_REG           (*(reg32 *) TIM1_cy_m0s8_tcpwm_1__INTR_MASKED )
#define TIM1_INTERRUPT_MASKED_PTR           ( (reg32 *) TIM1_cy_m0s8_tcpwm_1__INTR_MASKED )


/***************************************
*       Registers Constants
***************************************/

/* Mask */
#define TIM1_MASK                           ((uint32)TIM1_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK)

/* Shift constants for control register */
#define TIM1_RELOAD_CC_SHIFT                (0u)
#define TIM1_RELOAD_PERIOD_SHIFT            (1u)
#define TIM1_PWM_SYNC_KILL_SHIFT            (2u)
#define TIM1_PWM_STOP_KILL_SHIFT            (3u)
#define TIM1_PRESCALER_SHIFT                (8u)
#define TIM1_UPDOWN_SHIFT                   (16u)
#define TIM1_ONESHOT_SHIFT                  (18u)
#define TIM1_QUAD_MODE_SHIFT                (20u)
#define TIM1_INV_OUT_SHIFT                  (20u)
#define TIM1_INV_COMPL_OUT_SHIFT            (21u)
#define TIM1_MODE_SHIFT                     (24u)

/* Mask constants for control register */
#define TIM1_RELOAD_CC_MASK                 ((uint32)(TIM1_1BIT_MASK        <<  \
                                                                            TIM1_RELOAD_CC_SHIFT))
#define TIM1_RELOAD_PERIOD_MASK             ((uint32)(TIM1_1BIT_MASK        <<  \
                                                                            TIM1_RELOAD_PERIOD_SHIFT))
#define TIM1_PWM_SYNC_KILL_MASK             ((uint32)(TIM1_1BIT_MASK        <<  \
                                                                            TIM1_PWM_SYNC_KILL_SHIFT))
#define TIM1_PWM_STOP_KILL_MASK             ((uint32)(TIM1_1BIT_MASK        <<  \
                                                                            TIM1_PWM_STOP_KILL_SHIFT))
#define TIM1_PRESCALER_MASK                 ((uint32)(TIM1_8BIT_MASK        <<  \
                                                                            TIM1_PRESCALER_SHIFT))
#define TIM1_UPDOWN_MASK                    ((uint32)(TIM1_2BIT_MASK        <<  \
                                                                            TIM1_UPDOWN_SHIFT))
#define TIM1_ONESHOT_MASK                   ((uint32)(TIM1_1BIT_MASK        <<  \
                                                                            TIM1_ONESHOT_SHIFT))
#define TIM1_QUAD_MODE_MASK                 ((uint32)(TIM1_3BIT_MASK        <<  \
                                                                            TIM1_QUAD_MODE_SHIFT))
#define TIM1_INV_OUT_MASK                   ((uint32)(TIM1_2BIT_MASK        <<  \
                                                                            TIM1_INV_OUT_SHIFT))
#define TIM1_MODE_MASK                      ((uint32)(TIM1_3BIT_MASK        <<  \
                                                                            TIM1_MODE_SHIFT))

/* Shift constants for trigger control register 1 */
#define TIM1_CAPTURE_SHIFT                  (0u)
#define TIM1_COUNT_SHIFT                    (2u)
#define TIM1_RELOAD_SHIFT                   (4u)
#define TIM1_STOP_SHIFT                     (6u)
#define TIM1_START_SHIFT                    (8u)

/* Mask constants for trigger control register 1 */
#define TIM1_CAPTURE_MASK                   ((uint32)(TIM1_2BIT_MASK        <<  \
                                                                  TIM1_CAPTURE_SHIFT))
#define TIM1_COUNT_MASK                     ((uint32)(TIM1_2BIT_MASK        <<  \
                                                                  TIM1_COUNT_SHIFT))
#define TIM1_RELOAD_MASK                    ((uint32)(TIM1_2BIT_MASK        <<  \
                                                                  TIM1_RELOAD_SHIFT))
#define TIM1_STOP_MASK                      ((uint32)(TIM1_2BIT_MASK        <<  \
                                                                  TIM1_STOP_SHIFT))
#define TIM1_START_MASK                     ((uint32)(TIM1_2BIT_MASK        <<  \
                                                                  TIM1_START_SHIFT))

/* MASK */
#define TIM1_1BIT_MASK                      ((uint32)0x01u)
#define TIM1_2BIT_MASK                      ((uint32)0x03u)
#define TIM1_3BIT_MASK                      ((uint32)0x07u)
#define TIM1_6BIT_MASK                      ((uint32)0x3Fu)
#define TIM1_8BIT_MASK                      ((uint32)0xFFu)
#define TIM1_16BIT_MASK                     ((uint32)0xFFFFu)

/* Shift constant for status register */
#define TIM1_RUNNING_STATUS_SHIFT           (30u)


/***************************************
*    Initial Constants
***************************************/

#define TIM1_PWM_PR_INIT_VALUE              (1u)

#endif /* End CY_TCPWM_TIM1_H */

/* [] END OF FILE */
