#include"STD_TYPES.h"
#include"BIT_MATH.h"

#include <util/delay.h>

#include"DIO_interface.h"

#include"KPD_interface.h"
#include"KPD_config.h"

u8 KPD_u8GetPressedKey()
{
	u8 KEY=99 , FLAG = 0;
	u8 KEY_ARR[4][4]={
						{1 ,2 ,3 ,4 },
						{5 ,6 ,7 ,8 },
						{9 ,10,11,12},
						{13,14,15,16}
										};
	for(u8 col=0;col<4;col++)
	{
		DIO_voidSetPinValue(KPD_PORT,col,DIO_u8LOW);
		for(u8 row=0;row<4;row++)
		{
			if((DIO_u8GetPinValue(KPD_PORT,row+4))==0)
			{
				KEY=KEY_ARR[row][col];
				_delay_ms(2);
				while((DIO_u8GetPinValue(KPD_PORT,row+4))==0)
				{
					asm("NOP");
				}
				FLAG=1;
			}

		}
		DIO_voidSetPinValue(KPD_PORT,col,DIO_u8HIGH);
		if(FLAG==1)
		{
			return KEY;
		}
	}


	return KEY;


}

