/*
 * Timer.c
 *
 * Created: 8/25/2023 9:32:20 AM
 * Author : Mohamed Abdelsamie
 */ 

#include "PWM.h"
#include "LCD.h"
extern uint8_t g_watchDogCounter;
extern uint8_t g_TimerCounter;

Timer0_ConfigType TimerConfiguration;

int main(void)
{
	//TimerConfiguration.compare_value = COMPARE_VALUE;
	//TimerConfiguration->mode = Normal;
	TimerConfiguration.prescaler = Prescalar_64;
	
	set_pwmPins();
	SetBit(SREG, 7);		/* Enable global interrupts	*/
	
	//LCD_init();
	//LCD_Clear();
   
	Timer_init(&TimerConfiguration);
    while (1)
    {
		PWM_altering();
    }
}

