#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * puts2 - Half the lies they tell about me aren't true
 * @str: string (char array)
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0, j = 0;

	while (*(str + i) != '\0')
        i++;

	while (j <= i)
	{
		if (j % 2 == 0)
			putchar(*(str + j));
		j++;
	}

	putchar('\n');
}
