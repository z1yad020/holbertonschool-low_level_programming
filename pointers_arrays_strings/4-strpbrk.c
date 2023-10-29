#include <string.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdbool.h>

/**
 * _strpbrk - Locate characters in string
 * @s: C string to be scanned.
 * @accept: C string containing the characters to match.
 *
 * Return: A pointer to the first occurrence in str1 of any of the characters
 * that are part of str2, or a null pointer if none of the characters of str2
 * is found in str1 before the terminating null-character.
 * If none of the characters of str2 is present in str1, a null
 * pointer is returned.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
				return (s + i);

			j++;
		}
		i++;
	}
	return (0);
}
