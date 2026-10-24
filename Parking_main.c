
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"

#include "Parking_private.h"

#include "Stepper_interface.h"
#include "Stepper_config.h"


#include "EXTI0_interface.h"
#include "GIE_interface.h"

#include <util/delay.h>



u8 x=0;
u8	PB1=0;
u8	PB2=0;
u8	PB3=0;
u8	PB4=0;

void back (void);




int main(void)
{
	DIO_voidSetPinDirection(SM_Port,0,DIO_u8OUTPUT);
	DIO_voidSetPinDirection(SM_Port,1,DIO_u8OUTPUT);
	DIO_voidSetPinDirection(SM_Port,2,DIO_u8OUTPUT);
	DIO_voidSetPinDirection(SM_Port,3,DIO_u8OUTPUT);


	DIO_voidSetPinDirection(DIO_u8PORTD,7,DIO_u8INPUT);
	DIO_voidSetPinDirection(DIO_u8PORTD,6,DIO_u8INPUT);
	DIO_voidSetPinDirection(DIO_u8PORTD,5,DIO_u8INPUT);
	DIO_voidSetPinDirection(DIO_u8PORTD,4,DIO_u8INPUT);

	DIO_voidSetPinValue(DIO_u8PORTD,7,DIO_u8HIGH);
	DIO_voidSetPinValue(DIO_u8PORTD,6,DIO_u8HIGH);
	DIO_voidSetPinValue(DIO_u8PORTD,5,DIO_u8HIGH);
	DIO_voidSetPinValue(DIO_u8PORTD,4,DIO_u8HIGH);


	DIO_voidSetPinDirection(DIO_u8PORTD,2,DIO_u8INPUT);
	DIO_voidSetPinValue(DIO_u8PORTD,2,DIO_u8HIGH);

	EXTI0_voidInit();
	EXTI0_voidSetCallBack(back);
	GIE_voidEnable();




	while(1)
	{

		PB1=DIO_u8GetPinValue(DIO_u8PORTD,7);
		PB2=DIO_u8GetPinValue(DIO_u8PORTD,6);
		PB3=DIO_u8GetPinValue(DIO_u8PORTD,5);
		PB4=DIO_u8GetPinValue(DIO_u8PORTD,4);

		x=0;
		if(PB1 == 0)
			{
				SM_VoidRotate_CW(p1);
				SM_Void_Stop();
				while (x==0)
				{
					asm("NOP");
				}

			}
		      if(PB2 == 0)
			{
				SM_VoidRotate_CW(p2);
				SM_Void_Stop();
				while (x==0)
				{
					asm("NOP");
				}

			}

		 if(PB3 == 0)
			{
				SM_VoidRotate_CW(p3);
				SM_Void_Stop();
				while (x==0)
				{
					asm("NOP");
				}

			}
		 if(PB4 == 0)
			{
				SM_VoidRotate_CW(p4);
				SM_Void_Stop();
				while (x==0)
					{
						asm("NOP");
					}

			}

	}
}

void back (void)
{
			if(PB1 == 0)
				{
					SM_VoidRotate_CCW(p1);
					SM_Void_Stop();
					x=1;
				}

			 if(PB2 == 0)
				{
					SM_VoidRotate_CCW(p2);
					SM_Void_Stop();
					x=1;
				}

			 if(PB3 == 0)
				{
					SM_VoidRotate_CCW(p3);
					SM_Void_Stop();
					x=1;
				}

			 if(PB4 == 0)
				{
					SM_VoidRotate_CCW(p4);
					SM_Void_Stop();
					x=1;
				}

}


