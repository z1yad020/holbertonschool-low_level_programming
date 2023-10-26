#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse string
 * @s: string (char array)
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, x;

	while (*(s + i) != '\0')
		i++;

	for (x = 0; x < i / 2; x++)
	{
		char temp = *(s + x);
		*(s + x) = *(s + len - x - 1);
		*(s + len - 1 - x) = temp;
	}
}
