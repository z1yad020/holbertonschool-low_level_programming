#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_to_98 - print one line numbers
 * @n: number
 *
 * Descriptio: doing some code
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
		for (i = n; i <= 98; i++)
			if (i != 98)
				printf("%d, ", i);
			else
				printf("98");
	else
		for (i = n; i >= 98; i--)
			if (i != 98)
				printf("%d, ", i);
			else
				printf("98");
	printf("\n");
}
