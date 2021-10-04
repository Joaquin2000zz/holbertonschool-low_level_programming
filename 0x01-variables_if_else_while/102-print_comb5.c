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

	for (iiii = 48 ; iiii <= 57 ; iiii++)
	{
	for (iii = 48 ; iii <= 56 ; iii++)
	{
	for (ii = 48 ; ii <= 57 ; ii++)
	{
	for (i = 49 ; i <= 57 ; i++)
	{
	if ((iiii || iii) != (ii || i))
	{
	putchar(iiii);
	putchar(iii);
	putchar(' ');
	putchar(ii);
	putchar(i);
	}
	if (iiii != 57 && iii != 56 && iiii != i && (iiii && iii) != (ii && i))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');

	return (0);
}
