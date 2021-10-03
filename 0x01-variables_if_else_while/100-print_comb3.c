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
	if( i == 49 )
	{
	putchar(i);	
	}
	if( i == 50 && ii == 57 )
	{
	putchar(i);
	}
	if( i == 51 && ii == 48 )
	{	
	putchar(i);
	}	
	else
	{
	putchar(i);
	}
	putchar(ii);
	}
	}
 	return (0);
	}
