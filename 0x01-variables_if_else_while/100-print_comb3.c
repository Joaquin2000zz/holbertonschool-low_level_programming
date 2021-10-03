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
	for( i = 47 ; i <= 57 ; i++ )
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
