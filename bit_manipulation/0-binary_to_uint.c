#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	size_t i, j = 0;
	unsigned int x = 0;

	if (!b)
		return (0);

	i = strlen(b);
	for (; i--;)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		x += (b[i] - '0') * pow(2, j++);
	}
	return (x);
}
