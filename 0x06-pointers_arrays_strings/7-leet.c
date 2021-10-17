#include "main.h"

/**
* leet - change in specific cases lowercase letters to numb3rz.
* @string: pointer that brings the string
* Return: the string obtained but with some ch4ng3z in specific cases.
*/

char *leet(char *string)
{
	int i, j;
	char num[5] = {'4', '3', '0', '7', '1'};
	char let[5] = {'a', 'e', 'o', 't', 'l'};
	char LET[5] = {'A', 'E', 'O', 'T', 'L'};

	for (i = 0; string[i] != 0; i++)
	{
		for (j = 0; num[j] != 0; j++)
		{
			if (let[j] == string[i] || LET[j] == string[i])
			{
				string[i] = num[j];
			}
		}
}

	return (string);
}
