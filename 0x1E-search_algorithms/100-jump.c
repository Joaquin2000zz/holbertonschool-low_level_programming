#include "search_algos.h"
#include <math.h>
/**
 * heron- method which calculeates the srqt of a number
 * @p: number to find their square root
 * Return: the square root of p
 */
double heron(double p)
{
	double x = p, xn = 0.5 * p;
	int i = 0;

	while (1)
	{
		xn = 0.5 * (xn + (p / xn));
		if (x == xn)
			break;
		x = xn;
		i++;
	}
	return (xn);
}

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

	if (!array)
		return (-1);
	while (1)
	{
		if (jump <= (int)size || jump == 0)
		{
			if (jump + square >= value)
			{
				printf("Value found between indexes [%d] and [%d]\n", jump, jump + square);
				for (i = jump; i < (-jump + (int)size); i++)
				{
					if (array[i] == value)
						return (i);
				}
			}
		}
		else
			break;
		printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
		jump += square;
	}
	return (-1);
}
