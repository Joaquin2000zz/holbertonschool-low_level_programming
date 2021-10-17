#include "main.h"

/**
* leet - change in specific cases lowercase letters to numb3rz.
* @p: pointer that brings the string
* Return: the string obtained but with some ch4ng3z in specific cases.
*/

char *leet(char *p)
{
	int i, j = 0;
	int num[5] = {4, 3, 0, 7, 1};
	char let[5] = {'a', 'e', 'o', 't', 'l'};
	char LET[5] = {'A', 'E', 'O', 'T', 'L'};

	while (p[i] != 0)
	{
		while (j <= 4)
		{
			if (p[i] == let[j] || p[i] == LET[j])
			{
				p[i] = num[j];
			}
			j++;
		}
		i++;
	}
	return (p);
}
