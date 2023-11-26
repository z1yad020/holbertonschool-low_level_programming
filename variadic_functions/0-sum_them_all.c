#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - Beauty is variable, ugliness is constant
 * @n: size of args
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	return (sum);
}
