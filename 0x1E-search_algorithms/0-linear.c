#include "search_algos.h"

/**
 * linear_search - searches for a value using the Linear search algorithm
 * @array: array to travel
 * @size: array's size
 * @value: value to find
 * Return: the sought value. otherwise, returns -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (array[i]);
	}
	return (-1);
}
