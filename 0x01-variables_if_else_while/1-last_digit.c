#include <stdio.h>
#include <time.h>

/**
* main - excecuting a print the last digit of a random number
* Return: if the number es grater, equal or less and not zero
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
	printf("Last digit of %d", n "and is grater than 5");
	}
	else if (n % 10 == void)
	{
	printf("Last digit of %d", n "and is 0");
	}
	else if (n % 10 < 6 && !void)
	{
	printf("Last digit of %d", n "and is less than 6 and not 0");
	}
	return (0);
}