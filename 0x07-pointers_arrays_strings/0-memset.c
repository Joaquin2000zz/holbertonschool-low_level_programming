#include "main.h"

/**
* _memset - print (b) n times (the size) in the pointer s (the string).
* @s: the address of memory to print
* @n: the size of the memory to print
* @b: the value to print
* Return: printed (b) n times (the size) in the pointer s (the string).
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
