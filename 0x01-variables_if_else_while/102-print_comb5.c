#include <stdio.h>
/**
* main - for
* Return: counting
*/

int main(void)
{
	int i;
	int ii;

	for (ii = 0 ; ii <= 99 ; ii++)
	{
		for (i = ii ; i <= 99 ; i++)
		{
			if (ii != i)
			{
				putchar(((ii/10)%10)+48);
				putchar(((ii)%10)+48);
				putchar(' ');
				putchar(((ii/10)%10)+48);
				putchar(((ii)%10)+48);
			}
			if (ii != 57 && i != 56 && ii != i)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
