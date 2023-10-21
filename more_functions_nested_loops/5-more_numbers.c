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
	int i, j = 10, x = 2;

	while (j--)
	{
		while (x--)
		{
			for (i = 0; i < 10; i++)
			{
				if (x == 0 && i == 5)
					break;


				if (x == 0)
					putchar('1');


				putchar(i + '0');
			}
		}
		putchar('\n');
		x = 2;
	}
}
