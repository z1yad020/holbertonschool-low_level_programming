#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_last_digit - print sign
 * @n: number
 *
 * Descriptio: doing some code
 *
 * Return: void
 */
int print_last_digit(int n)
{
	int x = abs(n % 10);

	_putchar(x + '0');

	return (x);
}
