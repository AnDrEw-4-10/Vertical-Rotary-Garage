#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "EXTI0_interface.h"
#include "EXTI0_config.h"
#include "EXTI0_private.h"
#include "EXTI0_register.h"

void(*EXTI0_pvCallBack)(void);


void EXTI0_voidInit()
{

	switch(SENSE)
	{
	case LOW_LEVEL:
		CLR_BIT(MCUCR,1);
		CLR_BIT(MCUCR,0);
		break;

	case ANY_CHANGE:
		CLR_BIT(MCUCR,1);
		SET_BIT(MCUCR,0);
		break;

	case FALLING_EDGE:
		SET_BIT(MCUCR,1);
		CLR_BIT(MCUCR,0);
		break;

	case RISING_EDGE:
		SET_BIT(MCUCR,1);
		SET_BIT(MCUCR,0);
		break;

	}

	SET_BIT(GICR,6);

}

void EXTI0_voidSetSenceControl(u8 Copy_u8SenseControl)
{

	switch(Copy_u8SenseControl)
	{
	case LOW_LEVEL:
		CLR_BIT(MCUCR,1);
		CLR_BIT(MCUCR,0);
		break;

	case ANY_CHANGE:
		CLR_BIT(MCUCR,1);
		SET_BIT(MCUCR,0);
		break;

	case FALLING_EDGE:
		SET_BIT(MCUCR,1);
		CLR_BIT(MCUCR,0);
		break;

	case RISING_EDGE:
		SET_BIT(MCUCR,1);
		SET_BIT(MCUCR,0);
		break;

	}
}

void EXTI0_voidEnable()
{
	SET_BIT(GICR,6);

}

void EXTI0_voidDisable()
{
	CLR_BIT(GICR,6);

}


void EXTI0_voidSetCallBack(void(*Copy_pvCallBack)(void))
{
	EXTI0_pvCallBack=Copy_pvCallBack;
}



void __vector_1(void) __attribute__((signal));
void __vector_1(void)
{
	EXTI0_pvCallBack();
}



