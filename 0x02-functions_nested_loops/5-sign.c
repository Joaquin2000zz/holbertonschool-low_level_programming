#include "main.h"

/**
* _isalpha - check the code.
*@c: boolean value that define if the input is a lowercase or not
* Return: Always 0.
*/

int print_sign(int n)
{

	if (n <= 99 || n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
