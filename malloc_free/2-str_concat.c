#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - He who is not courageous enough to take risks
 * will accomplish nothing in life
 * @s1: string
 * @s2: string
 *
 * Return: concatenated string loc
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int s1i = 0, s2i = 0, s3i, i, j = 0;

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

	s3i = s1i + s2i - 1;

	s3 = (char *)malloc(s3i * sizeof(char));

	if (!s3)
		return (NULL);


	for (i = 0; i < s1i; i++)
		*(s3 + i) = *(s1 + i);

	for (; i < s3i; i++)
		*(s3 + i) = *(s2 + j++);

	return (s3);

}
