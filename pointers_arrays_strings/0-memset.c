#include <string.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * memset - memomry set
 * @s: string
 * @b: character
 * @n: length
 *
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
