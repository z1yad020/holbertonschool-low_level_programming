#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _atoi - integers
 * @s: string
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int number = 0;

	int sign_for_number = 1;

	while (*(s + i))
	{
		if (!isdigit(*(s + i)))
		{
			if (i != 0 && *(s + i) == '-')
				sign_for_number *= -1;

			i++;
			continue;
		}


		number = number * 10 + (*(s + i) - 48);


		if (!isdigit(*(s + i + 1)))
		{
			if (sign_for_number == '-')
				number *= -1;

			break;
		}

		i++;
	}

	return (number);
}
