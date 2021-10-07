#include "main.h"

/**
* print_diagonal - check the code
* @n: gives the user given for the user
* Return: Always 0.
*/
void print_diagonal(int n)
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
		if (a != (n - 1))
		{
		_putchar(' ');
		}
		else
		{
		_putchar(92);
		}
	}
	_putchar('\n');
}
}
