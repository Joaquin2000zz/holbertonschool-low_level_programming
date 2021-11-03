#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * op_add - addition
 * @a: first number
 * @b: second number
 *
 * Return: the adittion
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: first number
 * @b: second number
 *
 * Return: the subtracion
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: first number
 * @b: second number
 *
 * Return: the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: first number
 * @b: second number
 *
 * Return: the division.
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);

	printf("Error\n");
	exit(100);
}

/**
 * op_mod - module
 * @a: first number
 * @b: second number
 *
 * Return: the module
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);

	printf("Error\n");
	exit(100);
}
