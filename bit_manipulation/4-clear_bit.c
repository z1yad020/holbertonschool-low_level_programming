#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: address of number
 * @index: index
 * Return: Returns: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	long int x;

	if (index > 64)
		return (-1);

	x = -1 * (_pow(2, index) + 1);

	*n &= x;

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
