#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - If you even dreamof beating me you better wake up and apologize
 * @width: width
 * @height: height
 *
 * Return: 2D Array loc
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, w = 0, h = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(*arr));

	if (!arr)
	{
		free(arr);
		return (NULL);
	}


	while (i < height)
	{
		*(arr + i) = malloc(width * sizeof(**arr));
		if (*(arr + i) == NULL)
		{
			free(*(arr + i));
			return (NULL);
		}
		i++;
	}


	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			arr[h][w] = 0;
			w++;
		}
		h++;
	}

	return (arr);

}
