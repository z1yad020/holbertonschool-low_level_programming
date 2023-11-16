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
	unsigned int s1i = 0, s2i = 0, s3i;
	unsigned int i, j = 0;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	while (1)
		if (!(*(s1 + s1i++)))
			break;

	while (1)
		if (!(*(s2 + s2i++)))
			break;

	if (s2i - 1 < n)
		n = s2i;

	s1i--;
	s3i = s1i + n;

	s3 = (char *)malloc(s3i * sizeof(char));

	if (!s3)
		return (NULL);


	for (i = 0; i < s1i; i++)
		*(s3 + i) = *(s1 + i);

	for (; i < s3i; i++)
		*(s3 + i) = *(s2 + j++);

	return (s3);

}
