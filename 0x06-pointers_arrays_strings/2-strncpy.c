#include "main.h"

/**
* _strncpy - a funtion that copy strings
* @dest: the variable that saves the copied string
* @src: the variable that brings the string that you need to copy
* @n: the variable that determine the length of the string
* Return: src copied in dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	for ( ; i < n; i++)
	dest[i] = 0;

	return (dest);
}
