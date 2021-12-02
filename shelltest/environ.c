#include <stdio.h>

extern char **environ;

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */

int main()
{
	char **s = environ;

	for (; *s; s++)
		printf("%s\n", *s);


	return (0);
} 

