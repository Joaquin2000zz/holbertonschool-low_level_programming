#include <stdio.h>
/**
* main - for
* Return: counting
*/

int main(void)
{
	int i[2];

	i[0] = 47;
	i[1] = 48;

	while (i[1] <= 57)
	{
	putchar(i[0]);
	putchar(i[1]);
	if (i[1] < 57)
	{
	putchar(',');
	putchar(' ');
	}
 	else
	{
	putchar('\n');
	}
	i[1]++;
 	}
 	return (0);
}
