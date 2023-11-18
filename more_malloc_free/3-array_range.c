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
	int i, len = max - min + 1;

	if (min > max)
		return (NULL);


	arr = malloc(len * sizeof(int));

	if (!arr)
		return (NULL);

	for (i = 0; i < len; i++)
		*(arr + i) = min++;

	return (arr);

}
