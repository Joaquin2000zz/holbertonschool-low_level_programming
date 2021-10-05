#include "main.h"

/**
* _islower - check the code.
*@c: boolean value that define if the input is a lowercase or not
* Return: Always 0.
*/

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
}
