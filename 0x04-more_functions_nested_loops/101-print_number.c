#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: the integer to print
 * Return: nothing because is a void function
 */

void print_number(int n)
{
	int aux = n;
	if (aux < 0)
	{
		aux = -n;
		_putchar('-');
	}
	if (aux / 10)
		print_number(aux / 10);
	_putchar(aux % 10 + 48);
}
