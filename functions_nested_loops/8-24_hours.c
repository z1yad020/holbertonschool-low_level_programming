#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * jack_bauer - count to tomorrow
 *
 *
 * Descriptio: doing some code
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			printf("%02d:%02d\n", i, j);
		}
	}
}
