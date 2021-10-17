#include "main.h"

/**
* cap_string - change in specific cases lowercase letters to uppercase.
* @p: pointer that brings the string
* Return: the string obtained but with some uppercases in specific cases.
*/

char *cap_string(char *p)
{
	int i;

	i = 0;

	while (p[i] != 0)
	{
		if (p[i] >= 97 && p[i] <= 122
			&& (p[i - 1] == ' '
			|| p[i - 1] == '	'
			|| p[i - 1] == '\n'
			|| p[i - 1] == ','
			|| p[i - 1] == ';'
			|| p[i - 1] == '.'
			|| p[i - 1] == '!'
			|| p[i - 1] == '?'
			|| p[i - 1] == '"'
			|| p[i - 1] == '"'
			|| p[i - 1] == '('
			|| p[i - 1] == ')'
			|| p[i - 1] == '{'
			|| p[i - 1] == '}'))
		{
			p[i] = p[i] - 32;
		}
		i++;
	}
	return (p);
}
