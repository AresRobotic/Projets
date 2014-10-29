/*******************************************************************************
* File Name: But.h  
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

#if !defined(CY_PINS_But_H) /* Pins But_H */
#define CY_PINS_But_H

#include "cytypes.h"
#include "cyfitter.h"
#include "But_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    But_Write(uint8 value) ;
void    But_SetDriveMode(uint8 mode) ;
uint8   But_ReadDataReg(void) ;
uint8   But_Read(void) ;
uint8   But_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define But_DRIVE_MODE_BITS        (3)
#define But_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - But_DRIVE_MODE_BITS))
#define But_DRIVE_MODE_SHIFT       (0x00u)
#define But_DRIVE_MODE_MASK        (0x07u << But_DRIVE_MODE_SHIFT)

#define But_DM_ALG_HIZ         (0x00u << But_DRIVE_MODE_SHIFT)
#define But_DM_DIG_HIZ         (0x01u << But_DRIVE_MODE_SHIFT)
#define But_DM_RES_UP          (0x02u << But_DRIVE_MODE_SHIFT)
#define But_DM_RES_DWN         (0x03u << But_DRIVE_MODE_SHIFT)
#define But_DM_OD_LO           (0x04u << But_DRIVE_MODE_SHIFT)
#define But_DM_OD_HI           (0x05u << But_DRIVE_MODE_SHIFT)
#define But_DM_STRONG          (0x06u << But_DRIVE_MODE_SHIFT)
#define But_DM_RES_UPDWN       (0x07u << But_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define But_MASK               But__MASK
#define But_SHIFT              But__SHIFT
#define But_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define But_PS                     (* (reg32 *) But__PS)
/* Port Configuration */
#define But_PC                     (* (reg32 *) But__PC)
/* Data Register */
#define But_DR                     (* (reg32 *) But__DR)
/* Input Buffer Disable Override */
#define But_INP_DIS                (* (reg32 *) But__PC2)


#if defined(But__INTSTAT)  /* Interrupt Registers */

    #define But_INTSTAT                (* (reg32 *) But__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins But_H */


/* [] END OF FILE */
