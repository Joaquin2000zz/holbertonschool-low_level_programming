#include "main.h"
/**
* main - check the code
*
* Return: Always 0.
*/
int print_last_digit(int x)
{
	if (x < 0)
	return((x/10) % 10);
	else
	{
	return(x % 10);
	}
}
