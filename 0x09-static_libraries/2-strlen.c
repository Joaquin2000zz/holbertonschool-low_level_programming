#include "main.h"

/**
* _strlen - Write a function that returns the length of a string
* @s: a pointer that bring chars
* Return: an interger.
*/

int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		;
	return (n);
}
