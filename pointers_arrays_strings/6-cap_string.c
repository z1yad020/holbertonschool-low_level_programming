#include <string.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * cap_string - Expect the best.Prepare for the worst. Capitalize on what comes
 * @str: string
 *
 * Return: string
 */

char *cap_string(char *str)
{
	char sprtrs[] = { ' ', ',', ';', '.',
			  '!', '?', '\"', '(', ')',
			  '{', '}', '\t', '\n'};

	int i = 0, j;

	str[0] = toupper(str[0]);

	while (*(str + i))
	{
		j = 0;
		while (j < 13)
		{
			if (sprtrs[j] == *(str + i))
				*(str + i + 1) = toupper(*(str + i + 1));
			j++;
		}
		i++;
	}

	return (str);
}
