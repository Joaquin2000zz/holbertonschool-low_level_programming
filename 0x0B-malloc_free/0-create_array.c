#include <stdlib.h>
#include "main.h"

/**
 * create_array - create arrays with a specific long
 * @size: bring the long of the array
 * @c: bring wich type of character are using
 * Return: the pointer filled with .
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar;
	
	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
		while (i < size)
		{
			ar[i] = c;
			i++;
		}
	return (ar);
}
