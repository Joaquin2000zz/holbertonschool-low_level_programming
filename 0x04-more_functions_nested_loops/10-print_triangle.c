#include "main.h"
/**
* print_triangle - for
* @size: brings the size of the triangle given for the user
* Return: drawing
*/

void print_triangle(int size)
{
int i, j, ispace, isnumeric = 0;

if (size >= 1)
{
	for (i = 1; i <= size; i++)
	{
		ispace = size - i, isnumeric++;
		if (ispace != 0)
			for (j = 0; j < ispace; j++)
				_putchar(' ');
		for (j = 0; j < isnumeric; j++)
			_putchar('#');
		_putchar('\n');
	}
}
else
	_putchar('\n');
}
