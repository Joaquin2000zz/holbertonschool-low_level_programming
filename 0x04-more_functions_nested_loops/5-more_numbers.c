#include "main.h"

/**
* print_most_numbers - prints numbers from 0 to 9 but exlude the 2 and the 4
*
* Return: Always 0.
*/
void print_most_numbers(void)
{
	char y;
	char x;
	
	for (y = 0 ; x <= 10 ; y++)
	{
	for (x = 0 ; x <= 14 ; x++)
	{
	if (x > 10)
	{
		_putchar(((x / 10) % 10) + 48);
	}
	else
	{
		_putchar((x % 10) + 48);
	}
	}
	_putchar('\n')
	}
}
