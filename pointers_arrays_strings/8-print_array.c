#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * print_array - Arrays are not pointers
 * @a: array
 * @n: length
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i != n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d", *(a + i));

	putchar('\n');
}
