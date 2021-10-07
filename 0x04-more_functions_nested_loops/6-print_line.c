#include "main.h"

/**
* print_line - print _
* @n: gives the limit of the for
* Return: Always 0.
*/
void print_line(int n)
{
int a;

if (n <= 0)
{
	_putchar('\n');
}
if (n > 0)
{
	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
}
