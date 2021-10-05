#include "main.h"

/**
* _isalpha - check the code.
*@c: boolean value that define if the input is a lowercase or not
* Return: Always 0.
*/

int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
