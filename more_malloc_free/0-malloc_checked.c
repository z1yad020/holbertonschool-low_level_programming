#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - alloc mem
 * @b: size
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);

	if (!x)
		exit(98);

	return (x);
}
