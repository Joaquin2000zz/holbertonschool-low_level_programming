#include "main.h"

/**
 * _pow_recursion - make a power of a number
 * @x: number to do the power
 * @y: times to do the power
 * Return: the calculation
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, --y));
	else if (y == 0)
		return (1);
	else
		return (-1);
}
