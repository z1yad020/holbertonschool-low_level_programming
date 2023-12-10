#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: void
 */
int get_endianness(void)
{
	unsigned int i = 1;

	if (i & 1)
		return (1);
	return (-1);
}
