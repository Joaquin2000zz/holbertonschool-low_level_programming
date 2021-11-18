#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: the number to represent
 * Return: the number binary representation
 */

void print_binary(unsigned long int n)
{
	long int i = 63, flag = 0;

	if (n == 0)
		_putchar('0');
	else
	{
		while (i >= 0)
		{

			if ((n >> i) & 1)
			{
				_putchar(1 + 48);
				flag++;
			}
			else if (flag > 0)
				_putchar(48);
			i--;
		}
	}
}
