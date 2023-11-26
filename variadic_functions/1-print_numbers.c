#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - To be is to be the value of a variable
 * @n: size of args
 * @separator: separator
 *
 * Return: printing number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
