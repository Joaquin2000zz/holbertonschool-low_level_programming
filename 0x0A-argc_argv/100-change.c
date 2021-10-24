#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to make change
 * @argc: long of the argv
 * @argv: arguments of the program
 * Return: 0 if everything i'ts ok and 1 in errors
 */

int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1}, change = 0, i = 0, j = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		change = atoi(argv[1]);
		while (change > 0)
		{
			if (change < coins[j])
				j++;
			if (change >= coins[j])
			{
				change = change - coins[j];
				i++;
			}
		}
		printf("%d\n", i);
		return (0);
	}
}
