#include "main.h"
/**
* _abs - check the code
* @x: read the value asigned for the user
* Return: Always 0.
*/
int _abs(int x)
{
	if (x < 0)
	{
	_putchar(x * (-1)+48);
	}
	else
	{
	_putchar(x);
	}
	return (x);
}
