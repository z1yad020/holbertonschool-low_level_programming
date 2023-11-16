#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - string_nconcat
 * @s1: string
 * @s2: string
 * @n: size
 *
 * Return: concatenated string loc
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	s3 = malloc(sizeof(char) * (len + 1));

	if (!s3)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		s3[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		s3[len++] = s2[index];

	s3[len] = '\0';

	return (s3);
}
