#include <stdio.h>

/**
* main - Write a program that prints all arguments it receives.
* @argc: variable with the long of the argv
* @argv: array that have the arguments of the program
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
