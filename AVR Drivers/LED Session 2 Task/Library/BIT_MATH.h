/*
 * BIT_MATH.h
 *
 * Created: 5/7/2022 3:57:37 PM
 *  Author: Hany Hamza
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(VAR, BITNO)		(VAR) |= (1 << (BITNO))
#define CLR_BIT(VAR, BITNO)		(VAR) &= ~(1 << (BITNO))
#define TOG_BIT(VAR, BITNO)		(VAR) ^= (1 << (BITNO))
#define GET_BIT(VAR, BITNO)		(((VAR) >> (BITNO)) & 0x01)

#endif /* BIT_MATH_H_ */