#include "main.h"

/**
* more_numbers - prints numbers from 0 to 9 but exlude the 2 and the 4
*
* Return: Always 0.
*/
void more_numbers(void)
{
	char y;
	char x;
	
	for (y = 0 ; y <= 9 ; y++)
	{
	for (x = 0 ; x <= 14 ; x++)
	{
	if (x >= 10)
	{
		_putchar(((x / 10) % 10) + 48);
	}
		_putchar((x % 10) + 48);

	}
	_putchar('\n');
	}
}
