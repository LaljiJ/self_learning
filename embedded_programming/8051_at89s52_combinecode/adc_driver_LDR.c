/* adc_driver_POTE.c */

#include <reg51.h>
#include "header.h"

sbit clk=P1^0;
sbit dout=P1^1; 
sbit din=P1^2; 
sbit cs=P1^3;


u16 adc_read_LDR()
{
s16 TEMP3=0x0;
s8 i;

	cs=0;
	clk=0; 	din=1;		clk=1;
	clk=0; 	din=1;		clk=1;
	clk=0; 	din=1;		clk=1;
	clk=0; 	din=1;		clk=1; // channel 2
	clk=0; 	din=0;		clk=1; // channel 2
	clk=0; 	din=1;		clk=1;
	clk=0; 	din=1;		clk=1;
	
	for(i=11;i>=0;i--)
	{
		clk=0;
		
				if(dout==1)
				TEMP3|=(1<<i);
		
		clk=1;
	}
	
cs=1;	


return TEMP3;

}
