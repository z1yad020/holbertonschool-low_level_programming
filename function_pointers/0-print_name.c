#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - printing name
 * @name: name
 * @f: pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
