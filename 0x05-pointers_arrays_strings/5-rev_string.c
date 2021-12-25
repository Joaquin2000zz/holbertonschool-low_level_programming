#include "main.h"

/**
* rev_string - Write a function that reverses a string.
* @s: the pointer with the string
* Return: the string.
*/

void rev_string(char *s)
{
	int len = 0, i = 0, j = 0;
	char *rev;

	if (!s)
		exit(1);
	while (s[len])
		len++;
	rev = malloc(len);
		if (!rev)
			exit(1);
	j = len;
	i = 0;
	while (i < len)
		rev[i] = s[j - 1], i++, j--;
	rev[len] = 0, i = 0;
	while (i <= len)
		s[i] = rev[i], i++;
	free(rev);
}
