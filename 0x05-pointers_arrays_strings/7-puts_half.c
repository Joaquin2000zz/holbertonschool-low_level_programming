#include "main.h"

/**
* puts_half - Write a function that prints half of a string
* @str: brings the values of the string
* Return: a half of a string.
*/

void puts_half(char *str)
{
	int i, n;

		for (i = 0; str[i] != '\0'; i++)
			n = i;
		for (i = 0; str[i] != '\0'; i++)
		{
		if ((n % 2) != 0)
		{
			if (i > (n / 2))
				_putchar(str[i]);
		}
		if ((n % 2) == 0)
			if (i > (n / 2))
				_putchar(str[i]);
		}
		_putchar('\n');
}
