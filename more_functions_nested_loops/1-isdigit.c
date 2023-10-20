#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - check if upper.
 * @c: character
 *
 * Return: 0 or 1.
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
