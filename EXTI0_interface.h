
#ifndef EXTI0_INTERFACE_H_
#define EXTI0_INTERFACE_H_

#define LOW_LEVEL     	1
#define ANY_CHANGE    	2
#define FALLING_EDGE  	3
#define RISING_EDGE   	4


void EXTI0_voidInit();
void EXTI0_voidSetSenceControl(u8 Copy_u8SenseControl);
void EXTI0_voidEnable();
void EXTI0_voidDisable();
void EXTIO_voidSetCallBack(void(*Copy_pvCallBack)(void));


#endif /* EXTI0_INTERFACE_H_ */
