#include <stdio.h>
#include <time.h>

/**
 * main - a comparison of numbers with a if statement
 * Return: a int value
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > void)
	{
	printf("%d is positive\n", n);
	}
	else if (n == void)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
