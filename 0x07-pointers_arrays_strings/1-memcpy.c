#include "main.h"

/**
* _memset - prints buffer in hexa
* @dest: the address of the string to fill whith n pasted bytes
* @src: the chars to copy on dest
* @n: the number of bytes to be copied in src
* Return: the chars copied from src to paste in dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
