#include "main.h"

/**
* leet - change in specific cases lowercase letters to numb3rz.
* @string: pointer that brings the string
* Return: the string obtained but with some ch4ng3z in specific cases.
*/

char *rot13(char *p)
{
	int i;
	for (i = 0; p[i] != 0; i++)
	{
		if ((p[0] >= 97 && p[0] <= 122) || (p[0] >= 65 && p[0] <= 90))
			p[i] = p[i] + 13;
	}

	return (p);
}
