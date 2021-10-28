#include <stdlib.h>

/**
 * _strlen - count the large of a string
 * @c: the string
 * Return: Always 0.
 */

unsigned int _strlen(char *c)
{
	unsigned int i;

	for (i = 0; c[i] != 0; i++)
		;

	return (i);
}

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: the first n characters of the second string that you gonna concatenate
 * Return: the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *ar;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (_strlen(s2) > n)
	{
		ar = malloc((_strlen(s1) + n + 1) * sizeof(char));
	}
	else
	{
		ar = malloc((_strlen(s1) + _strlen(s2) + 1) * sizeof(char));
	}

	if (ar == 0)
	{
		return (0);
	}

	while (i < (_strlen(s1) + _strlen(s2) + 1))
	{
		if (i < _strlen(s1))
			ar[i] = s1[i];
		else if (j < n + 1)
		{
			ar[i] = s2[j];
			if (j == n)
				ar[i] = '\0';
			j++;
		}
		i++;
	}
	return (ar);
}
