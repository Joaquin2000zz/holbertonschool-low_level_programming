#include "search_algos.h"

/**
 * interpolation_search - use the interpolation search algorithm
 * @array: array to traverse
 * @size: array's size
 * @value: value to find
 * Return: sought value. otherwise returns -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid, *arr;

	if (!array)
		return (-1);
	arr = array;
	while ((array[high] != array[low]) &&
	       (value >= array[low]) &&
	       (value <= array[high]))
	{
		mid = (value - arr[low]) * (high - low) / (arr[high] - arr[low]);
		mid += low;
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[low])
		return (low);
	else
		return (-1);
}
