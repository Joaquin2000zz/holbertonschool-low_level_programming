#include "main.h"
/**
* _abs - check the code
* @x: read the value asigned for the user
* Return: Always 0.
*/
int _abs(int x)
{
	int absolute;
	if (x < 0)
	{
	absolute = x*(-1);
	putchar(x);
	}
	else
	{
	putchar(x);
	}
	return (x);
}
