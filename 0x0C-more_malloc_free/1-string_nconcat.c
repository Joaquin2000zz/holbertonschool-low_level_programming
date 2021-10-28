#include <string.h>
#include <stdlib.h>

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
	
	if (s1 == 0)
		s1 = "";

	if (s2 == '\0')
		s2 = "";

		ar = malloc((strlen(s1) + n + 1) * sizeof(char));

	if (ar == 0)
		return (0);

	while (i < (strlen(s1) + strlen(s2) + 1))
	{
		if (i < strlen(s1))
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
