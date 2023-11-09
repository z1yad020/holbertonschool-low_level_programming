#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * set_string - set strings
 * @s: pointer to pointer
 * @to: source
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	if (!*s)
		*s = "";

	*s = to;
}
