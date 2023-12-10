#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number in decimal
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 65;
	short chck = 0;
	unsigned int x;

	if (!n)
	{
		putchar('0');
		return;
	}

	while (i--)
	{
		x = (n >> i) & 1;

		if (!chck && !x)
			continue;
		else
			chck = 1;

		putchar('0' + x);
	}
}
