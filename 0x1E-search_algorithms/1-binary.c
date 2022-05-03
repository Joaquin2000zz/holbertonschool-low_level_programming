#include "search_algos.h"

/**
 * binary_search - search a value using the Binary search algorithm
 * @array: array to traverse
 * @size: array's size
 * @value: value to find
 * Return: sought value. otherwise returns -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	int ret;

	if (!array)
		return (-1);

	if (sizeof(array) / sizeof(int) == size)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		if (i == size - 1)
			printf("%d", array[i]);
		else
			printf("%d, ", array[i]);
	putchar(10);
	if (size == 1 && array[0] != value)
		return (-1);
	if (size == 2)
	{
		if (array[0] == value)
			return (array[0]);
		else if (array[1] == value)
			return (array[1]);
		else
			return (ret = binary_search(array + 1, size / 2, value));
	}
	if (value >= array[size / 2])
		if (size % 2 == 0)
			ret = binary_search(array + (size / 2), size / 2, value);
		else
			ret = binary_search(array + (size / 2) + 1, size / 2, value);
	else
		ret = binary_search(array, (size / 2) - 1, value);
	return (ret);
}
