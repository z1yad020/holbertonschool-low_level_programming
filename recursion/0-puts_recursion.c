#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string (char array)
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	_putchar(*s);

	if (!(*s))
		return;

	_puts_recursion(s + 1);
}
