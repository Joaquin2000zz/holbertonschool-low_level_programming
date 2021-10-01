#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - excecuting a print the last digit of a random number
* Return: if the number es grater, equal or less and not zero
*/
int main(void)
{
	int n;
	int last;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last= n % 10;
	if (n % last > 5)
	{
	printf("Last digit of %d and is grater than 5\n",n,last);
	}
	else if (n % last == 0)
	{
	printf("Last digit of %d and is 0\n",n,last);
	}
	else if (n % last < 6 && !0)
	{
	printf("Last digit of %d and is less than 6 and not 0\n",n,last);
	}
	return (0);
}
