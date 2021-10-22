#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies numbers
 * @argc: the long of the argv
 * @argv: the arguments of the program
 * Return: 0 if it's all ok and 1 in error's case
 */

int main(int argc, char *argv[])
{
	int count, multi = 1;

	if (argc > 2)
	{
		for (count = 1; count < argc; count++)
		{
			multi =  multi * atoi(argv[count]);
		}
		printf("%d\n", multi);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
