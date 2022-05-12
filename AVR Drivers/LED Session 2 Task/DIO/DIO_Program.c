/*
 * DIO_Program.c
 *
 * Created: 5/7/2022 4:10:31 PM
 *  Author: Hany Hamza
 */ 

#include "../Library/STD_TYPES.h"
#include "../Library/BIT_MATH.h"

#include "DIO_Config.h"
#include "DIO_Interface.h"
#include "DIO_Private.h"
#include "DIO_Registers.h"

uint8_t DIO_uint8_t_SetPinDirection(volatile uint8_t * copy_puint8_t_port, uint8_t copy_uint8_t_pin, uint8_t copy_uint8_t_direction)
{
	if (copy_uint8_t_pin <= DIO_UINT8_PIN7)
	{
		if (copy_uint8_t_direction == DIO_UINT8_PIN_INPUT)
			CLR_BIT(*(DDR(copy_puint8_t_port)), copy_uint8_t_pin);
		
		else if (copy_uint8_t_direction == DIO_UINT8_PIN_OUTPUT)
			SET_BIT(*(DDR(copy_puint8_t_port)), copy_uint8_t_pin);
		
		return 0;
	}
	
	else
		return ERR_CODE_INVALID_INPUT;
}

uint8_t DIO_uint8_t_SetPinValue(volatile uint8_t * copy_puint8_t_port, uint8_t copy_uint8_t_pin, uint8_t copy_uint8_t_Value)
{
	if (copy_uint8_t_pin <= DIO_UINT8_PIN7)
	{
		if(copy_uint8_t_Value == STD_LOW)
			CLR_BIT(*(copy_puint8_t_port), copy_uint8_t_pin);
			
		else if(copy_uint8_t_Value == STD_HIGH)
			SET_BIT(*(copy_puint8_t_port), copy_uint8_t_pin);
		
		return 0;
	}
	
	else
		return ERR_CODE_INVALID_INPUT;
}

uint8_t DIO_uint8_t_GetPinValue(volatile uint8_t * copy_puint8_t_port, uint8_t copy_uint8_t_pin)
{
	if (copy_uint8_t_pin <= DIO_UINT8_PIN7)
	{
		uint8_t local_uint8_t_pinValue;
		
		local_uint8_t_pinValue = GET_BIT(*(PIN(copy_puint8_t_port)), copy_uint8_t_pin);
		
		return local_uint8_t_pinValue;
	}
	
	else
		return ERR_CODE_INVALID_INPUT;
}

uint8_t DIO_uint8_t_ConfigureInputPullup(volatile uint8_t * copy_puint8_t_port, uint8_t copy_uint8_t_pin, uint8_t copy_uint8_t_status)
{
	if (copy_uint8_t_pin <= DIO_UINT8_PIN7)
	{
		if (copy_uint8_t_status == DIO_UINT8_PULLUP_ENABLED)
		{
			CLR_BIT(*(DDR(copy_puint8_t_port)), copy_uint8_t_pin);
			SET_BIT(*(copy_puint8_t_port), copy_uint8_t_pin);
		}
		
		else if(copy_uint8_t_status == DIO_UINT8_PULLUP_DISABLED)
		{
			CLR_BIT(*(DDR(copy_puint8_t_port)), copy_uint8_t_pin);
			CLR_BIT(*(copy_puint8_t_port), copy_uint8_t_pin);
		}
		
		return 0;
	}
	
	else
		return ERR_CODE_INVALID_INPUT;
}

void DIO_void_SetPortDirection(volatile uint8_t * copy_puint8_t_port, uint8_t copy_uint8_t_direction)
{
	if (copy_uint8_t_direction == DIO_UINT8_PORT_INPUT)
		*(DDR(copy_puint8_t_port)) = 0x00;
		
	else if (copy_uint8_t_direction == DIO_UINT8_PORT_OUTPUT)
		*(DDR(copy_puint8_t_port)) = 0xFF;
}

void DIO_void_SetPortValue(volatile uint8_t * copy_puint8_t_port, uint8_t copy_uint8_t_Value)
{
	if (copy_uint8_t_Value == STD_LOW)
		*copy_puint8_t_port = 0x00;
	
	else if (copy_uint8_t_Value == STD_HIGH)
		*copy_puint8_t_port = 0xFF;
}