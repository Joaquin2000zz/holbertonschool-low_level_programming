#include "main.h"

/**
* print_diagonal - check the code
* @n: gives the user given for the user
* Return: Always 0.
*/
void print_diagonal(int n)
{
int a, b;

if (n <= 0)
{
	_putchar('\n');
}
if (n > 0)
{
	for (b = 0; b < n; b++)
	{
	for (a = 0; a < b; a++)
	{
		_putchar(' ');
		
	}
	_putchar(92);
	_putchar('\n');

	}
}
}
