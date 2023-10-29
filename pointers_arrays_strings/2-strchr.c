#include <string.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdbool.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	do {
		if (*(s + i) == c)
			return (s + i);


		if (!(*(s + i)))
			break;

		i++;

	} while (true);

	return (NULL);
}
