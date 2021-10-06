#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
void jack_bauer(void)
{

	int minutes;
	int hours;

	for (hours = 0 ; hours < 24; hours++)
	{
		for (minutes = 0 ; minutes < 60; minutes++)
		{
			if (minutes < 60)
			{
				_putchar(((minutes / 10) % 10) + 48);
				_putchar((minutes % 10) + 48);
				_putchar(':');
				_putchar(((hours / 10) % 10)+ 48);
				_putchar((hours % 10) + 48);
	
			}
		}	
	}
}
