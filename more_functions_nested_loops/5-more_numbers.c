#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * more_numbers - print number 0 to 9
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i, j = 10;

	while (j--)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar('1');
			}
			_putchar(i - 10 + '0');
		}
		_putchar('\n');
	}
}
