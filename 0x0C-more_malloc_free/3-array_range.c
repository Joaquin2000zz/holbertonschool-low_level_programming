#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: the min value of the array
 * @max: the max value of the array
 *
 * Return: the array.
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (0);

	p = malloc((max - min + 1) * sizeof(int));
	if (p == 0)
		return (0);

	for (i = 0; i < (max - min + 1); i++)
		p[i] = min + i;

	return (p);
}
