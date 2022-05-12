/*
 * main.c
 *
 * Created: 5/7/2022 4:28:40 PM
 *  Author: Hany Hamza
 */ 

#include "Library/STD_TYPES.h"
#include "Library/BIT_MATH.h"
#include "DIO/DIO_Interface.h"
#define F_CPU 1000000
#include <util/delay.h>


void main()
{
	DIO_uint8_t_SetPinDirection(DIO_PUINT8_PORTA, DIO_UINT8_PIN1, DIO_UINT8_PIN_OUTPUT);
	
	while(1)
	{
		DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTA, DIO_UINT8_PIN1, STD_HIGH);
		_delay_ms(1000);
		DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTA, DIO_UINT8_PIN1, STD_LOW);
		_delay_ms(1000);
	}
}