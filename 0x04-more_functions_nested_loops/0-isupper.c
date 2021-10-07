#include "main.h"
/**
* _isupper - Write a function that checks for uppercase character.
*@c: the information given for the user
* Return: Always a boolean.
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
