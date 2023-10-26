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
	char temp;

	while (*(s + i) != '\0')
		i++;

	for (x = 0; x < i / 2; x++)
	{
		temp = *(s + x);
		*(s + x) = *(s + i - x - 1);
		*(s + i - 1 - x) = temp;
	}
}
