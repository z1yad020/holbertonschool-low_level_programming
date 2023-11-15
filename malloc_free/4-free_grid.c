#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - It's not bragging if you can back it up
 * @grid: 2D Array
 * @height: height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{

	if (!grid)
		return;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}
