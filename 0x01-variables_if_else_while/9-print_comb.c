#include <stdio.h>
/**
* main - for
* Return: counting
*/

int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
	putchar(i);
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
