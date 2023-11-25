#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - If you spend too much time thinking about a thing, you'll
 * never get it done
 * @array: array
 * @size: size of array
 * @action: ponter to function that take int and return void
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!action || !array)
		return;

	for (; i < size; i++)
		action(*(array + i));
}
