#include "main.h"

/**
* _strcpy - function that copies the string pointed to by src
* @dest: the destiny of the copy
* @src: the string to copy
* Return: the copy of the src string.
*/

char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;

	if (!src | !dest)
		return (NULL);
	while (src[len])
		len++;

	while (i <= len)
		dest[i] = src[i], i++;
	return (dest);
}
