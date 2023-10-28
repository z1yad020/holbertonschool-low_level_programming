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
	int i = 0;


	for (; i < n; i++)
	{
		*(dest + i) = *(src + i);

		if (!*(src + i))
			break;
	}


	for ( ; i < n; i++)
		dest[i] = '\0';


	return (dest);
}
