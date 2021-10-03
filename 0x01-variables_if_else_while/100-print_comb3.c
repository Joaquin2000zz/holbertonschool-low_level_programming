#include <stdio.h>
/**
* main - for
* Return: counting
*/

int main(void)
{
	int i;
	int ii;

	for( ii = 48 ; ii <= 56 ; ii++ )
	{
	for( i = 49 ; i <= 57 ; i++ )
	{
	if( i != ii )
	{
	}
	putchar(ii);
	putchar(i);
	putchar(',');
	putchar(' ');
	}
	}
 	return (0);
	}
