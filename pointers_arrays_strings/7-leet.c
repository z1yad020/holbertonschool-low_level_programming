#include <string.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * leet - Mozart composed his music not for the elite, but for everybody
 * @str: string
 *
 * Return: string
 */

char *leet(char *str)
{
	char sprtrs[] = { 'a', '4',
			  'e', '3',
			  'o', '0',
			  't', '7',
			  'l', '1' };

	int i = 0, j;

	while (*(str + i))
	{
		for (j = 0; j < 10; j += 2)
		{
			if (sprtrs[j] == *(str + i) || toupper(sprtrs[j]) == *(str + i))
				*(str + i) = *(sprtrs + j + 1);
		}
		i++;
	}
	return (str);
}
