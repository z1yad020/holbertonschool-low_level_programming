#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _pow - manual power function
 * @base: base
 * @exp: power
 * Return: power of base
 */
double _pow(double base, double exp)
{
	long double result = 1.0;

	while (exp != 0) {
		result *= base;
		--exp;
	}
	return (result);
}


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

		if (b[i] - '0')
			x += 1 * pow(2, j++);
	}
	return (x);
}
