#include "main.h"

/**
* main - 
*
* Return: 
*/
void jack_bauer(void)
{	
	int minutes;
	int hours;

	for (hours = 0 ; hours <= 23 ; hours++)
	{
		for (minutes = 0 ; minutes <= 60 ; minutes++)
		{
				putchar(((ii / 10) % 10) + 48);
				putchar(((ii) % 10) + 48);
				putchar(' ');
				putchar(((i / 10) % 10) + 48);
				putchar(((i) % 10) + 48);
				if (hours < 24)
				{
					putchar('\n');
				}
			}
		}
	}
