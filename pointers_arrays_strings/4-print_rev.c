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
	int i;

	for (i = sizeof(s) / sizeof(s[0]) - 1; i >= 0; i--)
		_putchar(s[i]);
}
