#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * flip_bits - need to flip to get from one number to another
 * @n: number in decimal
 * @m: number in decimal
 * Return: Returns the number of bits you would need to flip to get from one
 * number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, sum = 0;

	i = 0;
	while (i++ != 64)
		if (((n >> i) & 1) ^ ((m >> i) & 1))
			sum++;

	return (sum);
}
