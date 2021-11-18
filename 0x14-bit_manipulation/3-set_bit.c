#include "main.h"
#include <stdio.h>

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: the number to change
 * @index: the index of the bit that you need to change
 * Return: 1 in exit and -1 in error
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	*n = (*n | (1 << index));

	return (1);
}
