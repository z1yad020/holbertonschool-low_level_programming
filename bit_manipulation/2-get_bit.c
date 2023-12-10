#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * get_bit - get bit in index
 * @n: number in decimal
 * @index: index
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i = 64;

	return ((n >> index) & 1);
}
