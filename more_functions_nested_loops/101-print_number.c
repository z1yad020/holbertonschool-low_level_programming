#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_number - print char digit
 * @n: line count
 *
 * Return: void.
 */
void print_number(int n)
{
	int tmp1 = n, tmp2;

	if (n < 0)
	{
		_putchar('-');
		tmp1 *= -1;
	}

	while (tmp1 != 0)
	{
		tmp2 = (tmp1 % 10) + (10 * tmp2);
		tmp1 /= 10;
	}

	while (tmp2 != 0)
	{
		_putchar((tmp2 % 10) + '0');
		tmp2 /= 10;
	}
}
