#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(Var , Bit_Num)          Var|=(1<<Bit_Num)
#define CLR_BIT(Var , Bit_Num)          Var&=(~(1<<Bit_Num))
#define TOGGLE_BIT(Var , Bit_Num)       Var^=(1<<Bit_Num)
#define GET_BIT(Var , Bit_Num)          (1&(Var>>Bit_Num))

#endif /* BIT_MATH_H_ */
