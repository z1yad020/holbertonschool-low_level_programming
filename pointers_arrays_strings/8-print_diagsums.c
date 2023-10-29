#include <string.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdbool.h>

/**
 * print_diagsums - The line of life is ragged diagonal between duty and desire
 * @a: 2D array
 * @size: size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sumd1 = 0, sumd2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sumd1 += *((a + i * size) + j);

			if (i + j == size - 1)
				sumd2 += *((a + i * size) + j);
		}
	}

	printf("%d, %d\n", sumd1, sumd2);
}
