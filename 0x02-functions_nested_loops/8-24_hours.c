#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
void jack_bauer(void)
{
	int hours;
	int minutes;

	for (minutes = 0 ; minutes < 60; minutes++)
	{
		for (hours = minutes ; hours < 24; hours++)
		{
			if (hours != minutes && minutes < 60)
			{
				_putchar(((hours / 10) % 10) + 48);
				_putchar((hours % 10) + 48);
				_putchar(':');
				_putchar(((minutes / 10) % 10)+ 48);
				_putchar((minutes % 10) + 48);
	
			}
		}	
	}
}
