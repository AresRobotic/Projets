/*******************************************************************************
* File Name: TIM1.c
* Version 1.10
*
* Description:
*  This file provides the source code to the API for the TIM1
*  component
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

#include "TIM1.h"
#include "CyLib.h"

uint8 TIM1_initVar = 0u;


/*******************************************************************************
* Function Name: TIM1_Init
********************************************************************************
*
* Summary:
*  Initialize/Restore default TIM1 configuration.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_Init(void)
{

    /* Set values from customizer to CTRL */
    #if (TIM1__QUAD == TIM1_CONFIG)
        TIM1_CONTROL_REG =
        (((uint32)(TIM1_QUAD_ENCODING_MODES     << TIM1_QUAD_MODE_SHIFT))       |
         ((uint32)(TIM1_CONFIG                  << TIM1_MODE_SHIFT)));
    #endif  /* (TIM1__QUAD == TIM1_CONFIG) */

    #if (TIM1__PWM_SEL == TIM1_CONFIG)
        TIM1_CONTROL_REG =
        (((uint32)(TIM1_PWM_STOP_EVENT          << TIM1_PWM_STOP_KILL_SHIFT))    |
         ((uint32)(TIM1_PWM_OUT_INVERT          << TIM1_INV_OUT_SHIFT))         |
         ((uint32)(TIM1_PWM_OUT_N_INVERT        << TIM1_INV_COMPL_OUT_SHIFT))     |
         ((uint32)(TIM1_PWM_MODE                << TIM1_MODE_SHIFT)));

        #if (TIM1__PWM_PR == TIM1_PWM_MODE)
            TIM1_CONTROL_REG |=
            ((uint32)(TIM1_PWM_RUN_MODE         << TIM1_ONESHOT_SHIFT));

            TIM1_WriteCounter(TIM1_PWM_PR_INIT_VALUE);
        #else
            TIM1_CONTROL_REG |=
            (((uint32)(TIM1_PWM_ALIGN           << TIM1_UPDOWN_SHIFT))          |
             ((uint32)(TIM1_PWM_KILL_EVENT      << TIM1_PWM_SYNC_KILL_SHIFT)));
        #endif  /* (TIM1__PWM_PR == TIM1_PWM_MODE) */

        #if (TIM1__PWM_DT == TIM1_PWM_MODE)
            TIM1_CONTROL_REG |=
            ((uint32)(TIM1_PWM_DEAD_TIME_CYCLE  << TIM1_PRESCALER_SHIFT));
        #endif  /* (TIM1__PWM_DT == TIM1_PWM_MODE) */

        #if (TIM1__PWM == TIM1_PWM_MODE)
            TIM1_CONTROL_REG |=
            ((uint32)TIM1_PWM_PRESCALER         << TIM1_PRESCALER_SHIFT);
        #endif  /* (TIM1__PWM == TIM1_PWM_MODE) */
    #endif  /* (TIM1__PWM_SEL == TIM1_CONFIG) */

    #if (TIM1__TIMER == TIM1_CONFIG)
        TIM1_CONTROL_REG =
        (((uint32)(TIM1_TC_PRESCALER            << TIM1_PRESCALER_SHIFT))   |
         ((uint32)(TIM1_TC_COUNTER_MODE         << TIM1_UPDOWN_SHIFT))      |
         ((uint32)(TIM1_TC_RUN_MODE             << TIM1_ONESHOT_SHIFT))     |
         ((uint32)(TIM1_TC_COMP_CAP_MODE        << TIM1_MODE_SHIFT)));
    #endif  /* (TIM1__TIMER == TIM1_CONFIG) */

    /* Set values from customizer to CTRL1 */
    #if (TIM1__QUAD == TIM1_CONFIG)
        TIM1_TRIG_CONTROL1_REG  =
        (((uint32)(TIM1_QUAD_PHIA_SIGNAL_MODE   << TIM1_COUNT_SHIFT))       |
         ((uint32)(TIM1_QUAD_INDEX_SIGNAL_MODE  << TIM1_RELOAD_SHIFT))      |
         ((uint32)(TIM1_QUAD_STOP_SIGNAL_MODE   << TIM1_STOP_SHIFT))        |
         ((uint32)(TIM1_QUAD_PHIB_SIGNAL_MODE   << TIM1_START_SHIFT)));
    #endif  /* (TIM1__QUAD == TIM1_CONFIG) */

    #if (TIM1__PWM_SEL == TIM1_CONFIG)
        TIM1_TRIG_CONTROL1_REG  =
        (((uint32)(TIM1_PWM_SWITCH_SIGNAL_MODE  << TIM1_CAPTURE_SHIFT))     |
         ((uint32)(TIM1_PWM_COUNT_SIGNAL_MODE   << TIM1_COUNT_SHIFT))       |
         ((uint32)(TIM1_PWM_RELOAD_SIGNAL_MODE  << TIM1_RELOAD_SHIFT))      |
         ((uint32)(TIM1_PWM_STOP_SIGNAL_MODE    << TIM1_STOP_SHIFT))        |
         ((uint32)(TIM1_PWM_START_SIGNAL_MODE   << TIM1_START_SHIFT)));
    #endif  /* (TIM1__PWM_SEL == TIM1_CONFIG) */

    #if (TIM1__TIMER == TIM1_CONFIG)
        TIM1_TRIG_CONTROL1_REG  =
        (((uint32)(TIM1_TC_CAPTURE_SIGNAL_MODE  << TIM1_CAPTURE_SHIFT))     |
         ((uint32)(TIM1_TC_COUNT_SIGNAL_MODE    << TIM1_COUNT_SHIFT))       |
         ((uint32)(TIM1_TC_RELOAD_SIGNAL_MODE   << TIM1_RELOAD_SHIFT))      |
         ((uint32)(TIM1_TC_STOP_SIGNAL_MODE     << TIM1_STOP_SHIFT))        |
         ((uint32)(TIM1_TC_START_SIGNAL_MODE    << TIM1_START_SHIFT)));
    #endif  /* (TIM1__TIMER == TIM1_CONFIG) */

    /* Set values from customizer to INTR */
    #if (TIM1__QUAD == TIM1_CONFIG)
        TIM1_SetInterruptMode(TIM1_QUAD_INTERRUPT_MASK);
    #endif  /* (TIM1__QUAD == TIM1_CONFIG) */

    #if (TIM1__PWM_SEL == TIM1_CONFIG)
        TIM1_SetInterruptMode(TIM1_PWM_INTERRUPT_MASK);
    #endif  /* (TIM1__PWM_SEL == TIM1_CONFIG) */

    #if (TIM1__TIMER == TIM1_CONFIG)
        TIM1_SetInterruptMode(TIM1_TC_INTERRUPT_MASK);
    #endif  /* (TIM1__TIMER == TIM1_CONFIG) */

    /* Set other values from customizer */
    #if (TIM1__TIMER == TIM1_CONFIG)
        TIM1_WritePeriod(TIM1_TC_PERIOD_VALUE );

        #if (TIM1__COUNT_DOWN == TIM1_TC_COUNTER_MODE)
            TIM1_WriteCounter(TIM1_TC_PERIOD_VALUE );
        #endif  /* (TIM1__COUNT_DOWN == TIM1_TC_COUNTER_MODE) */

        #if (TIM1__COMPARE == TIM1_TC_COMP_CAP_MODE)
            TIM1_WriteCompare(TIM1_TC_COMPARE_VALUE);

            #if (1u == TIM1_TC_COMPARE_SWAP)
                TIM1_SetCompareSwap(1u);
                TIM1_WriteCompareBuf(TIM1_TC_COMPARE_BUF_VALUE);
            #endif  /* (1u == TIM1_TC_COMPARE_SWAP) */
        #endif  /* (TIM1__COMPARE == TIM1_TC_COMP_CAP_MODE) */
    #endif  /* (TIM1__TIMER == TIM1_CONFIG) */

    #if (TIM1__PWM_SEL == TIM1_CONFIG)
        TIM1_WritePeriod(TIM1_PWM_PERIOD_VALUE );
        TIM1_WriteCompare(TIM1_PWM_COMPARE_VALUE);

        #if (1u == TIM1_PWM_COMPARE_SWAP)
            TIM1_SetCompareSwap(1u);
            TIM1_WriteCompareBuf(TIM1_PWM_COMPARE_BUF_VALUE);
        #endif  /* (1u == TIM1_PWM_COMPARE_SWAP) */

        #if (1u == TIM1_PWM_PERIOD_SWAP)
            TIM1_SetPeriodSwap(1u);
            TIM1_WritePeriodBuf(TIM1_PWM_PERIOD_BUF_VALUE);
        #endif  /* (1u == TIM1_PWM_PERIOD_SWAP) */

        /* Set values from customizer to CTRL2 */
        #if (TIM1__PWM_PR == TIM1_PWM_MODE)
            TIM1_TRIG_CONTROL2_REG =
                    (TIM1_CC_MATCH_NO_CHANGE    |
                    TIM1_OVERLOW_NO_CHANGE      |
                    TIM1_UNDERFLOW_NO_CHANGE);
        #else
            #if (TIM1__LEFT == TIM1_PWM_ALIGN)
                TIM1_TRIG_CONTROL2_REG = TIM1_PWM_MODE_LEFT;
            #endif  /* ( TIM1_PWM_LEFT == TIM1_PWM_ALIGN) */

            #if (TIM1__RIGHT == TIM1_PWM_ALIGN)
                TIM1_WriteCounter(TIM1_PWM_PERIOD_VALUE);
                TIM1_TRIG_CONTROL2_REG = TIM1_PWM_MODE_RIGHT;
            #endif  /* ( TIM1_PWM_RIGHT == TIM1_PWM_ALIGN) */

            #if (TIM1__CENTER == TIM1_PWM_ALIGN)
                TIM1_TRIG_CONTROL2_REG = TIM1_PWM_MODE_CENTER;
            #endif  /* ( TIM1_PWM_CENTER == TIM1_PWM_ALIGN) */

            #if (TIM1__ASYMMETRIC == TIM1_PWM_ALIGN)
                TIM1_TRIG_CONTROL2_REG = TIM1_PWM_MODE_ASYM;
            #endif  /* (TIM1__ASYMMETRIC == TIM1_PWM_ALIGN) */
        #endif  /* (TIM1__PWM_PR == TIM1_PWM_MODE) */
    #endif  /* (TIM1__PWM_SEL == TIM1_CONFIG) */
}


/*******************************************************************************
* Function Name: TIM1_Enable
********************************************************************************
*
* Summary:
*  Enables the TIM1.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_Enable(void)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();
    TIM1_BLOCK_CONTROL_REG |= TIM1_MASK;
    CyExitCriticalSection(enableInterrupts);

    /* Start Timer or PWM if start input is absent */
    #if (TIM1__PWM_SEL == TIM1_CONFIG)
        #if (0u == TIM1_PWM_START_SIGNAL_PRESENT)
            TIM1_TriggerCommand(TIM1_MASK, TIM1_CMD_START);
        #endif /* (0u == TIM1_PWM_START_SIGNAL_PRESENT) */
    #endif /* (TIM1__PWM_SEL == TIM1_CONFIG) */

    #if (TIM1__TIMER == TIM1_CONFIG)
        #if (0u == TIM1_TC_START_SIGNAL_PRESENT)
            TIM1_TriggerCommand(TIM1_MASK, TIM1_CMD_START);
        #endif /* (0u == TIM1_TC_START_SIGNAL_PRESENT) */
    #endif /* (TIM1__TIMER == TIM1_CONFIG) */
}


/*******************************************************************************
* Function Name: TIM1_Start
********************************************************************************
*
* Summary:
*  Initializes the TIM1 with default customizer
*  values when called the first time and enables the TIM1.
*  For subsequent calls the configuration is left unchanged and the component is
*  just enabled.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  TIM1_initVar: global variable is used to indicate initial
*  configuration of this component.  The variable is initialized to zero and set
*  to 1 the first time TIM1_Start() is called. This allows
*  enabling/disabling a component without re-initialization in all subsequent
*  calls to the TIM1_Start() routine.
*
*******************************************************************************/
void TIM1_Start(void)
{
    if (0u == TIM1_initVar)
    {
        TIM1_Init();
        TIM1_initVar = 1u;
    }

    TIM1_Enable();
}


/*******************************************************************************
* Function Name: TIM1_Stop
********************************************************************************
*
* Summary:
*  Disables the TIM1.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_Stop(void)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM1_BLOCK_CONTROL_REG &= (uint32)~TIM1_MASK;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM1_SetMode
********************************************************************************
*
* Summary:
*  Sets the operation mode of the TIM1. This function is used when
*  configured as a generic TIM1 and the actual mode of operation is
*  set at runtime. The mode must be set while the component is disabled.
*
* Parameters:
*  mode: Mode for the TIM1 to operate in
*   Values:
*   - TIM1_MODE_TIMER_COMPARE - Timer / Counter with
*                                                 compare capability
*         - TIM1_MODE_TIMER_CAPTURE - Timer / Counter with
*                                                 capture capability
*         - TIM1_MODE_QUAD - Quadrature decoder
*         - TIM1_MODE_PWM - PWM
*         - TIM1_MODE_PWM_DT - PWM with dead time
*         - TIM1_MODE_PWM_PR - PWM with pseudo random capability
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_SetMode(uint32 mode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM1_CONTROL_REG &= (uint32)~TIM1_MODE_MASK;
    TIM1_CONTROL_REG |= mode;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM1_SetQDMode
********************************************************************************
*
* Summary:
*  Sets the the Quadrature Decoder to one of the 3 supported modes.
*  Its functionality is only applicable to Quadrature Decoder operation.
*
* Parameters:
*  qdMode: Quadrature Decoder mode
*   Values:
*         - TIM1_MODE_X1 - Counts on phi 1 rising
*         - TIM1_MODE_X2 - Counts on both edges of phi1 (2x faster)
*         - TIM1_MODE_X4 - Counts on both edges of phi1 and phi2
*                                        (4x faster)
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_SetQDMode(uint32 qdMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM1_CONTROL_REG &= (uint32)~TIM1_QUAD_MODE_MASK;
    TIM1_CONTROL_REG |= qdMode;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM1_SetPrescaler
********************************************************************************
*
* Summary:
*  Sets the prescaler value that is applied to the clock input.  Not applicable
*  to a PWM with the dead time mode or Quadrature Decoder mode.
*
* Parameters:
*  prescaler: Prescaler divider value
*   Values:
*         - TIM1_PRESCALE_DIVBY1    - Divide by 1 (no prescaling)
*         - TIM1_PRESCALE_DIVBY2    - Divide by 2
*         - TIM1_PRESCALE_DIVBY4    - Divide by 4
*         - TIM1_PRESCALE_DIVBY8    - Divide by 8
*         - TIM1_PRESCALE_DIVBY16   - Divide by 16
*         - TIM1_PRESCALE_DIVBY32   - Divide by 32
*         - TIM1_PRESCALE_DIVBY64   - Divide by 64
*         - TIM1_PRESCALE_DIVBY128  - Divide by 128
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_SetPrescaler(uint32 prescaler)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM1_CONTROL_REG &= (uint32)~TIM1_PRESCALER_MASK;
    TIM1_CONTROL_REG |= prescaler;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM1_SetOneShot
********************************************************************************
*
* Summary:
*  Writes the register that controls whether the TIM1 runs
*  continuously or stops when terminal count is reached.  By default the
*  TIM1 operates in the continuous mode.
*
* Parameters:
*  oneShotEnable
*   Values:
*     - 0 - Continuous
*     - 1 - Enable One Shot
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_SetOneShot(uint32 oneShotEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM1_CONTROL_REG &= (uint32)~TIM1_ONESHOT_MASK;
    TIM1_CONTROL_REG |= ((uint32)((oneShotEnable & TIM1_1BIT_MASK) <<
                                                               TIM1_ONESHOT_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM1_SetPWMMode
********************************************************************************
*
* Summary:
*  Writes the control register that determines what mode of operation the PWM
*  output lines are driven in.  There is a setting for what to do on a
*  comparison match (CC_MATCH), on an overflow (OVERFLOW) and on an underflow
*  (UNDERFLOW).  The value for each of the three must be ORed together to form
*  the mode.
*
* Parameters:
*  modeMask: A combination of three mode settings.  Mask must include a value
*  for each of the three or use one of the preconfigured PWM settings.
*   Values:
*     - CC_MATCH_SET        - Set on comparison match
*     - CC_MATCH_CLEAR      - Clear on comparison match
*     - CC_MATCH_INVERT     - Invert on comparison match
*     - CC_MATCH_NO_CHANGE  - No change on comparison match
*     - OVERLOW_SET         - Set on overflow
*     - OVERLOW_CLEAR       - Clear on  overflow
*     - OVERLOW_INVERT      - Invert on overflow
*     - OVERLOW_NO_CHANGE   - No change on overflow
*     - UNDERFLOW_SET       - Set on underflow
*     - UNDERFLOW_CLEAR     - Clear on underflow
*     - UNDERFLOW_INVERT    - Invert on underflow
*     - UNDERFLOW_NO_CHANGE - No change on underflow
*     - PWM_MODE_LEFT       - Setting for left aligned PWM.  Should be combined
*                             with up counting mode
*     - PWM_MODE_RIGHT      - Setting for right aligned PWM.  Should be combined
*                             with down counting mode
*     - PWM_MODE_CENTER     - Setting for center aligned PWM.  Should be
*                             combined with up/down 0 mode
*     - PWM_MODE_ASYM       - Setting for asymmetric PWM.  Should be combined
*                             with up/down 1 mode
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_SetPWMMode(uint32 modeMask)
{
    TIM1_TRIG_CONTROL2_REG = (modeMask & TIM1_6BIT_MASK);
}



/*******************************************************************************
* Function Name: TIM1_SetPWMSyncKill
********************************************************************************
*
* Summary:
*  Writes the register that controls whether the PWM kill signal (stop input)
*  causes asynchronous or synchronous kill operation.  By default the kill
*  operation is asynchronous.  This functionality is only applicable to the PWM
*  and PWM with dead time modes.
*
*  For Synchronous mode the kill signal disables both the line and line_n
*  signals until the next terminal count.
*
*  For Asynchronous mode the kill signal disables both the line and line_n
*  signals when the kill signal is present.  This mode should only be used
*  when the kill signal (stop input) is configured in the pass through mode
*  (Level sensitive signal).

*
* Parameters:
*  syncKillEnable
*   Values:
*     - 0 - Asynchronous
*     - 1 - Synchronous
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_SetPWMSyncKill(uint32 syncKillEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM1_CONTROL_REG &= (uint32)~TIM1_PWM_SYNC_KILL_MASK;
    TIM1_CONTROL_REG |= ((uint32)((syncKillEnable & TIM1_1BIT_MASK)  <<
                                               TIM1_PWM_SYNC_KILL_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM1_SetPWMStopOnKill
********************************************************************************
*
* Summary:
*  Writes the register that controls whether the PWM kill signal (stop input)
*  causes the PWM counter to stop.  By default the kill operation does not stop
*  the counter.  This functionality is only applicable to the three PWM modes.
*
*
* Parameters:
*  stopOnKillEnable
*   Values:
*     - 0 - Don't stop
*     - 1 - Stop
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_SetPWMStopOnKill(uint32 stopOnKillEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM1_CONTROL_REG &= (uint32)~TIM1_PWM_STOP_KILL_MASK;
    TIM1_CONTROL_REG |= ((uint32)((stopOnKillEnable & TIM1_1BIT_MASK)  <<
                                                         TIM1_PWM_STOP_KILL_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM1_SetPWMDeadTime
********************************************************************************
*
* Summary:
*  Writes the dead time control value.  This value delays the rising edge of
*  both the line and line_n signals the designated number of cycles resulting
*  in both signals being inactive for that many cycles.  This functionality is
*  only applicable to the PWM in the dead time mode.

*
* Parameters:
*  Dead time to insert
*   Values: 0 to 255
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_SetPWMDeadTime(uint32 deadTime)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM1_CONTROL_REG &= (uint32)~TIM1_PRESCALER_MASK;
    TIM1_CONTROL_REG |= ((uint32)((deadTime & TIM1_8BIT_MASK) <<
                                                          TIM1_PRESCALER_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM1_SetPWMInvert
********************************************************************************
*
* Summary:
*  Writes the bits that control whether the line and line_n outputs are
*  inverted from their normal output values.  This functionality is only
*  applicable to the three PWM modes.
*
* Parameters:
*  mask: Mask of outputs to invert.
*   Values:
*         - TIM1_INVERT_LINE   - Inverts the line output
*         - TIM1_INVERT_LINE_N - Inverts the line_n output
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_SetPWMInvert(uint32 mask)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM1_CONTROL_REG &= (uint32)~TIM1_INV_OUT_MASK;
    TIM1_CONTROL_REG |= mask;

    CyExitCriticalSection(enableInterrupts);
}



/*******************************************************************************
* Function Name: TIM1_WriteCounter
********************************************************************************
*
* Summary:
*  Writes a new 16bit counter value directly into the counter register, thus
*  setting the counter (not the period) to the value written. It is not
*  advised to write to this field when the counter is running.
*
* Parameters:
*  count: value to write
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_WriteCounter(uint32 count)
{
    TIM1_COUNTER_REG = (count & TIM1_16BIT_MASK);
}


/*******************************************************************************
* Function Name: TIM1_ReadCounter
********************************************************************************
*
* Summary:
*  Reads the current counter value.
*
* Parameters:
*  None
*
* Return:
*  Current counter value
*
*******************************************************************************/
uint32 TIM1_ReadCounter(void)
{
    return (TIM1_COUNTER_REG & TIM1_16BIT_MASK);
}


/*******************************************************************************
* Function Name: TIM1_SetCounterMode
********************************************************************************
*
* Summary:
*  Sets the counter mode.  Applicable to all modes except Quadrature Decoder
*  and the PWM with a pseudo random output.
*
* Parameters:
*  counterMode: Enumerated counter type values
*   Values:
*     - TIM1_COUNT_UP       - Counts up
*     - TIM1_COUNT_DOWN     - Counts down
*     - TIM1_COUNT_UPDOWN0  - Counts up and down. Terminal count
*                                         generated when counter reaches 0
*     - TIM1_COUNT_UPDOWN1  - Counts up and down. Terminal count
*                                         generated both when counter reaches 0
*                                         and period
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_SetCounterMode(uint32 counterMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM1_CONTROL_REG &= (uint32)~TIM1_UPDOWN_MASK;
    TIM1_CONTROL_REG |= counterMode;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM1_WritePeriod
********************************************************************************
*
* Summary:
*  Writes the 16 bit period register with the new period value.
*  To cause the counter to count for N cycles this register should be written
*  with N-1 (counts from 0 to period inclusive).
*
* Parameters:
*  period: Period value
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_WritePeriod(uint32 period)
{
    TIM1_PERIOD_REG = (period & TIM1_16BIT_MASK);
}


/*******************************************************************************
* Function Name: TIM1_ReadPeriod
********************************************************************************
*
* Summary:
*  Reads the 16 bit period register.
*
* Parameters:
*  None
*
* Return:
*  Period value
*
*******************************************************************************/
uint32 TIM1_ReadPeriod(void)
{
    return (TIM1_PERIOD_REG & TIM1_16BIT_MASK);
}


/*******************************************************************************
* Function Name: TIM1_SetCompareSwap
********************************************************************************
*
* Summary:
*  Writes the register that controls whether the compare registers are
*  swapped. When enabled in the Timer/Counter mode(without capture) the swap
*  occurs at a TC event. In the PWM mode the swap occurs at the next TC event
*  following a hardware switch event.
*
* Parameters:
*  swapEnable
*   Values:
*     - 0 - Disable swap
*     - 1 - Enable swap
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_SetCompareSwap(uint32 swapEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM1_CONTROL_REG &= (uint32)~TIM1_RELOAD_CC_MASK;
    TIM1_CONTROL_REG |= (swapEnable & TIM1_1BIT_MASK);

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM1_WritePeriodBuf
********************************************************************************
*
* Summary:
*  Writes the 16 bit period buf register with the new period value.
*
* Parameters:
*  periodBuf: Period value
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_WritePeriodBuf(uint32 periodBuf)
{
    TIM1_PERIOD_BUF_REG = (periodBuf & TIM1_16BIT_MASK);
}


/*******************************************************************************
* Function Name: TIM1_ReadPeriodBuf
********************************************************************************
*
* Summary:
*  Reads the 16 bit period buf register.
*
* Parameters:
*  None
*
* Return:
*  Period value
*
*******************************************************************************/
uint32 TIM1_ReadPeriodBuf(void)
{
    return (TIM1_PERIOD_BUF_REG & TIM1_16BIT_MASK);
}


/*******************************************************************************
* Function Name: TIM1_SetPeriodSwap
********************************************************************************
*
* Summary:
*  Writes the register that controls whether the period registers are
*  swapped. When enabled in Timer/Counter mode the swap occurs at a TC event.
*  In the PWM mode the swap occurs at the next TC event following a hardware
*  switch event.
*
* Parameters:
*  swapEnable
*   Values:
*     - 0 - Disable swap
*     - 1 - Enable swap
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_SetPeriodSwap(uint32 swapEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM1_CONTROL_REG &= (uint32)~TIM1_RELOAD_PERIOD_MASK;
    TIM1_CONTROL_REG |= ((uint32)((swapEnable & TIM1_1BIT_MASK) <<
                                                            TIM1_RELOAD_PERIOD_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM1_WriteCompare
********************************************************************************
*
* Summary:
*  Writes the 16 bit compare register with the new compare value. Not
*  applicable for Timer/Counter with Capture or in Quadrature Decoder modes.
*
* Parameters:
*  compare: Compare value
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_WriteCompare(uint32 compare)
{
    #if (TIM1_CY_TCPWM_V2)
        uint32 currentMode;
    #endif /* (TIM1_CY_TCPWM_V2) */

    #if (TIM1_CY_TCPWM_V2)
        currentMode = ((TIM1_CONTROL_REG & TIM1_UPDOWN_MASK) >> TIM1_UPDOWN_SHIFT);

        if (TIM1__COUNT_DOWN == currentMode)
        {
            TIM1_COMP_CAP_REG = ((compare + 1u) & TIM1_16BIT_MASK);
        }
        else if (TIM1__COUNT_UP == currentMode)
        {
            TIM1_COMP_CAP_REG = ((compare - 1u) & TIM1_16BIT_MASK);
        }
        else
        {
            TIM1_COMP_CAP_REG = (compare & TIM1_16BIT_MASK);
        }
    #else
        TIM1_COMP_CAP_REG = (compare & TIM1_16BIT_MASK);
    #endif /* (TIM1_CY_TCPWM_V2) */
}


/*******************************************************************************
* Function Name: TIM1_ReadCompare
********************************************************************************
*
* Summary:
*  Reads the compare register. Not applicable for Timer/Counter with Capture
*  or in Quadrature Decoder modes.
*
* Parameters:
*  None
*
* Return:
*  Compare value
*
*******************************************************************************/
uint32 TIM1_ReadCompare(void)
{
    #if (TIM1_CY_TCPWM_V2)
        uint32 currentMode;
        uint32 regVal;
    #endif /* (TIM1_CY_TCPWM_V2) */

    #if (TIM1_CY_TCPWM_V2)
        currentMode = ((TIM1_CONTROL_REG & TIM1_UPDOWN_MASK) >> TIM1_UPDOWN_SHIFT);

        if (TIM1__COUNT_DOWN == currentMode)
        {
            regVal = ((TIM1_COMP_CAP_REG - 1u) & TIM1_16BIT_MASK);
        }
        else if (TIM1__COUNT_UP == currentMode)
        {
            regVal = ((TIM1_COMP_CAP_REG + 1u) & TIM1_16BIT_MASK);
        }
        else
        {
            regVal = (TIM1_COMP_CAP_REG & TIM1_16BIT_MASK);
        }
        return (regVal);
    #else
        return (TIM1_COMP_CAP_REG & TIM1_16BIT_MASK);
    #endif /* (TIM1_CY_TCPWM_V2) */
}


/*******************************************************************************
* Function Name: TIM1_WriteCompareBuf
********************************************************************************
*
* Summary:
*  Writes the 16 bit compare buffer register with the new compare value. Not
*  applicable for Timer/Counter with Capture or in Quadrature Decoder modes.
*
* Parameters:
*  compareBuf: Compare value
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_WriteCompareBuf(uint32 compareBuf)
{
    #if (TIM1_CY_TCPWM_V2)
        uint32 currentMode;
    #endif /* (TIM1_CY_TCPWM_V2) */

    #if (TIM1_CY_TCPWM_V2)
        currentMode = ((TIM1_CONTROL_REG & TIM1_UPDOWN_MASK) >> TIM1_UPDOWN_SHIFT);

        if (TIM1__COUNT_DOWN == currentMode)
        {
            TIM1_COMP_CAP_BUF_REG = ((compareBuf + 1u) & TIM1_16BIT_MASK);
        }
        else if (TIM1__COUNT_UP == currentMode)
        {
            TIM1_COMP_CAP_BUF_REG = ((compareBuf - 1u) & TIM1_16BIT_MASK);
        }
        else
        {
            TIM1_COMP_CAP_BUF_REG = (compareBuf & TIM1_16BIT_MASK);
        }
    #else
        TIM1_COMP_CAP_BUF_REG = (compareBuf & TIM1_16BIT_MASK);
    #endif /* (TIM1_CY_TCPWM_V2) */
}


/*******************************************************************************
* Function Name: TIM1_ReadCompareBuf
********************************************************************************
*
* Summary:
*  Reads the compare buffer register. Not applicable for Timer/Counter with
*  Capture or in Quadrature Decoder modes.
*
* Parameters:
*  None
*
* Return:
*  Compare buffer value
*
*******************************************************************************/
uint32 TIM1_ReadCompareBuf(void)
{
    #if (TIM1_CY_TCPWM_V2)
        uint32 currentMode;
        uint32 regVal;
    #endif /* (TIM1_CY_TCPWM_V2) */

    #if (TIM1_CY_TCPWM_V2)
        currentMode = ((TIM1_CONTROL_REG & TIM1_UPDOWN_MASK) >> TIM1_UPDOWN_SHIFT);

        if (TIM1__COUNT_DOWN == currentMode)
        {
            regVal = ((TIM1_COMP_CAP_BUF_REG - 1u) & TIM1_16BIT_MASK);
        }
        else if (TIM1__COUNT_UP == currentMode)
        {
            regVal = ((TIM1_COMP_CAP_BUF_REG + 1u) & TIM1_16BIT_MASK);
        }
        else
        {
            regVal = (TIM1_COMP_CAP_BUF_REG & TIM1_16BIT_MASK);
        }
        return (regVal);
    #else
        return (TIM1_COMP_CAP_BUF_REG & TIM1_16BIT_MASK);
    #endif /* (TIM1_CY_TCPWM_V2) */
}


/*******************************************************************************
* Function Name: TIM1_ReadCapture
********************************************************************************
*
* Summary:
*  Reads the captured counter value. This API is applicable only for
*  Timer/Counter with the capture mode and Quadrature Decoder modes.
*
* Parameters:
*  None
*
* Return:
*  Capture value
*
*******************************************************************************/
uint32 TIM1_ReadCapture(void)
{
    return (TIM1_COMP_CAP_REG & TIM1_16BIT_MASK);
}


/*******************************************************************************
* Function Name: TIM1_ReadCaptureBuf
********************************************************************************
*
* Summary:
*  Reads the capture buffer register. This API is applicable only for
*  Timer/Counter with the capture mode and Quadrature Decoder modes.
*
* Parameters:
*  None
*
* Return:
*  Capture buffer value
*
*******************************************************************************/
uint32 TIM1_ReadCaptureBuf(void)
{
    return (TIM1_COMP_CAP_BUF_REG & TIM1_16BIT_MASK);
}


/*******************************************************************************
* Function Name: TIM1_SetCaptureMode
********************************************************************************
*
* Summary:
*  Sets the capture trigger mode. For PWM mode this is the switch input.
*  This input is not applicable to the Timer/Counter without Capture and
*  Quadrature Decoder modes.
*
* Parameters:
*  triggerMode: Enumerated trigger mode value
*   Values:
*     - TIM1_TRIG_LEVEL     - Level
*     - TIM1_TRIG_RISING    - Rising edge
*     - TIM1_TRIG_FALLING   - Falling edge
*     - TIM1_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_SetCaptureMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM1_TRIG_CONTROL1_REG &= (uint32)~TIM1_CAPTURE_MASK;
    TIM1_TRIG_CONTROL1_REG |= triggerMode;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM1_SetReloadMode
********************************************************************************
*
* Summary:
*  Sets the reload trigger mode. For Quadrature Decoder mode this is the index
*  input.
*
* Parameters:
*  triggerMode: Enumerated trigger mode value
*   Values:
*     - TIM1_TRIG_LEVEL     - Level
*     - TIM1_TRIG_RISING    - Rising edge
*     - TIM1_TRIG_FALLING   - Falling edge
*     - TIM1_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_SetReloadMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM1_TRIG_CONTROL1_REG &= (uint32)~TIM1_RELOAD_MASK;
    TIM1_TRIG_CONTROL1_REG |= ((uint32)(triggerMode << TIM1_RELOAD_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM1_SetStartMode
********************************************************************************
*
* Summary:
*  Sets the start trigger mode. For Quadrature Decoder mode this is the
*  phiB input.
*
* Parameters:
*  triggerMode: Enumerated trigger mode value
*   Values:
*     - TIM1_TRIG_LEVEL     - Level
*     - TIM1_TRIG_RISING    - Rising edge
*     - TIM1_TRIG_FALLING   - Falling edge
*     - TIM1_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_SetStartMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM1_TRIG_CONTROL1_REG &= (uint32)~TIM1_START_MASK;
    TIM1_TRIG_CONTROL1_REG |= ((uint32)(triggerMode << TIM1_START_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM1_SetStopMode
********************************************************************************
*
* Summary:
*  Sets the stop trigger mode. For PWM mode this is the kill input.
*
* Parameters:
*  triggerMode: Enumerated trigger mode value
*   Values:
*     - TIM1_TRIG_LEVEL     - Level
*     - TIM1_TRIG_RISING    - Rising edge
*     - TIM1_TRIG_FALLING   - Falling edge
*     - TIM1_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_SetStopMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM1_TRIG_CONTROL1_REG &= (uint32)~TIM1_STOP_MASK;
    TIM1_TRIG_CONTROL1_REG |= ((uint32)(triggerMode << TIM1_STOP_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM1_SetCountMode
********************************************************************************
*
* Summary:
*  Sets the count trigger mode. For Quadrature Decoder mode this is the phiA
*  input.
*
* Parameters:
*  triggerMode: Enumerated trigger mode value
*   Values:
*     - TIM1_TRIG_LEVEL     - Level
*     - TIM1_TRIG_RISING    - Rising edge
*     - TIM1_TRIG_FALLING   - Falling edge
*     - TIM1_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_SetCountMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM1_TRIG_CONTROL1_REG &= (uint32)~TIM1_COUNT_MASK;
    TIM1_TRIG_CONTROL1_REG |= ((uint32)(triggerMode << TIM1_COUNT_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM1_TriggerCommand
********************************************************************************
*
* Summary:
*  Triggers the designated command to occur on the designated TCPWM instances.
*  The mask can be used to apply this command simultaneously to more than one
*  instance.  This allows multiple TCPWM instances to be synchronized.
*
* Parameters:
*  mask: A combination of mask bits for each instance of the TCPWM that the
*        command should apply to.  This function from one instance can be used
*        to apply the command to any of the instances in the design.
*        The mask value for a specific instance is available with the MASK
*        define.
*  command: Enumerated command values. Capture command only applicable for
*           Timer/Counter with Capture and PWM modes.
*   Values:
*     - TIM1_CMD_CAPTURE    - Trigger Capture command
*     - TIM1_CMD_RELOAD     - Trigger Reload command
*     - TIM1_CMD_STOP       - Trigger Stop command
*     - TIM1_CMD_START      - Trigger Start command
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_TriggerCommand(uint32 mask, uint32 command)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM1_COMMAND_REG = ((uint32)(mask << command));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM1_ReadStatus
********************************************************************************
*
* Summary:
*  Reads the status of the TIM1.
*
* Parameters:
*  None
*
* Return:
*  Status
*   Values:
*     - TIM1_STATUS_DOWN    - Set if counting down
*     - TIM1_STATUS_RUNNING - Set if counter is running
*
*******************************************************************************/
uint32 TIM1_ReadStatus(void)
{
    return ((TIM1_STATUS_REG >> TIM1_RUNNING_STATUS_SHIFT) |
            (TIM1_STATUS_REG & TIM1_STATUS_DOWN));
}


/*******************************************************************************
* Function Name: TIM1_SetInterruptMode
********************************************************************************
*
* Summary:
*  Sets the interrupt mask to control which interrupt
*  requests generate the interrupt signal.
*
* Parameters:
*   interruptMask: Mask of bits to be enabled
*   Values:
*     - TIM1_INTR_MASK_TC       - Terminal count mask
*     - TIM1_INTR_MASK_CC_MATCH - Compare count / capture mask
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_SetInterruptMode(uint32 interruptMask)
{
    TIM1_INTERRUPT_MASK_REG =  interruptMask;
}


/*******************************************************************************
* Function Name: TIM1_GetInterruptSourceMasked
********************************************************************************
*
* Summary:
*  Gets the interrupt requests masked by the interrupt mask.
*
* Parameters:
*   None
*
* Return:
*  Masked interrupt source
*   Values:
*     - TIM1_INTR_MASK_TC       - Terminal count mask
*     - TIM1_INTR_MASK_CC_MATCH - Compare count / capture mask
*
*******************************************************************************/
uint32 TIM1_GetInterruptSourceMasked(void)
{
    return (TIM1_INTERRUPT_MASKED_REG);
}


/*******************************************************************************
* Function Name: TIM1_GetInterruptSource
********************************************************************************
*
* Summary:
*  Gets the interrupt requests (without masking).
*
* Parameters:
*  None
*
* Return:
*  Interrupt request value
*   Values:
*     - TIM1_INTR_MASK_TC       - Terminal count mask
*     - TIM1_INTR_MASK_CC_MATCH - Compare count / capture mask
*
*******************************************************************************/
uint32 TIM1_GetInterruptSource(void)
{
    return (TIM1_INTERRUPT_REQ_REG);
}


/*******************************************************************************
* Function Name: TIM1_ClearInterrupt
********************************************************************************
*
* Summary:
*  Clears the interrupt request.
*
* Parameters:
*   interruptMask: Mask of interrupts to clear
*   Values:
*     - TIM1_INTR_MASK_TC       - Terminal count mask
*     - TIM1_INTR_MASK_CC_MATCH - Compare count / capture mask
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_ClearInterrupt(uint32 interruptMask)
{
    TIM1_INTERRUPT_REQ_REG = interruptMask;
}


/*******************************************************************************
* Function Name: TIM1_SetInterrupt
********************************************************************************
*
* Summary:
*  Sets a software interrupt request.
*
* Parameters:
*   interruptMask: Mask of interrupts to set
*   Values:
*     - TIM1_INTR_MASK_TC       - Terminal count mask
*     - TIM1_INTR_MASK_CC_MATCH - Compare count / capture mask
*
* Return:
*  None
*
*******************************************************************************/
void TIM1_SetInterrupt(uint32 interruptMask)
{
    TIM1_INTERRUPT_SET_REG = interruptMask;
}


/* [] END OF FILE */
