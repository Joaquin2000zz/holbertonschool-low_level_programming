#include <stdio.h>
/**
* main - for
* Return: counting
*/

int main(void)
{
	int i;
	int ii;

	for( ii = 49 ; ii <= 56 ; ii++ )
	{
	for( i = 48 ; i <= 57 ; i++ )
	{
	if( i != ii )
	{
	putchar(ii);	
	putchar(i);
	}
	}
	}
 	return (0);
	}
