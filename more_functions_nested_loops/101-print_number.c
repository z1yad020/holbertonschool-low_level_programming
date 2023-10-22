#include <limits.h>
#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <math.h>

/**
 * print_number - print char digit
 * @n: line count
 *
 * Return: void.
 */
void print_number(int n)
{
	unsigned int tmp;
	int i = 0, j = 0;

	if (n < 0)
	{
		tmp = n * -1;
		_putchar('-');
	}
	else
		tmp = n;

	if (tmp != 0)
		while (tmp != 0)
		{
			tmp /= 10;
			i++;
		}
	else
		i = 1;

	if (n < 0)
		tmp = n * -1;
	else
		tmp = n;

	for (j = i - 1; j >= 0; j--)
		_putchar(tmp / (int)(pow(10, j)) % 10 + '0');
}
