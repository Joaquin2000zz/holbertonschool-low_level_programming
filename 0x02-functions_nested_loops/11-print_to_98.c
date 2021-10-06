#include "main.h"
#include <stdio.h>

/**
* print_to_98 - check the code
*
* Return: Always 0.
*/

void print_to_98(int i)
{
	if (i < 98)
	{
	for (i = 0 ; i < 99 ; i++)
	{
	printf("%d, ", i);
	}
	}
	if (i > 98)
	{
	for (i = 0 ; i < 99 ; i--)
	{
	printf("%d, ", i);
	}
	}
}
