#include "main.h"

/**
 * auxfuntion - funtion that you need to calculate the sqrt
 * @n: the number that you need to make the sqrt
 * @i: the result
 * Return: the calculation
 */

int auxfunction(int n, int i)
{
	if (i == n)
		return (1);
	if ((n  %  i) == 0)
		return (0);
	else
		return (auxfunction(n, (i + 1)));
}

/**
 * is_prime_number - check the code
 * @n: the number that you need to check if is prime or not
 * Return: the calculation
 */

int is_prime_number(int n)
{
	if (n > 1)
		return (auxfunction(n, 2));
	else
		return (0);
}
