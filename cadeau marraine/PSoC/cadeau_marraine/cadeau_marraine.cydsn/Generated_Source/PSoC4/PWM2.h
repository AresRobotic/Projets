/*******************************************************************************
* File Name: PWM2.h  
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

#if !defined(CY_PINS_PWM2_H) /* Pins PWM2_H */
#define CY_PINS_PWM2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "PWM2_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    PWM2_Write(uint8 value) ;
void    PWM2_SetDriveMode(uint8 mode) ;
uint8   PWM2_ReadDataReg(void) ;
uint8   PWM2_Read(void) ;
uint8   PWM2_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define PWM2_DRIVE_MODE_BITS        (3)
#define PWM2_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - PWM2_DRIVE_MODE_BITS))
#define PWM2_DRIVE_MODE_SHIFT       (0x00u)
#define PWM2_DRIVE_MODE_MASK        (0x07u << PWM2_DRIVE_MODE_SHIFT)

#define PWM2_DM_ALG_HIZ         (0x00u << PWM2_DRIVE_MODE_SHIFT)
#define PWM2_DM_DIG_HIZ         (0x01u << PWM2_DRIVE_MODE_SHIFT)
#define PWM2_DM_RES_UP          (0x02u << PWM2_DRIVE_MODE_SHIFT)
#define PWM2_DM_RES_DWN         (0x03u << PWM2_DRIVE_MODE_SHIFT)
#define PWM2_DM_OD_LO           (0x04u << PWM2_DRIVE_MODE_SHIFT)
#define PWM2_DM_OD_HI           (0x05u << PWM2_DRIVE_MODE_SHIFT)
#define PWM2_DM_STRONG          (0x06u << PWM2_DRIVE_MODE_SHIFT)
#define PWM2_DM_RES_UPDWN       (0x07u << PWM2_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define PWM2_MASK               PWM2__MASK
#define PWM2_SHIFT              PWM2__SHIFT
#define PWM2_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define PWM2_PS                     (* (reg32 *) PWM2__PS)
/* Port Configuration */
#define PWM2_PC                     (* (reg32 *) PWM2__PC)
/* Data Register */
#define PWM2_DR                     (* (reg32 *) PWM2__DR)
/* Input Buffer Disable Override */
#define PWM2_INP_DIS                (* (reg32 *) PWM2__PC2)


#if defined(PWM2__INTSTAT)  /* Interrupt Registers */

    #define PWM2_INTSTAT                (* (reg32 *) PWM2__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins PWM2_H */


/* [] END OF FILE */
