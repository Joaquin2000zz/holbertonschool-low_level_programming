#include <stdio.h>
/**
* main - for
* Return: counting
*/

int main(void)
{
	int i;
	int ii;
	int iii;

	for (iii = 48 ; iii <= 55 ; iii++)
	{
	for (ii = 49 ; ii <= 56 ; ii++)
	{	
	for (i = 50 ; i <= 57 ; i++)
	{
	if (iii < i)
	{
	putchar(iii);
	putchar(ii);
	putchar(i);
	}
	if (iii < i && i != 56)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');

	return (0);
	}
