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
	if (i < 57)
	{
	putchar(i);
	putchar(',');
	putchar(' ');
	}
	else
	{
	putchar('\n');
	}	
	break;
	i++;
	}

	return (0);
}
