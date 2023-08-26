/*
 * PWM.h
 *
 * Created: 8/26/2023 10:47:52 AM
 *  Author: Mohamed Abdelsamie
 */ 

#include "Timer.h"

#ifndef PWM_H_
#define PWM_H_

#define RED_PORT_ID		DIO_PORTB
#define RED_PIN_ID		DIO_PIN7

void PWM_altering();
void set_pwmPins();

#endif /* PWM_H_ */