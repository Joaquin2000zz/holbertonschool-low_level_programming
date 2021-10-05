#include "main.h"
/**
* main - check the code
*@x: this variable catch the last number of the input as output
* Return: Always 0.
*/
int print_last_digit(int x)
{
	if (x < 0)
	{
	_putchar((x % 10) * -1 + 48);
	return ((x / 10) % 10);
	}
	else
	{
	_putchar((x % 10) + 48);
	return (x % 10);
	}
}
