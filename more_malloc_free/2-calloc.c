#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - calloc
 * @nmemb: size of array
 * @size: size of character
 *
 * Return: Void Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);


	arr = malloc(nmemb * size);

	if (!arr)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		*(arr + i) = 0;

	return (arr);

}
