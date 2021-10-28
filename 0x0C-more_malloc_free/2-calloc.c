#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - Write a function that allocates memory for an array, using malloc
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return ((void *) p);
}
