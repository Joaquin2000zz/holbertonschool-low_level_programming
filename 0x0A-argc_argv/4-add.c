#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that adds numbers
 * @argc: the long of the argv
 * @argv: the arguments of the program
 * Return: 0 if it's all ok and 1 in error's case
 */

int main(int argc, char *argv[])
{
	int count, j, add = 0;


	if (argc > 1)
	{

		for (count = 1; argv[count] != 0; count++)
		{
			for (j = 0; argv[count][j]; j++)
			{
				if (argv[count][j] >= 48 && argv[count][j] <= 57)
					;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			add =  add + atoi(argv[count]);
		}
		printf("%d\n", add);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
