/*******************************************************************************
* File Name: TIM_4.c
* Version 1.10
*
* Description:
*  This file provides the source code to the API for the TIM_4
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

#include "TIM_4.h"
#include "CyLib.h"

uint8 TIM_4_initVar = 0u;


/*******************************************************************************
* Function Name: TIM_4_Init
********************************************************************************
*
* Summary:
*  Initialize/Restore default TIM_4 configuration.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_Init(void)
{

    /* Set values from customizer to CTRL */
    #if (TIM_4__QUAD == TIM_4_CONFIG)
        TIM_4_CONTROL_REG =
        (((uint32)(TIM_4_QUAD_ENCODING_MODES     << TIM_4_QUAD_MODE_SHIFT))       |
         ((uint32)(TIM_4_CONFIG                  << TIM_4_MODE_SHIFT)));
    #endif  /* (TIM_4__QUAD == TIM_4_CONFIG) */

    #if (TIM_4__PWM_SEL == TIM_4_CONFIG)
        TIM_4_CONTROL_REG =
        (((uint32)(TIM_4_PWM_STOP_EVENT          << TIM_4_PWM_STOP_KILL_SHIFT))    |
         ((uint32)(TIM_4_PWM_OUT_INVERT          << TIM_4_INV_OUT_SHIFT))         |
         ((uint32)(TIM_4_PWM_OUT_N_INVERT        << TIM_4_INV_COMPL_OUT_SHIFT))     |
         ((uint32)(TIM_4_PWM_MODE                << TIM_4_MODE_SHIFT)));

        #if (TIM_4__PWM_PR == TIM_4_PWM_MODE)
            TIM_4_CONTROL_REG |=
            ((uint32)(TIM_4_PWM_RUN_MODE         << TIM_4_ONESHOT_SHIFT));

            TIM_4_WriteCounter(TIM_4_PWM_PR_INIT_VALUE);
        #else
            TIM_4_CONTROL_REG |=
            (((uint32)(TIM_4_PWM_ALIGN           << TIM_4_UPDOWN_SHIFT))          |
             ((uint32)(TIM_4_PWM_KILL_EVENT      << TIM_4_PWM_SYNC_KILL_SHIFT)));
        #endif  /* (TIM_4__PWM_PR == TIM_4_PWM_MODE) */

        #if (TIM_4__PWM_DT == TIM_4_PWM_MODE)
            TIM_4_CONTROL_REG |=
            ((uint32)(TIM_4_PWM_DEAD_TIME_CYCLE  << TIM_4_PRESCALER_SHIFT));
        #endif  /* (TIM_4__PWM_DT == TIM_4_PWM_MODE) */

        #if (TIM_4__PWM == TIM_4_PWM_MODE)
            TIM_4_CONTROL_REG |=
            ((uint32)TIM_4_PWM_PRESCALER         << TIM_4_PRESCALER_SHIFT);
        #endif  /* (TIM_4__PWM == TIM_4_PWM_MODE) */
    #endif  /* (TIM_4__PWM_SEL == TIM_4_CONFIG) */

    #if (TIM_4__TIMER == TIM_4_CONFIG)
        TIM_4_CONTROL_REG =
        (((uint32)(TIM_4_TC_PRESCALER            << TIM_4_PRESCALER_SHIFT))   |
         ((uint32)(TIM_4_TC_COUNTER_MODE         << TIM_4_UPDOWN_SHIFT))      |
         ((uint32)(TIM_4_TC_RUN_MODE             << TIM_4_ONESHOT_SHIFT))     |
         ((uint32)(TIM_4_TC_COMP_CAP_MODE        << TIM_4_MODE_SHIFT)));
    #endif  /* (TIM_4__TIMER == TIM_4_CONFIG) */

    /* Set values from customizer to CTRL1 */
    #if (TIM_4__QUAD == TIM_4_CONFIG)
        TIM_4_TRIG_CONTROL1_REG  =
        (((uint32)(TIM_4_QUAD_PHIA_SIGNAL_MODE   << TIM_4_COUNT_SHIFT))       |
         ((uint32)(TIM_4_QUAD_INDEX_SIGNAL_MODE  << TIM_4_RELOAD_SHIFT))      |
         ((uint32)(TIM_4_QUAD_STOP_SIGNAL_MODE   << TIM_4_STOP_SHIFT))        |
         ((uint32)(TIM_4_QUAD_PHIB_SIGNAL_MODE   << TIM_4_START_SHIFT)));
    #endif  /* (TIM_4__QUAD == TIM_4_CONFIG) */

    #if (TIM_4__PWM_SEL == TIM_4_CONFIG)
        TIM_4_TRIG_CONTROL1_REG  =
        (((uint32)(TIM_4_PWM_SWITCH_SIGNAL_MODE  << TIM_4_CAPTURE_SHIFT))     |
         ((uint32)(TIM_4_PWM_COUNT_SIGNAL_MODE   << TIM_4_COUNT_SHIFT))       |
         ((uint32)(TIM_4_PWM_RELOAD_SIGNAL_MODE  << TIM_4_RELOAD_SHIFT))      |
         ((uint32)(TIM_4_PWM_STOP_SIGNAL_MODE    << TIM_4_STOP_SHIFT))        |
         ((uint32)(TIM_4_PWM_START_SIGNAL_MODE   << TIM_4_START_SHIFT)));
    #endif  /* (TIM_4__PWM_SEL == TIM_4_CONFIG) */

    #if (TIM_4__TIMER == TIM_4_CONFIG)
        TIM_4_TRIG_CONTROL1_REG  =
        (((uint32)(TIM_4_TC_CAPTURE_SIGNAL_MODE  << TIM_4_CAPTURE_SHIFT))     |
         ((uint32)(TIM_4_TC_COUNT_SIGNAL_MODE    << TIM_4_COUNT_SHIFT))       |
         ((uint32)(TIM_4_TC_RELOAD_SIGNAL_MODE   << TIM_4_RELOAD_SHIFT))      |
         ((uint32)(TIM_4_TC_STOP_SIGNAL_MODE     << TIM_4_STOP_SHIFT))        |
         ((uint32)(TIM_4_TC_START_SIGNAL_MODE    << TIM_4_START_SHIFT)));
    #endif  /* (TIM_4__TIMER == TIM_4_CONFIG) */

    /* Set values from customizer to INTR */
    #if (TIM_4__QUAD == TIM_4_CONFIG)
        TIM_4_SetInterruptMode(TIM_4_QUAD_INTERRUPT_MASK);
    #endif  /* (TIM_4__QUAD == TIM_4_CONFIG) */

    #if (TIM_4__PWM_SEL == TIM_4_CONFIG)
        TIM_4_SetInterruptMode(TIM_4_PWM_INTERRUPT_MASK);
    #endif  /* (TIM_4__PWM_SEL == TIM_4_CONFIG) */

    #if (TIM_4__TIMER == TIM_4_CONFIG)
        TIM_4_SetInterruptMode(TIM_4_TC_INTERRUPT_MASK);
    #endif  /* (TIM_4__TIMER == TIM_4_CONFIG) */

    /* Set other values from customizer */
    #if (TIM_4__TIMER == TIM_4_CONFIG)
        TIM_4_WritePeriod(TIM_4_TC_PERIOD_VALUE );

        #if (TIM_4__COUNT_DOWN == TIM_4_TC_COUNTER_MODE)
            TIM_4_WriteCounter(TIM_4_TC_PERIOD_VALUE );
        #endif  /* (TIM_4__COUNT_DOWN == TIM_4_TC_COUNTER_MODE) */

        #if (TIM_4__COMPARE == TIM_4_TC_COMP_CAP_MODE)
            TIM_4_WriteCompare(TIM_4_TC_COMPARE_VALUE);

            #if (1u == TIM_4_TC_COMPARE_SWAP)
                TIM_4_SetCompareSwap(1u);
                TIM_4_WriteCompareBuf(TIM_4_TC_COMPARE_BUF_VALUE);
            #endif  /* (1u == TIM_4_TC_COMPARE_SWAP) */
        #endif  /* (TIM_4__COMPARE == TIM_4_TC_COMP_CAP_MODE) */
    #endif  /* (TIM_4__TIMER == TIM_4_CONFIG) */

    #if (TIM_4__PWM_SEL == TIM_4_CONFIG)
        TIM_4_WritePeriod(TIM_4_PWM_PERIOD_VALUE );
        TIM_4_WriteCompare(TIM_4_PWM_COMPARE_VALUE);

        #if (1u == TIM_4_PWM_COMPARE_SWAP)
            TIM_4_SetCompareSwap(1u);
            TIM_4_WriteCompareBuf(TIM_4_PWM_COMPARE_BUF_VALUE);
        #endif  /* (1u == TIM_4_PWM_COMPARE_SWAP) */

        #if (1u == TIM_4_PWM_PERIOD_SWAP)
            TIM_4_SetPeriodSwap(1u);
            TIM_4_WritePeriodBuf(TIM_4_PWM_PERIOD_BUF_VALUE);
        #endif  /* (1u == TIM_4_PWM_PERIOD_SWAP) */

        /* Set values from customizer to CTRL2 */
        #if (TIM_4__PWM_PR == TIM_4_PWM_MODE)
            TIM_4_TRIG_CONTROL2_REG =
                    (TIM_4_CC_MATCH_NO_CHANGE    |
                    TIM_4_OVERLOW_NO_CHANGE      |
                    TIM_4_UNDERFLOW_NO_CHANGE);
        #else
            #if (TIM_4__LEFT == TIM_4_PWM_ALIGN)
                TIM_4_TRIG_CONTROL2_REG = TIM_4_PWM_MODE_LEFT;
            #endif  /* ( TIM_4_PWM_LEFT == TIM_4_PWM_ALIGN) */

            #if (TIM_4__RIGHT == TIM_4_PWM_ALIGN)
                TIM_4_WriteCounter(TIM_4_PWM_PERIOD_VALUE);
                TIM_4_TRIG_CONTROL2_REG = TIM_4_PWM_MODE_RIGHT;
            #endif  /* ( TIM_4_PWM_RIGHT == TIM_4_PWM_ALIGN) */

            #if (TIM_4__CENTER == TIM_4_PWM_ALIGN)
                TIM_4_TRIG_CONTROL2_REG = TIM_4_PWM_MODE_CENTER;
            #endif  /* ( TIM_4_PWM_CENTER == TIM_4_PWM_ALIGN) */

            #if (TIM_4__ASYMMETRIC == TIM_4_PWM_ALIGN)
                TIM_4_TRIG_CONTROL2_REG = TIM_4_PWM_MODE_ASYM;
            #endif  /* (TIM_4__ASYMMETRIC == TIM_4_PWM_ALIGN) */
        #endif  /* (TIM_4__PWM_PR == TIM_4_PWM_MODE) */
    #endif  /* (TIM_4__PWM_SEL == TIM_4_CONFIG) */
}


/*******************************************************************************
* Function Name: TIM_4_Enable
********************************************************************************
*
* Summary:
*  Enables the TIM_4.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_Enable(void)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();
    TIM_4_BLOCK_CONTROL_REG |= TIM_4_MASK;
    CyExitCriticalSection(enableInterrupts);

    /* Start Timer or PWM if start input is absent */
    #if (TIM_4__PWM_SEL == TIM_4_CONFIG)
        #if (0u == TIM_4_PWM_START_SIGNAL_PRESENT)
            TIM_4_TriggerCommand(TIM_4_MASK, TIM_4_CMD_START);
        #endif /* (0u == TIM_4_PWM_START_SIGNAL_PRESENT) */
    #endif /* (TIM_4__PWM_SEL == TIM_4_CONFIG) */

    #if (TIM_4__TIMER == TIM_4_CONFIG)
        #if (0u == TIM_4_TC_START_SIGNAL_PRESENT)
            TIM_4_TriggerCommand(TIM_4_MASK, TIM_4_CMD_START);
        #endif /* (0u == TIM_4_TC_START_SIGNAL_PRESENT) */
    #endif /* (TIM_4__TIMER == TIM_4_CONFIG) */
}


/*******************************************************************************
* Function Name: TIM_4_Start
********************************************************************************
*
* Summary:
*  Initializes the TIM_4 with default customizer
*  values when called the first time and enables the TIM_4.
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
*  TIM_4_initVar: global variable is used to indicate initial
*  configuration of this component.  The variable is initialized to zero and set
*  to 1 the first time TIM_4_Start() is called. This allows
*  enabling/disabling a component without re-initialization in all subsequent
*  calls to the TIM_4_Start() routine.
*
*******************************************************************************/
void TIM_4_Start(void)
{
    if (0u == TIM_4_initVar)
    {
        TIM_4_Init();
        TIM_4_initVar = 1u;
    }

    TIM_4_Enable();
}


/*******************************************************************************
* Function Name: TIM_4_Stop
********************************************************************************
*
* Summary:
*  Disables the TIM_4.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_Stop(void)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM_4_BLOCK_CONTROL_REG &= (uint32)~TIM_4_MASK;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM_4_SetMode
********************************************************************************
*
* Summary:
*  Sets the operation mode of the TIM_4. This function is used when
*  configured as a generic TIM_4 and the actual mode of operation is
*  set at runtime. The mode must be set while the component is disabled.
*
* Parameters:
*  mode: Mode for the TIM_4 to operate in
*   Values:
*   - TIM_4_MODE_TIMER_COMPARE - Timer / Counter with
*                                                 compare capability
*         - TIM_4_MODE_TIMER_CAPTURE - Timer / Counter with
*                                                 capture capability
*         - TIM_4_MODE_QUAD - Quadrature decoder
*         - TIM_4_MODE_PWM - PWM
*         - TIM_4_MODE_PWM_DT - PWM with dead time
*         - TIM_4_MODE_PWM_PR - PWM with pseudo random capability
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_SetMode(uint32 mode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM_4_CONTROL_REG &= (uint32)~TIM_4_MODE_MASK;
    TIM_4_CONTROL_REG |= mode;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM_4_SetQDMode
********************************************************************************
*
* Summary:
*  Sets the the Quadrature Decoder to one of the 3 supported modes.
*  Its functionality is only applicable to Quadrature Decoder operation.
*
* Parameters:
*  qdMode: Quadrature Decoder mode
*   Values:
*         - TIM_4_MODE_X1 - Counts on phi 1 rising
*         - TIM_4_MODE_X2 - Counts on both edges of phi1 (2x faster)
*         - TIM_4_MODE_X4 - Counts on both edges of phi1 and phi2
*                                        (4x faster)
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_SetQDMode(uint32 qdMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM_4_CONTROL_REG &= (uint32)~TIM_4_QUAD_MODE_MASK;
    TIM_4_CONTROL_REG |= qdMode;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM_4_SetPrescaler
********************************************************************************
*
* Summary:
*  Sets the prescaler value that is applied to the clock input.  Not applicable
*  to a PWM with the dead time mode or Quadrature Decoder mode.
*
* Parameters:
*  prescaler: Prescaler divider value
*   Values:
*         - TIM_4_PRESCALE_DIVBY1    - Divide by 1 (no prescaling)
*         - TIM_4_PRESCALE_DIVBY2    - Divide by 2
*         - TIM_4_PRESCALE_DIVBY4    - Divide by 4
*         - TIM_4_PRESCALE_DIVBY8    - Divide by 8
*         - TIM_4_PRESCALE_DIVBY16   - Divide by 16
*         - TIM_4_PRESCALE_DIVBY32   - Divide by 32
*         - TIM_4_PRESCALE_DIVBY64   - Divide by 64
*         - TIM_4_PRESCALE_DIVBY128  - Divide by 128
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_SetPrescaler(uint32 prescaler)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM_4_CONTROL_REG &= (uint32)~TIM_4_PRESCALER_MASK;
    TIM_4_CONTROL_REG |= prescaler;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM_4_SetOneShot
********************************************************************************
*
* Summary:
*  Writes the register that controls whether the TIM_4 runs
*  continuously or stops when terminal count is reached.  By default the
*  TIM_4 operates in the continuous mode.
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
void TIM_4_SetOneShot(uint32 oneShotEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM_4_CONTROL_REG &= (uint32)~TIM_4_ONESHOT_MASK;
    TIM_4_CONTROL_REG |= ((uint32)((oneShotEnable & TIM_4_1BIT_MASK) <<
                                                               TIM_4_ONESHOT_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM_4_SetPWMMode
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
void TIM_4_SetPWMMode(uint32 modeMask)
{
    TIM_4_TRIG_CONTROL2_REG = (modeMask & TIM_4_6BIT_MASK);
}



/*******************************************************************************
* Function Name: TIM_4_SetPWMSyncKill
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
void TIM_4_SetPWMSyncKill(uint32 syncKillEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM_4_CONTROL_REG &= (uint32)~TIM_4_PWM_SYNC_KILL_MASK;
    TIM_4_CONTROL_REG |= ((uint32)((syncKillEnable & TIM_4_1BIT_MASK)  <<
                                               TIM_4_PWM_SYNC_KILL_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM_4_SetPWMStopOnKill
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
void TIM_4_SetPWMStopOnKill(uint32 stopOnKillEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM_4_CONTROL_REG &= (uint32)~TIM_4_PWM_STOP_KILL_MASK;
    TIM_4_CONTROL_REG |= ((uint32)((stopOnKillEnable & TIM_4_1BIT_MASK)  <<
                                                         TIM_4_PWM_STOP_KILL_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM_4_SetPWMDeadTime
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
void TIM_4_SetPWMDeadTime(uint32 deadTime)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM_4_CONTROL_REG &= (uint32)~TIM_4_PRESCALER_MASK;
    TIM_4_CONTROL_REG |= ((uint32)((deadTime & TIM_4_8BIT_MASK) <<
                                                          TIM_4_PRESCALER_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM_4_SetPWMInvert
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
*         - TIM_4_INVERT_LINE   - Inverts the line output
*         - TIM_4_INVERT_LINE_N - Inverts the line_n output
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_SetPWMInvert(uint32 mask)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM_4_CONTROL_REG &= (uint32)~TIM_4_INV_OUT_MASK;
    TIM_4_CONTROL_REG |= mask;

    CyExitCriticalSection(enableInterrupts);
}



/*******************************************************************************
* Function Name: TIM_4_WriteCounter
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
void TIM_4_WriteCounter(uint32 count)
{
    TIM_4_COUNTER_REG = (count & TIM_4_16BIT_MASK);
}


/*******************************************************************************
* Function Name: TIM_4_ReadCounter
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
uint32 TIM_4_ReadCounter(void)
{
    return (TIM_4_COUNTER_REG & TIM_4_16BIT_MASK);
}


/*******************************************************************************
* Function Name: TIM_4_SetCounterMode
********************************************************************************
*
* Summary:
*  Sets the counter mode.  Applicable to all modes except Quadrature Decoder
*  and the PWM with a pseudo random output.
*
* Parameters:
*  counterMode: Enumerated counter type values
*   Values:
*     - TIM_4_COUNT_UP       - Counts up
*     - TIM_4_COUNT_DOWN     - Counts down
*     - TIM_4_COUNT_UPDOWN0  - Counts up and down. Terminal count
*                                         generated when counter reaches 0
*     - TIM_4_COUNT_UPDOWN1  - Counts up and down. Terminal count
*                                         generated both when counter reaches 0
*                                         and period
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_SetCounterMode(uint32 counterMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM_4_CONTROL_REG &= (uint32)~TIM_4_UPDOWN_MASK;
    TIM_4_CONTROL_REG |= counterMode;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM_4_WritePeriod
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
void TIM_4_WritePeriod(uint32 period)
{
    TIM_4_PERIOD_REG = (period & TIM_4_16BIT_MASK);
}


/*******************************************************************************
* Function Name: TIM_4_ReadPeriod
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
uint32 TIM_4_ReadPeriod(void)
{
    return (TIM_4_PERIOD_REG & TIM_4_16BIT_MASK);
}


/*******************************************************************************
* Function Name: TIM_4_SetCompareSwap
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
void TIM_4_SetCompareSwap(uint32 swapEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM_4_CONTROL_REG &= (uint32)~TIM_4_RELOAD_CC_MASK;
    TIM_4_CONTROL_REG |= (swapEnable & TIM_4_1BIT_MASK);

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM_4_WritePeriodBuf
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
void TIM_4_WritePeriodBuf(uint32 periodBuf)
{
    TIM_4_PERIOD_BUF_REG = (periodBuf & TIM_4_16BIT_MASK);
}


/*******************************************************************************
* Function Name: TIM_4_ReadPeriodBuf
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
uint32 TIM_4_ReadPeriodBuf(void)
{
    return (TIM_4_PERIOD_BUF_REG & TIM_4_16BIT_MASK);
}


/*******************************************************************************
* Function Name: TIM_4_SetPeriodSwap
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
void TIM_4_SetPeriodSwap(uint32 swapEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM_4_CONTROL_REG &= (uint32)~TIM_4_RELOAD_PERIOD_MASK;
    TIM_4_CONTROL_REG |= ((uint32)((swapEnable & TIM_4_1BIT_MASK) <<
                                                            TIM_4_RELOAD_PERIOD_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM_4_WriteCompare
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
void TIM_4_WriteCompare(uint32 compare)
{
    #if (TIM_4_CY_TCPWM_V2)
        uint32 currentMode;
    #endif /* (TIM_4_CY_TCPWM_V2) */

    #if (TIM_4_CY_TCPWM_V2)
        currentMode = ((TIM_4_CONTROL_REG & TIM_4_UPDOWN_MASK) >> TIM_4_UPDOWN_SHIFT);

        if (TIM_4__COUNT_DOWN == currentMode)
        {
            TIM_4_COMP_CAP_REG = ((compare + 1u) & TIM_4_16BIT_MASK);
        }
        else if (TIM_4__COUNT_UP == currentMode)
        {
            TIM_4_COMP_CAP_REG = ((compare - 1u) & TIM_4_16BIT_MASK);
        }
        else
        {
            TIM_4_COMP_CAP_REG = (compare & TIM_4_16BIT_MASK);
        }
    #else
        TIM_4_COMP_CAP_REG = (compare & TIM_4_16BIT_MASK);
    #endif /* (TIM_4_CY_TCPWM_V2) */
}


/*******************************************************************************
* Function Name: TIM_4_ReadCompare
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
uint32 TIM_4_ReadCompare(void)
{
    #if (TIM_4_CY_TCPWM_V2)
        uint32 currentMode;
        uint32 regVal;
    #endif /* (TIM_4_CY_TCPWM_V2) */

    #if (TIM_4_CY_TCPWM_V2)
        currentMode = ((TIM_4_CONTROL_REG & TIM_4_UPDOWN_MASK) >> TIM_4_UPDOWN_SHIFT);

        if (TIM_4__COUNT_DOWN == currentMode)
        {
            regVal = ((TIM_4_COMP_CAP_REG - 1u) & TIM_4_16BIT_MASK);
        }
        else if (TIM_4__COUNT_UP == currentMode)
        {
            regVal = ((TIM_4_COMP_CAP_REG + 1u) & TIM_4_16BIT_MASK);
        }
        else
        {
            regVal = (TIM_4_COMP_CAP_REG & TIM_4_16BIT_MASK);
        }
        return (regVal);
    #else
        return (TIM_4_COMP_CAP_REG & TIM_4_16BIT_MASK);
    #endif /* (TIM_4_CY_TCPWM_V2) */
}


/*******************************************************************************
* Function Name: TIM_4_WriteCompareBuf
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
void TIM_4_WriteCompareBuf(uint32 compareBuf)
{
    #if (TIM_4_CY_TCPWM_V2)
        uint32 currentMode;
    #endif /* (TIM_4_CY_TCPWM_V2) */

    #if (TIM_4_CY_TCPWM_V2)
        currentMode = ((TIM_4_CONTROL_REG & TIM_4_UPDOWN_MASK) >> TIM_4_UPDOWN_SHIFT);

        if (TIM_4__COUNT_DOWN == currentMode)
        {
            TIM_4_COMP_CAP_BUF_REG = ((compareBuf + 1u) & TIM_4_16BIT_MASK);
        }
        else if (TIM_4__COUNT_UP == currentMode)
        {
            TIM_4_COMP_CAP_BUF_REG = ((compareBuf - 1u) & TIM_4_16BIT_MASK);
        }
        else
        {
            TIM_4_COMP_CAP_BUF_REG = (compareBuf & TIM_4_16BIT_MASK);
        }
    #else
        TIM_4_COMP_CAP_BUF_REG = (compareBuf & TIM_4_16BIT_MASK);
    #endif /* (TIM_4_CY_TCPWM_V2) */
}


/*******************************************************************************
* Function Name: TIM_4_ReadCompareBuf
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
uint32 TIM_4_ReadCompareBuf(void)
{
    #if (TIM_4_CY_TCPWM_V2)
        uint32 currentMode;
        uint32 regVal;
    #endif /* (TIM_4_CY_TCPWM_V2) */

    #if (TIM_4_CY_TCPWM_V2)
        currentMode = ((TIM_4_CONTROL_REG & TIM_4_UPDOWN_MASK) >> TIM_4_UPDOWN_SHIFT);

        if (TIM_4__COUNT_DOWN == currentMode)
        {
            regVal = ((TIM_4_COMP_CAP_BUF_REG - 1u) & TIM_4_16BIT_MASK);
        }
        else if (TIM_4__COUNT_UP == currentMode)
        {
            regVal = ((TIM_4_COMP_CAP_BUF_REG + 1u) & TIM_4_16BIT_MASK);
        }
        else
        {
            regVal = (TIM_4_COMP_CAP_BUF_REG & TIM_4_16BIT_MASK);
        }
        return (regVal);
    #else
        return (TIM_4_COMP_CAP_BUF_REG & TIM_4_16BIT_MASK);
    #endif /* (TIM_4_CY_TCPWM_V2) */
}


/*******************************************************************************
* Function Name: TIM_4_ReadCapture
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
uint32 TIM_4_ReadCapture(void)
{
    return (TIM_4_COMP_CAP_REG & TIM_4_16BIT_MASK);
}


/*******************************************************************************
* Function Name: TIM_4_ReadCaptureBuf
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
uint32 TIM_4_ReadCaptureBuf(void)
{
    return (TIM_4_COMP_CAP_BUF_REG & TIM_4_16BIT_MASK);
}


/*******************************************************************************
* Function Name: TIM_4_SetCaptureMode
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
*     - TIM_4_TRIG_LEVEL     - Level
*     - TIM_4_TRIG_RISING    - Rising edge
*     - TIM_4_TRIG_FALLING   - Falling edge
*     - TIM_4_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_SetCaptureMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM_4_TRIG_CONTROL1_REG &= (uint32)~TIM_4_CAPTURE_MASK;
    TIM_4_TRIG_CONTROL1_REG |= triggerMode;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM_4_SetReloadMode
********************************************************************************
*
* Summary:
*  Sets the reload trigger mode. For Quadrature Decoder mode this is the index
*  input.
*
* Parameters:
*  triggerMode: Enumerated trigger mode value
*   Values:
*     - TIM_4_TRIG_LEVEL     - Level
*     - TIM_4_TRIG_RISING    - Rising edge
*     - TIM_4_TRIG_FALLING   - Falling edge
*     - TIM_4_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_SetReloadMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM_4_TRIG_CONTROL1_REG &= (uint32)~TIM_4_RELOAD_MASK;
    TIM_4_TRIG_CONTROL1_REG |= ((uint32)(triggerMode << TIM_4_RELOAD_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM_4_SetStartMode
********************************************************************************
*
* Summary:
*  Sets the start trigger mode. For Quadrature Decoder mode this is the
*  phiB input.
*
* Parameters:
*  triggerMode: Enumerated trigger mode value
*   Values:
*     - TIM_4_TRIG_LEVEL     - Level
*     - TIM_4_TRIG_RISING    - Rising edge
*     - TIM_4_TRIG_FALLING   - Falling edge
*     - TIM_4_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_SetStartMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM_4_TRIG_CONTROL1_REG &= (uint32)~TIM_4_START_MASK;
    TIM_4_TRIG_CONTROL1_REG |= ((uint32)(triggerMode << TIM_4_START_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM_4_SetStopMode
********************************************************************************
*
* Summary:
*  Sets the stop trigger mode. For PWM mode this is the kill input.
*
* Parameters:
*  triggerMode: Enumerated trigger mode value
*   Values:
*     - TIM_4_TRIG_LEVEL     - Level
*     - TIM_4_TRIG_RISING    - Rising edge
*     - TIM_4_TRIG_FALLING   - Falling edge
*     - TIM_4_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_SetStopMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM_4_TRIG_CONTROL1_REG &= (uint32)~TIM_4_STOP_MASK;
    TIM_4_TRIG_CONTROL1_REG |= ((uint32)(triggerMode << TIM_4_STOP_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM_4_SetCountMode
********************************************************************************
*
* Summary:
*  Sets the count trigger mode. For Quadrature Decoder mode this is the phiA
*  input.
*
* Parameters:
*  triggerMode: Enumerated trigger mode value
*   Values:
*     - TIM_4_TRIG_LEVEL     - Level
*     - TIM_4_TRIG_RISING    - Rising edge
*     - TIM_4_TRIG_FALLING   - Falling edge
*     - TIM_4_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_SetCountMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM_4_TRIG_CONTROL1_REG &= (uint32)~TIM_4_COUNT_MASK;
    TIM_4_TRIG_CONTROL1_REG |= ((uint32)(triggerMode << TIM_4_COUNT_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM_4_TriggerCommand
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
*     - TIM_4_CMD_CAPTURE    - Trigger Capture command
*     - TIM_4_CMD_RELOAD     - Trigger Reload command
*     - TIM_4_CMD_STOP       - Trigger Stop command
*     - TIM_4_CMD_START      - Trigger Start command
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_TriggerCommand(uint32 mask, uint32 command)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    TIM_4_COMMAND_REG = ((uint32)(mask << command));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: TIM_4_ReadStatus
********************************************************************************
*
* Summary:
*  Reads the status of the TIM_4.
*
* Parameters:
*  None
*
* Return:
*  Status
*   Values:
*     - TIM_4_STATUS_DOWN    - Set if counting down
*     - TIM_4_STATUS_RUNNING - Set if counter is running
*
*******************************************************************************/
uint32 TIM_4_ReadStatus(void)
{
    return ((TIM_4_STATUS_REG >> TIM_4_RUNNING_STATUS_SHIFT) |
            (TIM_4_STATUS_REG & TIM_4_STATUS_DOWN));
}


/*******************************************************************************
* Function Name: TIM_4_SetInterruptMode
********************************************************************************
*
* Summary:
*  Sets the interrupt mask to control which interrupt
*  requests generate the interrupt signal.
*
* Parameters:
*   interruptMask: Mask of bits to be enabled
*   Values:
*     - TIM_4_INTR_MASK_TC       - Terminal count mask
*     - TIM_4_INTR_MASK_CC_MATCH - Compare count / capture mask
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_SetInterruptMode(uint32 interruptMask)
{
    TIM_4_INTERRUPT_MASK_REG =  interruptMask;
}


/*******************************************************************************
* Function Name: TIM_4_GetInterruptSourceMasked
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
*     - TIM_4_INTR_MASK_TC       - Terminal count mask
*     - TIM_4_INTR_MASK_CC_MATCH - Compare count / capture mask
*
*******************************************************************************/
uint32 TIM_4_GetInterruptSourceMasked(void)
{
    return (TIM_4_INTERRUPT_MASKED_REG);
}


/*******************************************************************************
* Function Name: TIM_4_GetInterruptSource
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
*     - TIM_4_INTR_MASK_TC       - Terminal count mask
*     - TIM_4_INTR_MASK_CC_MATCH - Compare count / capture mask
*
*******************************************************************************/
uint32 TIM_4_GetInterruptSource(void)
{
    return (TIM_4_INTERRUPT_REQ_REG);
}


/*******************************************************************************
* Function Name: TIM_4_ClearInterrupt
********************************************************************************
*
* Summary:
*  Clears the interrupt request.
*
* Parameters:
*   interruptMask: Mask of interrupts to clear
*   Values:
*     - TIM_4_INTR_MASK_TC       - Terminal count mask
*     - TIM_4_INTR_MASK_CC_MATCH - Compare count / capture mask
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_ClearInterrupt(uint32 interruptMask)
{
    TIM_4_INTERRUPT_REQ_REG = interruptMask;
}


/*******************************************************************************
* Function Name: TIM_4_SetInterrupt
********************************************************************************
*
* Summary:
*  Sets a software interrupt request.
*
* Parameters:
*   interruptMask: Mask of interrupts to set
*   Values:
*     - TIM_4_INTR_MASK_TC       - Terminal count mask
*     - TIM_4_INTR_MASK_CC_MATCH - Compare count / capture mask
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_SetInterrupt(uint32 interruptMask)
{
    TIM_4_INTERRUPT_SET_REG = interruptMask;
}


/* [] END OF FILE */
