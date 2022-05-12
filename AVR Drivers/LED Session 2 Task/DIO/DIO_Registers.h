/*
 * DIO_Registers.h
 *
 * Created: 5/7/2022 4:23:19 PM
 *  Author: Hany Hamza
 */ 


#ifndef DIO_REGISTERS_H_
#define DIO_REGISTERS_H_

#define PORTA		(*(volatile uint8_t  *)(0x3B))
#define PORTB		(*(volatile uint8_t  *)(0x38))
#define PORTC		(*(volatile uint8_t  *)(0x35))
#define PORTD		(*(volatile uint8_t  *)(0x32))

//register offsets
#define DDR(PORT) PORT - 1
#define PIN(PORT) PORT - 2

#endif /* DIO_REGISTERS_H_ */