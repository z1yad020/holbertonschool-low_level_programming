#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - check if upper.
 * @c: character
 *
 * Return: 0 or 1.
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
