#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse string
 * @s: string (char array)
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char *rs = "";

	while (*(s + i) != '\0')
		i++;

	while (i-- > 0)
		*(rs + j++) = *(s + i);

	s = rs;
}
