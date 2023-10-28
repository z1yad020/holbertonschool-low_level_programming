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
	int i = 0, j = 0, sizesrc = sizeof(src), sizefrst = sizeof(src[0]);

	while (*(dest + i++))
	{}

	i--;

	if ((sizesrc / sizefrst) < n)
	{
		while (*(src + j))
			*(dest + i++) = *(src + j++);
	}
	else
	{
		while (*(src + j))
		{
			if (j == n)
				break;
			*(dest + i++) = *(src + j++);
		}
	}

	*(dest + i) = '\0';
	return (dest);
}
