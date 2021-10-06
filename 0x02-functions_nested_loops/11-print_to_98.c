#include "main.h"
#include <stdio.h>

/**
* print_to_98 - check the code
*
* Return: Always 0.
*/

void print_to_98(int i)
{
	if (i <= 98)
	{
		for (; i <= 98 ; i++)
		{
			if (i < 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
		putchar(0);
	}
	if (i >= 98)
	{
		for (; i <= 98 ; i--)
		{
			if (i > 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
		putchar(0);
	}
}
