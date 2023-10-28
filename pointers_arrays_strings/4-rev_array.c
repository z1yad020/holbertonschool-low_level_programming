#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverse array
 * @a: int array
 * @n: length
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
