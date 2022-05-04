#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search a number in sub vectors. O(sqrt(n))
 * @array: array to traverse
 * @size: arrray size
 * @value: value to find
 * Return: sought value. otherwise, returns -1
 */

int jump_search(int *array, size_t size, int value)
{
	int square = (int)sqrt((float)size), jump = 0, i;

	if (!array || size < 1)
		return (-1);
	while (1)
	{
		if ((int)size >= jump)
			printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
		else
		{
			printf("Value found between indexes [%d] and [%d]\n", jump - square, jump);
			printf("Value checked array[%d] = [%d]\n",
			       jump - square, array[jump - square]);
			break;
		}

		if (jump <= (int)size || jump == 0)
		{
			if (jump + square >= value)
			{
				printf("Value found between indexes [%d] and [%d]\n", jump, jump + square);
				for (i = jump; i < (int)size; i++)
				{
					printf("Value checked array[%d] = [%d]\n", i, array[i]);
					if (array[i] == value)
						return ((size_t)i);
				}
			}
		}
		else
			break;
		jump += square;
	}
	return (-1);
}
