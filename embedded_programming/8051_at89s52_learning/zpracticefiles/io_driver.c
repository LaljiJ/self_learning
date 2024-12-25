
#include<reg51.h>
#include "header.h"

/********** port data write *************/
 void io_write(u8 port,u8 pin,u8 val)
 {
 	switch(port)
 	{
 		#ifdef PORT0
 		case PORT0:	if(val==1)
 					P0|=(1<<pin);
 					else
 					P0&=~(1<<pin);
 					break;
 		#endif

 		#ifdef PORT1
 		case PORT1:	if(val==1)
 					P1|=(1<<pin);
 					else
 					P1&=~(1<<pin);
 					break;
 		#endif


 		#ifdef PORT2
 		case PORT2:	if(val==1)
 					P2|=(1<<pin);
 					else
 					P2&=~(1<<pin);
 					break;
 		#endif

 		#ifdef PORT3
 		case PORT3:	if(val==1)
 					P3|=(1<<pin);
 					else
 					P3&=~(1<<pin);
 					break;
 		#endif
 	}

 }

 /********** port data read *************/
  u8 io_read(u8 port,u8 pin)
  {
  	u8 status;

  	 switch(port)
 	 {
 	 	case 0:status=(P0&(1<<pin))?1:0;
 				break;

 		case 1:status=(P1&(1<<pin))?1:0;
 				break;

 	 
 	  	case 2:status=(P2&(1<<pin))?1:0;
 				break;

 		case 3:status=(P3&(1<<pin))?1:0;
 				break;
 	 }
  
   return status;
  }
