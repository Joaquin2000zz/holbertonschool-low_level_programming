#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - get the operator
 *
 * @s: The operator to compare
 * Return: the operator needed
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

		while (ops[i].op != 0)
		{
			if (s[0] == ops[i].op[0] && !s[1])
				return (ops[i].f);
			i++;
		}

	printf("Error\n");
	exit(99);
}
