#include "main.h"

/**
* print_line - print _
*
* Return: Always 0.
*/
void print_line(int n)
{
int a;

if (n <= 0)
{
	_putchar('\n');
}
else
{
	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
}
}
