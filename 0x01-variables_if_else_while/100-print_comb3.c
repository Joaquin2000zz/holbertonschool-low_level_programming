#include <stdio.h>
/**
* main - for
* Return: counting
*/

int main(void)
{
	int i[1];

	i[0] = 47;
	i[1] = 48;

	while (i[1] <= 57)
	{
	putchar(i[0]);
	putchar(i[1]);
	if (i < 57)
	{
	putchar(',');
	putchar(' ');
	}
 	else
	{
	putchar('\n');
	}
	i++;
 	}
 	return (0);
}
