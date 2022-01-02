#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: times to print the table
 * Return: nothing. void function
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n == 0)
		_putchar(48), _putchar('\n');
	if (n < 15 && n > 0)
		for (i = 0; i <= n; i++)
		{
			j = 0;
			k = 0;
			while (j <= n)
			{
				if (k / 1000)
					_putchar(((k / 1000) % 10) + 48);
				if (k / 100)
					_putchar(((k / 100) % 10) + 48);
				if (k / 10)
					_putchar(((k / 10) % 10) + 48);
				_putchar((k % 10) + 48);
				k += i;
				if (j < n)
				{
					_putchar(',');
					if (!(k / 10))
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					if (k >= 10 && k <= 99)
						_putchar(' '), _putchar(' ');
					if (k >= 100)
						_putchar(' ');
				}
				j++;
			}
				_putchar('\n');
		}
}
