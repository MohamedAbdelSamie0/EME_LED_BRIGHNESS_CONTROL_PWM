/*
 * PWM.c
 *
 * Created: 8/26/2023 10:48:27 AM
 *  Author: Mohamed Abdelsamie
 */ 

#include "PWM.h"
#ifndef F_CPU
#define F_CPU	16000000UL
#endif
#include <util/delay.h>

/*
 * function name: PWM_altering
 *
 * input params: NONE
 * output params: NONE
 */ 
void PWM_altering()
{
	uint16_t duty;
	
	for(duty = 3; duty <= 253; duty++)
	{
		PWM(duty);
		_delay_ms(10);
	}
	_delay_ms(10);
	for(duty = 253; duty >= 3; duty--)
	{
		PWM(duty);
		_delay_ms(10);
	}
}

/*
 * function name: set_pwmPins
 *
 * input params: NONE
 * output params: NONE
 */ 
void set_pwmPins()
{
	DIO_setPinDirection(DIO_PORTB, DIO_PIN3, PIN_OUTPUT);	/*	set OC0 pin as output	*/
	DIO_setPinDirection(RED_PORT_ID, DIO_PIN7, PIN_INPUT);	/*	set RED pin as input	*/
}