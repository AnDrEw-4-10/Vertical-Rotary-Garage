#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"

#include <util/delay.h>

#include "Stepper_private.h"
#include "Stepper_config.h"
#include "Stepper_interface.h"


//void SM_VoidRotate_CW(u16 Copy_u16_Angle)
//{
//	DIO_voidSetPinValue(SM_Port,SM_Dir_Pin,DIO_u8HIGH);
//	u16 size ;
//	size = Copy_u16_Angle/ Full_Step ;
//	for(u16 i=0;i<=size;i++)
//	{
//			DIO_voidSetPinValue(SM_Port,SM_Pulse_Pin,DIO_u8HIGH);
//			DIO_voidSetPinValue(SM_Port,SM_Pulse_Pin,DIO_u8LOW);
//			_delay_ms(0.06);
//	}
//
//}
//
//void SM_VoidRotate_CCW(u16 Copy_u16_Angle)
//{
//	DIO_voidSetPinValue(SM_Port,SM_Dir_Pin,DIO_u8LOW);
//	u16 size ;
//	size = Copy_u16_Angle/ Full_Step ;
//	for(u16 i=0;i<=size;i++)
//	{
//		DIO_voidSetPinValue(SM_Port,SM_Pulse_Pin,DIO_u8HIGH);
//		DIO_voidSetPinValue(SM_Port,SM_Pulse_Pin,DIO_u8LOW);
//		_delay_ms(0.06);
//	}
//}
//
//void SM_Void_Stop()
//{
//	DIO_voidSetPinValue(SM_Port,SM_Pulse_Pin,DIO_u8LOW);
//}

void SM_VoidRotate_CW(u16 Copy_u16_Angle)
{
u16 size ;
size = Copy_u16_Angle/ Full_Step ;
for(u16 i=0;i<=size;i++)
{
		DIO_voidSetPinValue(SM_Port,SM_Blue_Pin,DIO_u8HIGH);
		DIO_voidSetPinValue(SM_Port,SM_Pink_Pin,DIO_u8LOW);
		DIO_voidSetPinValue(SM_Port,SM_Yellow_Pin,DIO_u8LOW);
		DIO_voidSetPinValue(SM_Port,SM_Orange_Pin,DIO_u8LOW);
		_delay_ms(2);
		DIO_voidSetPinValue(SM_Port,SM_Blue_Pin,DIO_u8LOW);
		DIO_voidSetPinValue(SM_Port,SM_Pink_Pin,DIO_u8HIGH);
		DIO_voidSetPinValue(SM_Port,SM_Yellow_Pin,DIO_u8LOW);
		DIO_voidSetPinValue(SM_Port,SM_Orange_Pin,DIO_u8LOW);
		_delay_ms(2);
		DIO_voidSetPinValue(SM_Port,SM_Blue_Pin,DIO_u8LOW);
		DIO_voidSetPinValue(SM_Port,SM_Pink_Pin,DIO_u8LOW);
		DIO_voidSetPinValue(SM_Port,SM_Yellow_Pin,DIO_u8HIGH);
		DIO_voidSetPinValue(SM_Port,SM_Orange_Pin,DIO_u8LOW);
		_delay_ms(2);
		DIO_voidSetPinValue(SM_Port,SM_Blue_Pin,DIO_u8LOW);
		DIO_voidSetPinValue(SM_Port,SM_Pink_Pin,DIO_u8LOW);
		DIO_voidSetPinValue(SM_Port,SM_Yellow_Pin,DIO_u8LOW);
		DIO_voidSetPinValue(SM_Port,SM_Orange_Pin,DIO_u8HIGH);
		_delay_ms(2);

}

}

void SM_VoidRotate_CCW(u16 Copy_u16_Angle)
{
	u16 size ;
	size = Copy_u16_Angle/ Full_Step ;
	for(u16 i=0;i<=size;i++)
	{
	DIO_voidSetPinValue(SM_Port,SM_Blue_Pin,DIO_u8LOW);
	DIO_voidSetPinValue(SM_Port,SM_Pink_Pin,DIO_u8LOW);
	DIO_voidSetPinValue(SM_Port,SM_Yellow_Pin,DIO_u8LOW);
	DIO_voidSetPinValue(SM_Port,SM_Orange_Pin,DIO_u8HIGH);
	_delay_ms(2);
	DIO_voidSetPinValue(SM_Port,SM_Blue_Pin,DIO_u8LOW);
	DIO_voidSetPinValue(SM_Port,SM_Pink_Pin,DIO_u8LOW);
	DIO_voidSetPinValue(SM_Port,SM_Yellow_Pin,DIO_u8HIGH);
	DIO_voidSetPinValue(SM_Port,SM_Orange_Pin,DIO_u8LOW);
	_delay_ms(2);
	DIO_voidSetPinValue(SM_Port,SM_Blue_Pin,DIO_u8LOW);
	DIO_voidSetPinValue(SM_Port,SM_Pink_Pin,DIO_u8HIGH);
	DIO_voidSetPinValue(SM_Port,SM_Yellow_Pin,DIO_u8LOW);
	DIO_voidSetPinValue(SM_Port,SM_Orange_Pin,DIO_u8LOW);
	_delay_ms(2);
	DIO_voidSetPinValue(SM_Port,SM_Blue_Pin,DIO_u8HIGH);
	DIO_voidSetPinValue(SM_Port,SM_Pink_Pin,DIO_u8LOW);
	DIO_voidSetPinValue(SM_Port,SM_Yellow_Pin,DIO_u8LOW);
	DIO_voidSetPinValue(SM_Port,SM_Orange_Pin,DIO_u8LOW);
	_delay_ms(2);
	}
}
void SM_Void_Stop(void)
{
	DIO_voidSetPinValue(SM_Port,SM_Blue_Pin,DIO_u8LOW);
	DIO_voidSetPinValue(SM_Port,SM_Pink_Pin,DIO_u8LOW);
	DIO_voidSetPinValue(SM_Port,SM_Yellow_Pin,DIO_u8LOW);
	DIO_voidSetPinValue(SM_Port,SM_Orange_Pin,DIO_u8LOW);
}


