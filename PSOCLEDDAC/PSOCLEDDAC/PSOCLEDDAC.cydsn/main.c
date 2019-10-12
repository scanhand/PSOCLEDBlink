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

    int start = 0x80;
    int end = 0xff;
    for(;;)
    {
        
        for(int i=start; i<end; i++)
        {
            VDAC8_CTL_SetValue(i);
            CyDelay(2);
        }
        
        for(int i=end; i>=start; i--)
        {
            VDAC8_CTL_SetValue(i);
            CyDelay(2);
        }
    }
}



/* [] END OF FILE */
