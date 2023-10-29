#include <string.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _srtchr - locates a character in a string
 * @s string
 * @c: character
 *
 * Return: string
 */

char *_strchr(char *s, char c)
{
	int i = -1;

	while (*(s + ++i))
		if (*(s + i) == c)
			return (s + i);
	return (NULL);
}
