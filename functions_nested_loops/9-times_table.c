#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * times_table - time table to 9
 *
 *
 * Descriptio: doing some code
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			if (j != 9)
				printf("%3d, ", i * j);
			else
				printf("%3d", i * j);
		printf("\n");
	}
}
