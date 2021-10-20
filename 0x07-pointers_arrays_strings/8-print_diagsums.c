#include "main.h"
#include <stdio.h>

/**
* print_diafsums - print the addition within the values of the diagonals of a matrix
* @a: rows of the matrix
* @size: the columns of the matrix
* Return: 0.
*/

void print_diagsums(int *a, int size)
{
	int i, n1 = 0, n2 = 0;

	for(i = 0; i < size; i++)
	{
		n1 = n1 + a[(i * (size + 1))];
		n2 = n2 + a[(size - 1) + (i * (size - 1))];
	}
	printf("%d, %d\n", n1, n2);
}
