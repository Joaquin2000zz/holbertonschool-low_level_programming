#include "main.h"
/**
* print_triangle - for
* @size: brings the size of the triangle given for the user
* Return: drawing
*/

void print_triangle(int size)
{
	int i;
	int ii;

	for (ii = 0 ; ii <= size ; ii++)
	{
		if (ii <= (size - 1))
		{
			_putchar('\n');
		}
		for (i = ii ; i <= size ; i++)
		{
		_putchar('#');
		}
	}
	_putchar('\n');
}
