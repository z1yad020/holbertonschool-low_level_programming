#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - To hell with circumstances; I create opportunities
 * @array: array
 * @size: size of array
 * @cmp: pointer to function that take int and return void
 *
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!cmp || !array || size <= 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(*(array + i)))
			return (i);
	return (-1);
}
