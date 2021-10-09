#include "main.h"
/**
* print_triangle - for
* @size: brings the size of the triangle given for the user
* Return: drawing
*/

void print_triangle(int size)
{
int a, b, c, d;

if (size > 0)
{
	for (b = 0; b <= size; b++)
	{
	for (a = 0; a < size; a++)
	{
	}
	for (c = 0; c < (size - b); c++)
	_putchar(' ');
	
	for (d = 0; d < b; d++)
	_putchar('#');
	if (b < size)
		_putchar('\n');
	}
}	
else if (size == 0)
	_putchar('\n');

}
