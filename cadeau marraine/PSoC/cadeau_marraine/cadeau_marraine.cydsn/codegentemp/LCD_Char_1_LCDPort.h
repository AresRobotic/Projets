/*******************************************************************************
* File Name: LCD_Char_1_LCDPort.h  
* Version 2.0
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

#if !defined(CY_PINS_LCD_Char_1_LCDPort_H) /* Pins LCD_Char_1_LCDPort_H */
#define CY_PINS_LCD_Char_1_LCDPort_H

#include "cytypes.h"
#include "cyfitter.h"
#include "LCD_Char_1_LCDPort_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    LCD_Char_1_LCDPort_Write(uint8 value) ;
void    LCD_Char_1_LCDPort_SetDriveMode(uint8 mode) ;
uint8   LCD_Char_1_LCDPort_ReadDataReg(void) ;
uint8   LCD_Char_1_LCDPort_Read(void) ;
uint8   LCD_Char_1_LCDPort_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define LCD_Char_1_LCDPort_DRIVE_MODE_BITS        (3)
#define LCD_Char_1_LCDPort_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - LCD_Char_1_LCDPort_DRIVE_MODE_BITS))
#define LCD_Char_1_LCDPort_DRIVE_MODE_SHIFT       (0x00u)
#define LCD_Char_1_LCDPort_DRIVE_MODE_MASK        (0x07u << LCD_Char_1_LCDPort_DRIVE_MODE_SHIFT)

#define LCD_Char_1_LCDPort_DM_ALG_HIZ         (0x00u << LCD_Char_1_LCDPort_DRIVE_MODE_SHIFT)
#define LCD_Char_1_LCDPort_DM_DIG_HIZ         (0x01u << LCD_Char_1_LCDPort_DRIVE_MODE_SHIFT)
#define LCD_Char_1_LCDPort_DM_RES_UP          (0x02u << LCD_Char_1_LCDPort_DRIVE_MODE_SHIFT)
#define LCD_Char_1_LCDPort_DM_RES_DWN         (0x03u << LCD_Char_1_LCDPort_DRIVE_MODE_SHIFT)
#define LCD_Char_1_LCDPort_DM_OD_LO           (0x04u << LCD_Char_1_LCDPort_DRIVE_MODE_SHIFT)
#define LCD_Char_1_LCDPort_DM_OD_HI           (0x05u << LCD_Char_1_LCDPort_DRIVE_MODE_SHIFT)
#define LCD_Char_1_LCDPort_DM_STRONG          (0x06u << LCD_Char_1_LCDPort_DRIVE_MODE_SHIFT)
#define LCD_Char_1_LCDPort_DM_RES_UPDWN       (0x07u << LCD_Char_1_LCDPort_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define LCD_Char_1_LCDPort_MASK               LCD_Char_1_LCDPort__MASK
#define LCD_Char_1_LCDPort_SHIFT              LCD_Char_1_LCDPort__SHIFT
#define LCD_Char_1_LCDPort_WIDTH              7u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define LCD_Char_1_LCDPort_PS                     (* (reg32 *) LCD_Char_1_LCDPort__PS)
/* Port Configuration */
#define LCD_Char_1_LCDPort_PC                     (* (reg32 *) LCD_Char_1_LCDPort__PC)
/* Data Register */
#define LCD_Char_1_LCDPort_DR                     (* (reg32 *) LCD_Char_1_LCDPort__DR)
/* Input Buffer Disable Override */
#define LCD_Char_1_LCDPort_INP_DIS                (* (reg32 *) LCD_Char_1_LCDPort__PC2)


#if defined(LCD_Char_1_LCDPort__INTSTAT)  /* Interrupt Registers */

    #define LCD_Char_1_LCDPort_INTSTAT                (* (reg32 *) LCD_Char_1_LCDPort__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins LCD_Char_1_LCDPort_H */


/* [] END OF FILE */
