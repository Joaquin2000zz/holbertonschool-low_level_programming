#include "main.h"

/**
* _memset - prints buffer in hexa
* @s: the address of memory to print
* @b: the size of the memory to print
* @n: 
* Return: Nothing.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	i = 0;

	while (s[i] != 0 && i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
