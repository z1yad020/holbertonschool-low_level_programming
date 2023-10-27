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

	char sign_for_number;

	while (*(s + i))
	{
		if (!isdigit(*(s + i)))
		{
			i++;
			continue;
		}


		if (*(s + i) == '-')
			sign_for_number = '-';


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
