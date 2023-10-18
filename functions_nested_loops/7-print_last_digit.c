#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_last_digit - print sign
 * @n: number
 *
 * Descriptio: doing some code
 *
 * Return: void
 */
int print_last_digit(int n)
{
	int x = n % 10;

	printf("%i", x);


	return (x);
}
