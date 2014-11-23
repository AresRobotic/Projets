/* ========================================
 *
 * Copyright ENSEA, 2014
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 * Authors : Cédric PILLET & Antoine TAUVEL
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF ENSEA.
 *
 * ========================================
*/
#include <project.h>
#define period 9800
#define period1 4
#define period2 10
#define period3 7
#define nbmessages 10

char messagesl1[][17] = { 
  "     ENSEA      ",
  "  Cadeau  pour  ",
  "  Le numerique  ",
  "   Notre Ecole  ",
  "   Fier d'etre  ",
  "Chez nous l'elec",
  "  Trust me I'm  ",
  "  Vive l'ENSEA  ",
  "Concu et realise",
  " Toute l'ENSEA  "
};
char messagesl2[][17] = { 
  "   PROMO 2017   ",
  " Axelle Lemaire ",
  " atout et force ",
  "  Grande Ecole  ",
  "    ENSEArque   ",
  "  C une coutume ",
  "  an Engineer   ",
  "  0b0000101010  ",
  " par ARES ENSEA ",
  "  Vous remercie "
};

CY_ISR(InterruptHandler1)
{
	static int cpt1=0;
	static int cmp1=0;
    static int updown1=1;
    
    cpt1=(cpt1+1)%period1;
//    /* Clear TC Inerrupt */
   	PWM_1_ClearInterrupt(PWM_1_INTR_MASK_TC);
//    
//	/* Increment the Compare for LED brighrness decrease */ 
    if (cpt1==0){
        cmp1 = (cmp1+2) %period;
        if(cmp1 ==0){
            updown1=(updown1+1)%2;
        }
        if(updown1==1){
            PWM_1_WriteCompare(100+cmp1);
        }
        else if(updown1==0){
            PWM_1_WriteCompare(100+period-cmp1);
        }
    }

}

CY_ISR(InterruptHandler2)
{
	static int cpt2=0;
	static int cmp2=0;
    static int updown2=1;
    
    cpt2=(cpt2+1)%period2;
//    /* Clear TC Inerrupt */
   	PWM_2_ClearInterrupt(PWM_2_INTR_MASK_TC);
//    
//	/* Increment the Compare for LED brighrness decrease */ 
    if (cpt2==0){
        cmp2 = (cmp2+2) %period;
        if(cmp2 ==0){
            updown2=(updown2+1)%2;
        }
        if(updown2==1){
            PWM_2_WriteCompare(100+cmp2);
        }
        else if(updown2==0){
            PWM_2_WriteCompare(100+period-cmp2);
        }
    }

}

CY_ISR(InterruptHandler3)
{
	static int cpt3=0;
	static int cmp3=0;
    static int updown3=1;
    
    cpt3=(cpt3+1)%period3;
//    /* Clear TC Inerrupt */
   	PWM_3_ClearInterrupt(PWM_3_INTR_MASK_TC);
//    
//	/* Increment the Compare for LED brighrness decrease */ 
    if (cpt3==0){
        cmp3 = (cmp3+2) %period;
        if(cmp3==0){
            updown3=(updown3+1)%2;
        }
        if(updown3==1){
            PWM_3_WriteCompare(100+cmp3);
        }
        else if(updown3==0){
            PWM_3_WriteCompare(100+period-cmp3);
        }
    }

}

CY_ISR(InterruptHandler4)
{
    static int i=0;
    
    TIM_4_ClearInterrupt(TIM_4__INTR_MASK_TC);
    
    LCD_Char_1_ClearDisplay();

    LCD_Char_1_PrintString(messagesl1[i]);
    LCD_Char_1_Position(1u, 0u);
    LCD_Char_1_PrintString(messagesl2[i]);

    i=(i+1)%nbmessages;


}

int main()
{
    //allow global interrupt
    CyGlobalIntEnable;
 
    /* Enable the Interrupt component connected to interrupt */
    
    TC1_ISR_StartEx(InterruptHandler1);
    TC2_ISR_StartEx(InterruptHandler2);
    TC3_ISR_StartEx(InterruptHandler3);
    TC4_ISR_StartEx(InterruptHandler4);
    
    //initialisation LCD
    LCD_Char_1_Start();

    
    /* Initialisation affichage */
    LCD_Char_1_Position(0u, 0u);
    LCD_Char_1_PrintString(" Projet SPECIAL ");
    LCD_Char_1_Position(1u, 0u);
    LCD_Char_1_PrintString("  Bapteme promo ");
    //CyDelay(2000);
    //LCD_Char_1_ClearDisplay();
    //CyDelay(2000);

 

    //initialisation des PWMs 
    PWM_1_Start();
    PWM_3_Start();
    PWM_2_Start();
    TIM_4_Start();

    


    for(;;)
    {   
    }
}

/* [] END OF FILE */
