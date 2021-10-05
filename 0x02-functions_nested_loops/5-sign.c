#include "main.h"

/**
* _isalpha - check the code.
*@n: boolean value that define if the input is negative, zero or positive
* Return: boolean.
*/

int print_sign(int n)
{

	if (n >= 1)
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
