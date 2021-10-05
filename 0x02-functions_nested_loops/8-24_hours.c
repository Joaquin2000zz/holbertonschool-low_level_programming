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

	for (hours = 0 ; hours < 60; hours++)
	{
		for (minutes = hours ; minutes < 24; minutes++)
		{
			if (hours < 24 && minutes < 60)
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
