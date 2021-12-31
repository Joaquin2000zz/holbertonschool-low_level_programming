#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: the string with the number to convert
 * Return: the interger converted or 0 if have no a number to convert
 */

int _atoi(char *s)
{
	int len = 0, sign = 1, ret = 0;

	if (!s)
		return (0);
	while (s)
	{
		if (s[len] == '-')
			sign = sign * -1;
		if (s[len] >= 48 && s[len] <= 57)
			ret = (ret * 10) + s[len] - 48;
		if (ret != 0)
			if (s[len + 1] > 57 || s[len + 1] < 48)
				return (ret * sign);

		len++;
	}
	if (ret == 0)
		return (ret);
	else
		return (ret * sign);
}
