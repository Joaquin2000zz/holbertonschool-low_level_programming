#include "main.h"

/**
 * _pow - make the power of a number
 * @base: the base
 * @j: the number of times that you gonna multiplucate the base
 * Return: the conversion
 */

unsigned int _pow(unsigned int base, unsigned int j)
{
	unsigned int res = base;

	while (j > 1)
	{
		res = res * base;
		j--;
	}

	return (res);
}


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary string
 * Return: the conversion
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, base = 2, j = 0;
	int i = 0;


	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	while (i >= 0)
	{
		if (b[i] == '1')
			num += _pow(base, j);
		j++;
		i--;
	}


	return (num / 2);
}
