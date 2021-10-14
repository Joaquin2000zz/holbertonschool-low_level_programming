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

	for (i = 0; a[n] != '\0'; i++)
			;		
	for (i = 0; a[i] <= n; i++)
		printf("%d, ", a[i]);
	putchar('\n');
}
