#include "main.h"

/**
* _print_rev_recursion - print a string with recursion but in reverse
* @s: the pointer with the string
* Return: the string but reversed.
*/

void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
