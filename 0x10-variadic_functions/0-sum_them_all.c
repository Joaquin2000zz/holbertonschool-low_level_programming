#include <stdarg.h>

/**
 * sum_them_all - make additions
 * @n: the n numbers to print
 * Return: the addition.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	int addition = 0;

	if (n == 0)
		return (0);

	va_start(sum, n);

	for (i = 0; i < n; i++)
		addition += va_arg(sum, int);

	va_end(sum);

	return (addition);
}
