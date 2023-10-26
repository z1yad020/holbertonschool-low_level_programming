#include <stdio.h>
#include "main.h"

/**
 * swap_int - swapping numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
