#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_all - print parameters
 * @format: kind of argument
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int type = 0, counter = 0;
	va_list kind_of;
	char *auxs, *separator = ", ";

	va_start(kind_of, format);
	while (format && format[counter])
		counter++;
	while (format && format[type])
	{
		if (type == counter - 1)
			separator = "";
		switch (format[type])
		{
			case ('c'):
				printf("%c%s", va_arg(kind_of, int), separator);
			break;
			case ('i'):
				printf("%d%s", va_arg(kind_of, int), separator);
			break;
			case ('f'):
				printf("%f%s", va_arg(kind_of, double), separator);
			break;
			case ('s'):
				auxs = va_arg(kind_of, char *);
				printf("%s", separator);
				if (auxs == NULL)
				{
					printf("(nil)%s", separator);
					break;
				}
					printf("%s%s", auxs, separator);
			break;
		}
		type++;
	}
	printf("\n");
	va_end(kind_of);
}
