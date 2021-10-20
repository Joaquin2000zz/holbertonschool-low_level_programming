#include "main.h"

/**
* _strlen_recursion - function that prints the long of a pointer
* @s: the pointer that bring the string to messure
* Return: how long is the string.
*/
int _strlen_recursion(char *s)
{

	if (*s == 0)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
