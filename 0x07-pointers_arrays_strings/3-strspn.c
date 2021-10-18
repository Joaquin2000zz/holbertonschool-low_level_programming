#include "main.h"

/**
* _strspn - compare 2 strings and print the size of the consecutive equal chars
* @s: main string
* @accept: the string to be compared with the main string
* Return: valor in bytes of consecutive equal chars
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int v = 0;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				v++;
				break;
			}
	}
		if (accept[j] == 0 && v != 0)
			break;
	}

	return (v);
}
