/*
 * LED Session 2 Task.c
 *
 * Created: 5/12/2022 6:13:24 PM
 * Author : Hany Hamza
 */ 

#define F_CPU 1000000


#include "DIO/DIO_Interface.h"
#include "Library/STD_TYPES.h"
#include "Library/BIT_MATH.h"
#include <util/delay.h>

int main(void)
{
	DIO_void_SetPortDirection(DIO_PUINT8_PORTA, DIO_UINT8_PORT_INPUT);
	DIO_void_SetPortDirection(DIO_PUINT8_PORTC, DIO_UINT8_PORT_OUTPUT);
	DIO_void_SetPortValue(DIO_PUINT8_PORTA, STD_HIGH);
	DIO_void_SetPortValue(DIO_PUINT8_PORTC, STD_LOW);
	
	uint8_t ledPins[] = {DIO_UINT8_PIN0, DIO_UINT8_PIN1, DIO_UINT8_PIN2, DIO_UINT8_PIN3, DIO_UINT8_PIN4, DIO_UINT8_PIN5, DIO_UINT8_PIN6, DIO_UINT8_PIN7};
	sint8_t i;
	
    while (1) 
    {
		if(!DIO_uint8_t_GetPinValue(DIO_PUINT8_PORTA, DIO_UINT8_PIN0))
		{
			DIO_void_SetPortValue(DIO_PUINT8_PORTC, STD_HIGH);
			_delay_ms(500);
			DIO_void_SetPortValue(DIO_PUINT8_PORTC, STD_LOW);
			_delay_ms(500);
		}
		
		if(!DIO_uint8_t_GetPinValue(DIO_PUINT8_PORTA, DIO_UINT8_PIN1))
		{
			for(i = 0 ; i < 8 ; i++)
			{
				DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTC, ledPins[i], STD_HIGH);
				_delay_ms(300);
				DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTC, ledPins[i], STD_LOW);
			}
			
			DIO_void_SetPortValue(DIO_PUINT8_PORTC, STD_LOW);
		}
		
		if(!DIO_uint8_t_GetPinValue(DIO_PUINT8_PORTA, DIO_UINT8_PIN2))
		{
			for(i = 7 ; i >= 0 ; i--)
			{
				DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTC, ledPins[i], STD_HIGH);
				_delay_ms(300);
				DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTC, ledPins[i], STD_LOW);
			}
			
			DIO_void_SetPortValue(DIO_PUINT8_PORTC, STD_LOW);
		}
		
		if(!DIO_uint8_t_GetPinValue(DIO_PUINT8_PORTA, DIO_UINT8_PIN3))
		{
			for(i = 0 ; i < 4 ; i++)
			{
				DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTC, ledPins[i], STD_HIGH);
				DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTC, ledPins[7 - i], STD_HIGH);
				_delay_ms(300);
			}
			
			DIO_void_SetPortValue(DIO_PUINT8_PORTC, STD_LOW);
		}
		
		if(!DIO_uint8_t_GetPinValue(DIO_PUINT8_PORTA, DIO_UINT8_PIN4))
		{
			for(i = 3 ; i >= 0 ; i--)
			{
				DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTC, ledPins[i], STD_HIGH);
				DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTC, ledPins[7 - i], STD_HIGH);
				_delay_ms(300);
			}
			
			DIO_void_SetPortValue(DIO_PUINT8_PORTC, STD_LOW);
		}
		
		if(!DIO_uint8_t_GetPinValue(DIO_PUINT8_PORTA, DIO_UINT8_PIN5))
		{
			for(i = 0 ; i < 8 ; i++)
			{
				DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTC, ledPins[i], STD_HIGH);
				_delay_ms(300);
				DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTC, ledPins[i], STD_LOW);
			}
			
			for(i = 7 ; i >= 0 ; i--)
			{
				DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTC, ledPins[i], STD_HIGH);
				_delay_ms(300);
				DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTC, ledPins[i], STD_LOW);
			}
			
			DIO_void_SetPortValue(DIO_PUINT8_PORTC, STD_LOW);
		}
		
		if(!DIO_uint8_t_GetPinValue(DIO_PUINT8_PORTA, DIO_UINT8_PIN6))
		{
			for(i = 0 ; i < 8 ; i++)
			{
				DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTC, ledPins[i], STD_HIGH);
				_delay_ms(300);
			}
			
			DIO_void_SetPortValue(DIO_PUINT8_PORTC, STD_LOW);
			
			for(i = 7 ; i >= 0 ; i--)
			{
				DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTC, ledPins[i], STD_HIGH);
				_delay_ms(300);
			}
			
			DIO_void_SetPortValue(DIO_PUINT8_PORTC, STD_LOW);
		}
		
		if(!DIO_uint8_t_GetPinValue(DIO_PUINT8_PORTA, DIO_UINT8_PIN7))
		{
			for(i = 0 ; i < 4 ; i++)
			{
				DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTC, ledPins[i], STD_HIGH);
				DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTC, ledPins[7 - i], STD_HIGH);
				_delay_ms(300);
			}
			
			
			for(i = 3 ; i >= 0 ; i--)
			{
				DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTC, ledPins[i], STD_LOW);
				DIO_uint8_t_SetPinValue(DIO_PUINT8_PORTC, ledPins[7 - i], STD_LOW);
				_delay_ms(300);
			}
			
			DIO_void_SetPortValue(DIO_PUINT8_PORTC, STD_LOW);
			
		}
    }
}

