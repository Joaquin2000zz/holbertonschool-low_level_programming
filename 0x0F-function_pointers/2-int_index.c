#include <stddef.h>

/**
 * int_index - check if a number is equal to 98
 * @array: array to iterate
 * @size: size of elements of the array
 * @cmp: function to compare digits
 *
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) ==  1)
			return (i);
	}
	return (-1);
}