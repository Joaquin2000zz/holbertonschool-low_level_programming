#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int fila;
	int columna;
	int productomatriz;

	for (columna = 0 ; columna < 10 ; columna++)
	{
		for (fila = 0 ; fila < 10 ; fila++)
		{
			productomatriz = fila * columna;
			if (productomatriz >= 10)
			{
			_putchar((productomatriz / 10 % 10) + 48);
			}
			if (productomatriz < 10 && fila > 0)
			{
				_putchar(' ');
			}
				_putchar((productomatriz % 10) + 48);
			if (fila < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
