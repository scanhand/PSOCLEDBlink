/*******************************************************************************
* File Name: main.c
********************************************************************************/
#include "VDAC8_CTL.h"
#include <CyLib.h>

int main()
{
    //Initialize VDAC for LED
    VDAC8_CTL_Init();
    VDAC8_CTL_Enable();

    for(;;)
    {
        
        for(int i=0; i<256; i++)
        {
            VDAC8_CTL_SetValue(i);
            CyDelay(2);
        }
        
        for(int i=255; i>=0; i--)
        {
            VDAC8_CTL_SetValue(i);
            CyDelay(2);
        }
    }
}



/* [] END OF FILE */
