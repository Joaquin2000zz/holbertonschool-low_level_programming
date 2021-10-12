#include "main.h"

/**
* puts2 - prints only the pair locations of the pointer str
* @str: give the locations of the pointer str
* Return: the pair locations.
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		{
		if ((i % 2) == 0)
			{
			_putchar(str[i]);
			}
		}
	_putchar('\n');
}
