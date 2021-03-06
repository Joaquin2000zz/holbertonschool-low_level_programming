#include "main.h"

/**
* _strncat - funtion that adds a specific part of a string to other
* @dest: variable to be joined with src
* @src: variable to be joined with dest
* @n: variable that determine the part used in the merge of dest and src
* Return: dest and src merged.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, l;

	i = 0;

	while (dest[i] != 0)
		i++;
	for (l = 0; l < n && src[l] != 0; l++)
	{
		dest[i] = src[l];
		i++;
	}
	dest[i] = 0;

	return (dest);
}
