/*******************************************************************************
* File Name: TIM1_PM.c
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

#include "TIM1.h"

static TIM1_BACKUP_STRUCT TIM1_backup;


/*******************************************************************************
* Function Name: TIM1_SaveConfig
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
void TIM1_SaveConfig(void)
{

}


/*******************************************************************************
* Function Name: TIM1_Sleep
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
void TIM1_Sleep(void)
{
    if(0u != (TIM1_BLOCK_CONTROL_REG & TIM1_MASK))
    {
        TIM1_backup.enableState = 1u;
    }
    else
    {
        TIM1_backup.enableState = 0u;
    }

    TIM1_Stop();
    TIM1_SaveConfig();
}


/*******************************************************************************
* Function Name: TIM1_RestoreConfig
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
void TIM1_RestoreConfig(void)
{

}


/*******************************************************************************
* Function Name: TIM1_Wakeup
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
void TIM1_Wakeup(void)
{
    TIM1_RestoreConfig();

    if(0u != TIM1_backup.enableState)
    {
        TIM1_Enable();
    }
}


/* [] END OF FILE */
