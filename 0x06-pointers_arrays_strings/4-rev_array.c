#include "main.h"

/**
* reverse_array - funtion that reverse the content of *a pointer
* @a: interger's pointer
* @n: pointer large
* Return: the pointer but inverted
*/

void reverse_array(int *a, int n)
{
	int i, auxstart, auxend;

	i = 0;
	auxend = (n - 1);
	if (n > 0)
	{
	while (i < (n / 2))
	{
		
		auxstart = a[i];
		a[i] = a[auxend];
		a[auxend] = auxstart;
		i++;
		auxend--;
	}
	}
}
