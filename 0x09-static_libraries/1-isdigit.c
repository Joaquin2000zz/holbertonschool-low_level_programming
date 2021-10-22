#include "main.h"
#include <stdio.h>

/**
* _isdigit - Write a function that checks for a digit (0 through 9).
*@c: the value given for the user
* Return: A boolean value.
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
