#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
void jack_bauer(void);
{
	int hours;
	int minutes;

	for (hours = 0 ; hours < 24; hours++)
	{
		for (minutes = hours ; minutes < 60; minutes++)
		{
			if (hours <= 23 && minutes <= 59)
			{
				_putchar(minutes);
			}
		}	
	}
}
