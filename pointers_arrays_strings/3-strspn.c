#include <string.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdbool.h>

/**
 * _strspn - Get span of character set in string
 * @s: C string to be scanned.
 * @accept: C string containing the characters to match.
 *
 * Return: the length of the initial portion of str1 which consists
 * only of characters that are part of str2.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, count;

	while (*(s + i))
	{
		count = 0;
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
				count++;

			j++;
		}
		if (!count)
			return (i);
		i++;
	}
	return (0);
}
