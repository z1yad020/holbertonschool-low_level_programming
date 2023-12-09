#include <limits.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * dgt - recursive digit printer
 * @x: number
 * Return: void
 */
void dgt(unsigned int x)
{
	if (x / 10)
		dgt(x / 10);

	_putchar(x % 10 + '0');
}

/**
 * print_number - printing number
 * @n: number
 * Return: void
 */
void print_number(int n)
{
	unsigned int x = (unsigned int)n, temp;

	if (n < 0)
		_putchar('-');

	dgt(x);
}
