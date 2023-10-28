#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: first n characters
 *
 * Return: char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i++))
	{}

	i--;

	if ((sizeof(src) / sizeof(src[0])) < n)
	{
		while (*(src + j))
			*(dest + i++) = *(src + j++);
	}
	else
	{
		while (*(src + j))
		{
			*(dest + i++) = *(src + j++);
			if (j == n)
				break;
		}
	}

	*(dest + i) = '\0';
	return (dest);
}
