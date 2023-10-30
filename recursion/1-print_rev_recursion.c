#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string (char array)
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	_putchar(*s);

	if (*s != '\0')
		_print_rev_recursion(s + 1);

}
