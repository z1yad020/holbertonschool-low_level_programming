#include <string.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdbool.h>

/**
 * _strstr - Locate substring
 * @haystack: C string to be scanned.
 * @needle: C string containing the sequence of characters to match.
 *
 * Return: a pointer to the first occurrence of str2 in str1, or a null pointer
 * if str2 is not part of str1.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (*(haystack + i))
	{
		if (!*(needle + j))
			return (haystack + i - j);

		i++;
		if (*(haystack + i - 1) != *(needle + j))
		{
			j = 0;
			continue;
		}
		j++;

	}

	return (0);
}
