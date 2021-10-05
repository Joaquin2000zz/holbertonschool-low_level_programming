#include "main.h"
/**
* main - check the code
*
* Return: Always 0.
*/
int print_last_digit(int x)
{
	if (x < 0)
	_putchar((x/10) % 10);
	return((x/10) % 10);
	else
	{
	_putchar(x % 10);
	return(x % 10);
	}
}
