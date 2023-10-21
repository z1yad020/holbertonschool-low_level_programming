#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_line - print underlines
 * @n: line count
 *
 * Return: void.
 */
void print_line(int n)
{
	if (n > 0)
		while (n--)
		{
			_putchar('_');
		}
	_putchar('\n');
}
