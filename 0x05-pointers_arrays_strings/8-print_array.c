#include "main.h"
#include <stdio.h>
/**
* print_array - Write a function that prints n elements of an array of integers
* @a: the name of the array.
* @n: the n elements of the array.
* Return:the name and the n elements of the array.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] != 0 && i <= (n - 1); i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
