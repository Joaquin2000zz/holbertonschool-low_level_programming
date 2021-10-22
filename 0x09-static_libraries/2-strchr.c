#include "main.h"

/**
* _strchr - function that locates a character in a string.
* @s: string
* @c: the character to be located
* Return: string location.
*/

char *_strchr(char *s, char c)
{
	for ( ; ; s++)
	{
		if (*s == c)
			return (s);

		if (!*s)
			return (0);
	}
	return (0);
}
