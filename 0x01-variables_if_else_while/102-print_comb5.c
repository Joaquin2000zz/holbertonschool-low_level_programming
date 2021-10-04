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
	int iiii;

	for (ii = 48 ; ii <= 56 ; ii++)
	{
	for (i = 48 ; i <= 56 ; i++)
	{
	if (ii != i)
	{
	putchar(ii);
	putchar(ii);
	putchar(' ');
	putchar(i);
	putchar(i);
	}
	if (iiii != 57 && iii != 56 && iiii != i && (iiii && iii) != (ii && i))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');

	return (0);
}
