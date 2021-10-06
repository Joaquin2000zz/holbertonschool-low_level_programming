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

	productomatriz = fila * columna;
	
	for (fila = 0 ; fila < 10 ; fila++)
	{
		for (columna = 0 ; columna < 10 ; columna++)
		{
			_putchar(fila);
			_putchar(columna);
		}
	}
}
