#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creating array with range
 * @min: min
 * @max: max
 *
 * Return: Void Pointer
 */
int *array_range(int min, int max)
{
	int *arr;
	unsigned int i;

	if (min > max)
		return (NULL);


	arr = calloc(max - min + 1, sizeof(*arr));

	if (!arr)
		return (NULL);

	for (i = min; i <= max; i++)
		*(arr + i) = i;

	return (arr);

}
