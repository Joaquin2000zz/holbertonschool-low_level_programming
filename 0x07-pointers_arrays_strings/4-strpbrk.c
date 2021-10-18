#include "main.h"

/**
* _strpbrk - find a char equal and show the s string strarting in the match
* @s: the string to show
* @accept: the string to compare with the s one
* Return: the string s starting in the position from the matched char.
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0); 
}
