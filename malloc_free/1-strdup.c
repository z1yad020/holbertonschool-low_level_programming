#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - The woman who has no imagination has no wings
 * @str: string
 *
 * Return: new loc to dublicated string
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int i = 0, j;

	if (!str)
		return (NULL);


	while (1)
	{
		if (!(*(str + i++)))
			break;
	}

	arr = (char *)malloc(i * sizeof(*str));

	if (!arr)
		return (NULL);

	for (j = 0; j < i; j++)
		*(arr + j) = *(str + j);

	return (arr);

}
