/*******************************************************************************
* File Name: TIM_4_PM.c
* Version 1.10
*
* Description:
*  This file contains the setup, control, and status commands to support
*  the component operations in the low power mode.
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

static TIM_4_BACKUP_STRUCT TIM_4_backup;


/*******************************************************************************
* Function Name: TIM_4_SaveConfig
********************************************************************************
*
* Summary:
*  All configuration registers are retention. Nothing to save here.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_SaveConfig(void)
{

}


/*******************************************************************************
* Function Name: TIM_4_Sleep
********************************************************************************
*
* Summary:
*  Stops the component operation and saves the user configuration.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_Sleep(void)
{
    if(0u != (TIM_4_BLOCK_CONTROL_REG & TIM_4_MASK))
    {
        TIM_4_backup.enableState = 1u;
    }
    else
    {
        TIM_4_backup.enableState = 0u;
    }

    TIM_4_Stop();
    TIM_4_SaveConfig();
}


/*******************************************************************************
* Function Name: TIM_4_RestoreConfig
********************************************************************************
*
* Summary:
*  All configuration registers are retention. Nothing to restore here.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_RestoreConfig(void)
{

}


/*******************************************************************************
* Function Name: TIM_4_Wakeup
********************************************************************************
*
* Summary:
*  Restores the user configuration and restores the enable state.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void TIM_4_Wakeup(void)
{
    TIM_4_RestoreConfig();

    if(0u != TIM_4_backup.enableState)
    {
        TIM_4_Enable();
    }
}


/* [] END OF FILE */
