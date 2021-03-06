#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print numbers with a variadic function
 * @n: n numbers you gonna print
 * @separator: literally the separator
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i, num = 0;

	va_start(num_list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(num_list, int);
		printf("%d", num);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');

}
