#include "main.h"

/**
* _puts_recursion - function that prints a string, followed by a new line.
* @s: the pointer that bring the string to print
* Return: the chars recursively.
*/

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
