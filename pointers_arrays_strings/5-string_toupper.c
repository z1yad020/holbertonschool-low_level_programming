#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * string_toupper - string to upper
 * @str: string
 *
 * Return: void
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		*(str + i) = toupper(*(str + i));
		i++;
	}

	return (str);
}
