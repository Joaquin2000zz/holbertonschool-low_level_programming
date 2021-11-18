#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: the number to represent
 * Return: the number binary representation
 */

void print_binary(unsigned long int n)
{
	long int i = 0;

	if (n == 0)
		_putchar('0');
	else
	{
		while ((n >> i) != 0)
		{
			i++;
		}
		i--;
		while (i >= 0)
		{
			if ((n >> i) & 1)
				_putchar(1 + 48);
			else
				_putchar(48);
			i--;
		}
	}
}
