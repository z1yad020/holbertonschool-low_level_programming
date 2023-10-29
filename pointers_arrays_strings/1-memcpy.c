#include <string.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _memcpy - copy memory area
 * @dest: destination
 * @src: source
 * @n: length
 *
 * Return: string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
