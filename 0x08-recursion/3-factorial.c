#include "main.h"


/**
* factorial - funtion that calculate factorials
* @n:the number to calculate their factorial
* Return: the calculation
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	

	return (n * factorial (n - 1));
}
