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

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			if (j != 9)
				printf("%d, ", i * j);
			else
				printf("%d ", i * j);
	}
}
