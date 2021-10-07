#include "main.h"

/**
* print_most_numbers - prints numbers from 0 to 9 but exlude the 2 and the 4
*
* Return: Always 0.
*/
void print_most_numbers(void)
{
	char x;

	for (x = '0' ; x <= '9' ; x++)
	{
	if (x != '2' && x != '4')
	{
		_putchar(x);
	}
	}
	_putchar('\n');
}
