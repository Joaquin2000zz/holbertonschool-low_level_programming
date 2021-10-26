#include <string.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0;
	char *ar;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	ar = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (ar == 0)
		return (0);

	while (i < (strlen(s1) + strlen(s2) + 1))
	{
		if (i < strlen(s1))
			ar[i] = s1[i];
		else if (j < strlen(s2))
		{
			ar[i] = s2[j];
			j++;
		}
		i++;
	}
	return (ar);
}
