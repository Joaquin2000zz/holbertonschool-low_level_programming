#include <stdio.h>

/**
 * main - print the number of argument passed into it
 * @argc: variable that brings the argv long
 * @argv: arguments of the program
 * Return: 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
