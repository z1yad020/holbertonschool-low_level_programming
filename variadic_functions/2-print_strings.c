#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - One woman's constant is another woman's variable
 * @n: size of args
 * @separator: separator
 *
 * Return: printing strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (!strcmp(str, "(NULL)"))
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
}
