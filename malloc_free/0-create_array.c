#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creating char array
 * @c: character
 * @size: size of char array
 *
 * Return: initialized array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (!size)
		return (NULL);

	arr = (char *)malloc(size * sizeof(char));

	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
		*(arr + i) = c;

	return (arr);

}
