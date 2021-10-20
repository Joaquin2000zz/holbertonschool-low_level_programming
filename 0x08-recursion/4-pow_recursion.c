#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - make the power of x y times
 * @x: value to do to do the power
 * @y: y times that you do the power
 * Return: the calculation
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y--));
	else if (y == 0)
		return (1);
	else
		return (-1);
}
