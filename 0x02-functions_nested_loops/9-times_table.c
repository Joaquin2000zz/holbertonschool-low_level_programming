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
	
	for (a = 0 ; a <= 10 ; a++)
	_putchar('0');
	_putchar('\n');
	for (b = 0 ; b <= 10 ; b++)
	_putchar(b + 48);
	_putchar('\n');
	for (b = 0 ; b <= 20 ; b++)
	_putchar(b * 2 + 48);
	_putchar('\n');
	for (b = 0 ; b <= 10 ; b++)
	_putchar(b * 2 + 48);
	_putchar('\n');
}
