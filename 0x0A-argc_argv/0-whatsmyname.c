#include <stdio.h>

/**
 * main: "print the name of the program"
 * @argc: "the long of the argv"
 * @argv: "array of strings that have the arguments of the program"
 * return: always 0
 */
int main (int argc __attribute__((unused)), char *argv[])
{
	printf ("%s\n",argv[0]);

	return 0;
}
