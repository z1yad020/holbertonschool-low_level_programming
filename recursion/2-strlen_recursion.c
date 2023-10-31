#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - string length
 * @s: string (char array)
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);

	return (0);

}
