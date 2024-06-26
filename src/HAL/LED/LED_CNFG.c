#include <MCAL/GPIO/GPIO.h>
#include <HAL/LED/LED.h>

/*In this file you will configure:
    1- LED pin options:
        GPIO_PIN[0:15]
    2- LED port options:
        GPIO_PORTA
        GPIO_PORTB
        GPIO_PORTC
    3- LED connection type optins:
        LED_CONNECTION_FORWARD
        LED_CONNECTION_REVERSE
*/

const LED_CNFG_t Led[_LED_NUMBER]=
{
    /*fill it in that format 
	[Name_Of_Led]={
		.port		=			,
		.pin		=			,
		.ConnectionType	=			,
	}*/

    [RED_LED]=
    {
        .pin            = GPIO_PIN1,
        .port           = GPIO_PORTB,
        .connectionType = LED_CONNECTION_FORWARD,
    },

    [GREEN_LED]=
    {
        .pin            = GPIO_PIN0,
        .port           = GPIO_PORTB,
        .connectionType = LED_CONNECTION_FORWARD,
    }
};
