#include "main.h"

/**
* jack_bauer - a nested for that counts to works like a watch
*
* Return: 2 incremental interger
*/
void jack_bauer(void)
{
	int minutes;
	int hours;

	for (hours = 0 ; hours <= 23 ; hours++)
	{
		for (minutes = 0 ; minutes <= 59 ; minutes++)
		{
			_putchar(((hours / 10) % 10) + 48);
			_putchar(((hours) % 10) + 48);
			_putchar(':');
			_putchar(((minutes / 10) % 10) + 48);
			_putchar(((minutes) % 10) + 48);
			if (hours < 24)
			{
				_putchar('\n');
			}
		}
	}
}
