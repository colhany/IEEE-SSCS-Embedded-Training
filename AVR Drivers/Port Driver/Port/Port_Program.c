/*
 * Port_Program.c
 *
 * Created: 5/12/2022 4:57:41 PM
 *  Author: Hany Hamza
 */ 

#include "Port_Registers.h"
#include "Port_Config.h"
#include "Port_Private.h"
#include "Port_Interface.h"

void Port_void_init()
{
	//convert the string binary concatenated value to a number and write it to the registers
	DDRA = strtol(PORT_PORTA_DIR, NULL, 2);
	DDRB = strtol(PORT_PORTB_DIR, NULL, 2);
	DDRC = strtol(PORT_PORTC_DIR, NULL, 2);
	DDRD = strtol(PORT_PORTD_DIR, NULL, 2);
	
	PORTA = strtol(PORT_PORTA_INITIAL_VALUES, NULL, 2);
	PORTB = strtol(PORT_PORTB_INITIAL_VALUES, NULL, 2);
	PORTC = strtol(PORT_PORTC_INITIAL_VALUES, NULL, 2);
	PORTD = strtol(PORT_PORTD_INITIAL_VALUES, NULL, 2);
}