/*
 * DIO_Interface.h
 *
 * Created: 5/7/2022 4:23:37 PM
 *  Author: Hany Hamza
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "DIO_Registers.h"
#include "../Library/STD_TYPES.h"

#define DIO_UINT8_PIN_OUTPUT		1
#define DIO_UINT8_PIN_INPUT			0

#define DIO_UINT8_PORT_OUTPUT		1
#define DIO_UINT8_PORT_INPUT		0

#define DIO_UINT8_PULLUP_ENABLED	1
#define DIO_UINT8_PULLUP_DISABLED	0

#define DIO_UINT8_PIN0				0
#define DIO_UINT8_PIN1				1
#define DIO_UINT8_PIN2				2
#define DIO_UINT8_PIN3				3
#define DIO_UINT8_PIN4				4
#define DIO_UINT8_PIN5				5
#define DIO_UINT8_PIN6				6
#define DIO_UINT8_PIN7				7

#define DIO_PUINT8_PORTA			&PORTA
#define DIO_PUINT8_PORTB			&PORTB
#define DIO_PUINT8_PORTC			&PORTC
#define DIO_PUINT8_PORTD			&PORTD

#define ERR_CODE_INVALID_INPUT		-1

uint8_t DIO_uint8_t_SetPinDirection(volatile uint8_t * copy_puint8_t_port, uint8_t copy_uint8_t_pin, uint8_t copy_uint8_t_direction);
uint8_t DIO_uint8_t_SetPinValue(volatile uint8_t * copy_puint8_t_port, uint8_t copy_uint8_t_pin, uint8_t copy_uint8_t_Value);
uint8_t DIO_uint8_t_GetPinValue(volatile uint8_t * copy_puint8_t_port, uint8_t copy_uint8_t_pin);
uint8_t DIO_uint8_t_ConfigureInputPullup(volatile uint8_t * copy_puint8_t_port, uint8_t copy_uint8_t_pin, uint8_t copy_uint8_t_status);

void DIO_void_SetPortDirection(volatile uint8_t * copy_puint8_t_port, uint8_t copy_uint8_t_direction);
void DIO_void_SetPortValue(volatile uint8_t * copy_puint8_t_port, uint8_t copy_uint8_t_Value);

#endif /* DIO_INTERFACE_H_ */