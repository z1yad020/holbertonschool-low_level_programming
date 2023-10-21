#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_diagonal - print diagonal lines
 * @n: line count
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = n; i > 0; i--)
		{
			for (j = n; j > 0; j--)
			{
				if (i == j)
					putchar('\\');
				else
					putchar(' ');
			}
			putchar('\n');
		}
	}
}
