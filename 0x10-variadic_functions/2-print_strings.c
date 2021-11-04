#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - check the code
 * @separator: the separator
 * @n: the cuantity of arguments
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_list;
	unsigned int i;
	char *str;


	va_start(str_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(str_list, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');

}
