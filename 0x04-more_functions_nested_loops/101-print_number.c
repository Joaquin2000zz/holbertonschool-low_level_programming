#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: the integer to print
 * Return: nothing because is a void function
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + 48);
}
