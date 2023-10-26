#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * puts_half - Winning is only half of it. Having fun is the other half
 * @str: string (char array)
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, n;

	while (*(str + i) != '\0')
		i++;

	if (i % 2)
		n = (i - 1) / 2;
	else
		n = i / 2;


	while (n < i)
	{
		_putchar(*(str + n));
		n++;
	}

	putchar('\n');
}
