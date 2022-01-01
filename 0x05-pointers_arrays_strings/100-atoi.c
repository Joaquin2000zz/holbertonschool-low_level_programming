#include "main.h"
#include <stdlib.h>

/**
 * _strlen - check the length of a existing pointer
 * @s: the char pointer
 * Return: the pointer's length and 0 if dosen't exist
 */
int _strlen(char *s)
{
	int i = 0, isN = 0;

	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] <= 57 && s[i] >= 48)
			isN = 1;
		i++;
	}
	if (isN == 1)
		return (i);
	else
		return (0);
}

/**
 * _atoi - convert a string to an integer
 * @s: the string with the number to convert
 * Return: the interger converted or 0 if have no a number to convert
 */

int _atoi(char *s)
{
	unsigned int len = 0, ret = 0, sign = 1;

	if (_strlen(s) == 0)
		return (0);
	while (s)
	{
		if (s[len] == '-')
			sign = sign * -1;
		if (s[len] >= 48 && s[len] <= 57)
			ret = (ret * 10) + s[len] - 48;
		if (ret != 0)
		{
			if (s[len + 1] > 57 || s[len + 1] < 48)
				return (ret * sign);
		}
		len++;
	}
	return (ret * sign);
}
