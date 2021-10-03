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
	if( ii < i )
	{
	putchar(ii);
	putchar(i);
	}
	if( ii < 56 && i < 57 )
	{
	putchar(',');
	putchar(' ');
	}
	else
	{
	putchar('\n');
	}
	}
	}
 	return (0);
	}
