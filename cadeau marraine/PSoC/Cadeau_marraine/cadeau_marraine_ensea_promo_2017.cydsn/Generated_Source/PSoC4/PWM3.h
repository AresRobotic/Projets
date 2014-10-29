/*******************************************************************************
* File Name: PWM3.h  
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

#if !defined(CY_PINS_PWM3_H) /* Pins PWM3_H */
#define CY_PINS_PWM3_H

#include "cytypes.h"
#include "cyfitter.h"
#include "PWM3_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    PWM3_Write(uint8 value) ;
void    PWM3_SetDriveMode(uint8 mode) ;
uint8   PWM3_ReadDataReg(void) ;
uint8   PWM3_Read(void) ;
uint8   PWM3_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define PWM3_DRIVE_MODE_BITS        (3)
#define PWM3_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - PWM3_DRIVE_MODE_BITS))
#define PWM3_DRIVE_MODE_SHIFT       (0x00u)
#define PWM3_DRIVE_MODE_MASK        (0x07u << PWM3_DRIVE_MODE_SHIFT)

#define PWM3_DM_ALG_HIZ         (0x00u << PWM3_DRIVE_MODE_SHIFT)
#define PWM3_DM_DIG_HIZ         (0x01u << PWM3_DRIVE_MODE_SHIFT)
#define PWM3_DM_RES_UP          (0x02u << PWM3_DRIVE_MODE_SHIFT)
#define PWM3_DM_RES_DWN         (0x03u << PWM3_DRIVE_MODE_SHIFT)
#define PWM3_DM_OD_LO           (0x04u << PWM3_DRIVE_MODE_SHIFT)
#define PWM3_DM_OD_HI           (0x05u << PWM3_DRIVE_MODE_SHIFT)
#define PWM3_DM_STRONG          (0x06u << PWM3_DRIVE_MODE_SHIFT)
#define PWM3_DM_RES_UPDWN       (0x07u << PWM3_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define PWM3_MASK               PWM3__MASK
#define PWM3_SHIFT              PWM3__SHIFT
#define PWM3_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define PWM3_PS                     (* (reg32 *) PWM3__PS)
/* Port Configuration */
#define PWM3_PC                     (* (reg32 *) PWM3__PC)
/* Data Register */
#define PWM3_DR                     (* (reg32 *) PWM3__DR)
/* Input Buffer Disable Override */
#define PWM3_INP_DIS                (* (reg32 *) PWM3__PC2)


#if defined(PWM3__INTSTAT)  /* Interrupt Registers */

    #define PWM3_INTSTAT                (* (reg32 *) PWM3__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins PWM3_H */


/* [] END OF FILE */
