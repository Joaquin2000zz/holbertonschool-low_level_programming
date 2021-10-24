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
	int a = 25, b = 10, c = 5, d = 2, e = 1, change = 0, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (change <= 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		change = atoi(argv[1]);
		
		while (change < 1)
		{

		
			if ((change % a) == 0 && > b)
			{
				change = change - a;
				i++;
			}
			else if ((change % b) == 0 && change < a)
			{
				i++;
				change = change - b;
			}
			else if ((change % c) == 0 && change < b)
			{
				i++;
				change = change - c;
			}
			else if ((change % d) == 0 && change < c)
			{
				i++;
				((change % e) == 0 && change < d)
			}
		}
		
		printf("%d", i);
		return (0);
	}	
}
