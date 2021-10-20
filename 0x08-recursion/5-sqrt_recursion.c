#include "main.h"
/**
 * auxfuntion - funtion that you need to calculate the sqrt
 * @n: the number that you need to make the sqrt
 * @i: the result
 * Return: the calculation
 */
int auxfuntion(int n, i)
{
	if (i *i == n)
		return (i);
	if (i *i > n)
		return (-1);
	else
		return (auxfuntion(n, (i + 1)));
}
/**
 * _sqrt_recursion - funtion that calculate the sqrt of a number
 * @n: the number that you need to make the sqrt
 * Return: the calculus
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
	return (auxfuntion(n, 0));
}
