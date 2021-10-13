#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/

void puts_half(char *str)
{
	int i, n;

		for (i = 0; str[i] != '\0'; i++)
			n = i;
		for (i = 0; str[i] != '\0'; i++)
		{
		if ((n % 2) != 0)
		{	if (i > (n / 2))
				_putchar(str[i]);
		}
		if ((n % 2) == 0)
			if (i > ((n / 2))
				_putchar(str[i]);
		}
		_putchar('\n');
}
