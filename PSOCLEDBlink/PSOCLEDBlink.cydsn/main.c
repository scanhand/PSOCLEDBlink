/*******************************************************************************
* File: main.c
*
* Description: 
*	The HelloWorld project prints the string 'Hello World' on the character LCD
*	and blinks an LED.
*
********************************************************************************
* Copyright 2012, Cypress Semiconductor Corporation. All rights reserved.
* This software is owned by Cypress Semiconductor Corporation and is protected
* by and subject to worldwide patent and copyright laws and treaties.
* Therefore, you may use this software only as provided in the license agreement
* accompanying the software package from which you obtained this software.
* CYPRESS AND ITS SUPPLIERS MAKE NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* WITH REGARD TO THIS SOFTWARE, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT,
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*******************************************************************************/

#include <project.h>

/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
*  Main function performs following functions:
*   1. Start the LCD and PWM
*   2. Print 'Hello World' on the LCD
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
int main()
{
	/* Start LCD and PWM */
	LCD_Char_Start();
	PWM_Start();
	
	/* Print Hello World on LCD */
	LCD_Char_PrintString("Hello World");

    /* Loop forever */
	for(;;)
    {
    }
}
/* End of main */


/* [] END OF FILE */
