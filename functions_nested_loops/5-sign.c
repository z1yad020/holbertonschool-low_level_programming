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
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
