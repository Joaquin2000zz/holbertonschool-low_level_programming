#include "main.h"
/**
* print_square - check the code
* @size: provide the size of the square
* Return: Always 0.
*/
void print_square(int size)
{
	char y;
	char x;

	if (size > 0)
	{
	for (y = 0 ; y < size ; y++)
	{
	for (x = 0 ; x < size ; x++)
	{
	_putchar('#');
	}
	if (y < (size - 1))
	{
	_putchar('\n');
	}
	}
	}
	else
	{
	_putchar('\n');
	}
}
