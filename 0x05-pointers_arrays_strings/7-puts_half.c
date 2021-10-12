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
			if (i > (n / 2))
				{
					_putchar(str[i]);
				}
			else
				{
					_putchar(str[i - 1]);
				}
			}
		_putchar('\n');
}
