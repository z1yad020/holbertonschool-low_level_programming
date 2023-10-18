#include "main.h"
#include <ctype.h>
/**
 * print_sign - print sign
 * @n: number
 *
 * Descriptio: doing some code
 *
 * Return: void
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar('1');
		_putchar('\n');
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar('1');
		_putchar('\n');
	}
	else
	{
		_putchar('0');
		_putchar('0');
		_putchar('\n');
	}
	return (0);
}
