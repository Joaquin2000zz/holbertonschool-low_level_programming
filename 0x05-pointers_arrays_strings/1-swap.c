#include "main.h"

/**
* swap_int - a function that swaps the values of two integers.
* @a: one of the values to swap
* @b: other of the values to swap
* Return: Nothing.
*/

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
