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
	
	for (fila = 0 ; fila < 10 ; fila++)
	{
		for (columna = 0 ; columna < 10 ; columna++)
		{
			if (fila == 0)
			{
				_putchar(fila + 48);
				_putchar(columna + 48);
			}
			else if (fila != 0)
			{
				productomatriz = fila * columna;
				_putchar(fila + 48);
				_putchar(productomatriz + 48);
			}
		}
	}
}
