#include <stdio.h>

extern char **environ;

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */

int main(char **env)
{
	char **s = environ;

	printf("%p\n", &environ);
	printf("%p\n", &env);

	return (0);
} 

