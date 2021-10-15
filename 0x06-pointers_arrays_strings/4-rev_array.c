#include "main.h"

/**
* reverse_array - funtion that reverse the content of *a pointer
* @a: interger's pointer
* @n: pointer large
* Return: the pointer but inverted
*/

void reverse_array(int *a, int n)
{
	int i, aux;

	i = 0;

	while (i < (n / 2))
	{
		n--;
		aux = a[i];
		a[i] = a[n];
		a[n] = aux;
		i++;
	}
	
}
