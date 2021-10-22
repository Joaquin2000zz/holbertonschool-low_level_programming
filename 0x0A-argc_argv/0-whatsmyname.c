#include <stdio.h>

/**
 * main- "print the name of the program"
 * @argc: "the long of the argv"
 * @argv: "array of strings that have the arguments of the program"
 * Return: always 0
 */

int main(int argc__attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
