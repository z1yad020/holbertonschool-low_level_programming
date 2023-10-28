#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copy strings
 * @dest: destination
 * @src: source
 * @n: first n characters
 *
 * Return: char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int sizesrc = 0, sizedest = 0, i = 0, j = 0;

	while (*(src + sizesrc++))
	{}
	while (*(dest + sizedest++))
	{}


	if (sizesrc > n && n > sizedest)
		dest[n] = '\0';


	if (n >= sizesrc)
		while (i < sizesrc)
			*(dest + j++) = *(src + i++);
	else
		while (i < n)
			*(dest + j++) = *(src + i++);


	return (dest);
}
