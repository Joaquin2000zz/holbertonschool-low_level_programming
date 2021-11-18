#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number to use
 * @index: the index that you gonna take
 * Return: the value of a bit at a given index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j = 0;

	if (index > 63)
		return (-1);

	while (j <= 63)
	{
		if (j == index)
		{
			if (n & 1)
				return (1);
			else
				return (0);
		}
		n >>= 1;
		++j;
	}

	return (-1);
}
