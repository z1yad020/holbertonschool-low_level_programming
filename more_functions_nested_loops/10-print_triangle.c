#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_triangle - print diagonal lines
 * @n: line count
 *
 * Return: void.
 */
void print_triangle(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i + j < n - 1)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
