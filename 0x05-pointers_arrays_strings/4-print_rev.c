#include "main.h"

/**
* print_rev - Write a function that prints a string but in reverse.
* @str: give the string to be printed with the funtion
* Return: the string.
*/

void print_rev(char *str)
{
	int n, i;

	for (n = 0; str[n] != '\0'; n++)
		;
	for (i = (n - 1); str[i] != '\0'; i--)
		_putchar(str[i]);
	_putchar('\n');
}
