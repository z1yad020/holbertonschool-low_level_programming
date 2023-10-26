#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcpy - strcpy
 * @dest: destination
 * @src: source
 *
 * Return: pointer char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
