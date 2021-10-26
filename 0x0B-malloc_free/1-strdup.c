#include <stdlib.h>

/**
 * _strdup - make a pointer to a newly allocated space in memory
 * @str: a pointer that brings the string to print
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	unsigned int i = 0, j = 0;
	char *ar = 0;

	if (str == 0)
		return (0);

	while (str[i] != 0)
		i++;
	ar = malloc(i + 1 * sizeof(char));
	if (ar == 0)
		return (0);

	while (str[j] != 0)
	{
		ar[j] = str[j];
		j++;
	}
	return (ar);
}
