#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * print_rev - lenght of char array
 * @s: string (char array)
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0, j = 0;

	while (*(s + i++) != '\0')
		j++;

	while (j >= 0)
		_putchar(*(s + j--));

}
