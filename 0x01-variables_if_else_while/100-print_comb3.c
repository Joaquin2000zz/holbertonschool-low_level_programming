#include <stdio.h>
/**
* main - for
* Return: counting
*/

int main(void)
{
	int i;
	int ii;

	for( ii = 48 ; ii <= 57 ; ii++ )
	{
	for( i = 49 ; i <= 56 ; i++ )
	{
	if( i != ii )
	{
	putchar(i);	
	putchar(ii);
	}
	}
	}
 	return (0);
	}
