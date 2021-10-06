#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0 ; a <= 10 ; a++)
	_putchar('0');
	for (b = 0 ; b <= 10 ; b++)
	_putchar(b);
	for (c = 0 ; c <= 20 ; c = c + 2)
	_putchar(c);
	for (d = 0 ; d <= 10 ; d = d + 3)
	_putchar(d);
}
