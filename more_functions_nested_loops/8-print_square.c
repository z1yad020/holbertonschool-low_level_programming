#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * rint_square - print square
 * @n: line count
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar('#');
			putchar('\n');
		}
	}
	else
		_putchar('\n');
}
