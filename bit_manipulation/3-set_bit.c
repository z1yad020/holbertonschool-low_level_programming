#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: address of number
 * @index: index
 * Return: Returns: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);

	x = _pow(2, index);

	*n |= x;

	return (1);
}

/**
 * _pow - manual power function
 * @base: base
 * @exp: power
 * Return: power of base
 */
double _pow(double base, double exp)
{
	long double result = 1.0;

	while (exp != 0)
	{
		result *= base;
		--exp;
	}
	return (result);
}
