#include "main.h"
#include <stdio.h>

/**
 * flip_bits - gives the number of bits to change a number to another
 * @n: thei first number
 * @m: the second number
 * Return: the number of bits to change a number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int o = (n ^ m);
	unsigned int i = 0;

	while (o)
	{
		i += (o & 1);

		o >>= 1;
	}


	return (i);
}
