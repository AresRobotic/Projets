/*******************************************************************************
* File Name: PWM1.h  
* Version 2.5
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_PWM1_H) /* Pins PWM1_H */
#define CY_PINS_PWM1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "PWM1_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    PWM1_Write(uint8 value) ;
void    PWM1_SetDriveMode(uint8 mode) ;
uint8   PWM1_ReadDataReg(void) ;
uint8   PWM1_Read(void) ;
uint8   PWM1_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define PWM1_DRIVE_MODE_BITS        (3)
#define PWM1_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - PWM1_DRIVE_MODE_BITS))
#define PWM1_DRIVE_MODE_SHIFT       (0x00u)
#define PWM1_DRIVE_MODE_MASK        (0x07u << PWM1_DRIVE_MODE_SHIFT)

#define PWM1_DM_ALG_HIZ         (0x00u << PWM1_DRIVE_MODE_SHIFT)
#define PWM1_DM_DIG_HIZ         (0x01u << PWM1_DRIVE_MODE_SHIFT)
#define PWM1_DM_RES_UP          (0x02u << PWM1_DRIVE_MODE_SHIFT)
#define PWM1_DM_RES_DWN         (0x03u << PWM1_DRIVE_MODE_SHIFT)
#define PWM1_DM_OD_LO           (0x04u << PWM1_DRIVE_MODE_SHIFT)
#define PWM1_DM_OD_HI           (0x05u << PWM1_DRIVE_MODE_SHIFT)
#define PWM1_DM_STRONG          (0x06u << PWM1_DRIVE_MODE_SHIFT)
#define PWM1_DM_RES_UPDWN       (0x07u << PWM1_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define PWM1_MASK               PWM1__MASK
#define PWM1_SHIFT              PWM1__SHIFT
#define PWM1_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define PWM1_PS                     (* (reg32 *) PWM1__PS)
/* Port Configuration */
#define PWM1_PC                     (* (reg32 *) PWM1__PC)
/* Data Register */
#define PWM1_DR                     (* (reg32 *) PWM1__DR)
/* Input Buffer Disable Override */
#define PWM1_INP_DIS                (* (reg32 *) PWM1__PC2)


#if defined(PWM1__INTSTAT)  /* Interrupt Registers */

    #define PWM1_INTSTAT                (* (reg32 *) PWM1__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins PWM1_H */


/* [] END OF FILE */
