#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/

void _puts(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
		_putchar(i);
	_putchar('\n');
}
