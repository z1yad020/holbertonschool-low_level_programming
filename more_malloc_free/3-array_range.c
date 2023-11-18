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
	int i;

	if (min > max)
		return (NULL);


	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (NULL);

	for (i = min; i <= max; i++)
		*(arr + i) = i;

	return (arr);

}
