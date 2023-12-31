#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: zero if true
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) != '\0' || *(s2 + i) != '\0')
	{
		if ((*(s1 + i)) != (*(s2 + i)))
		{
			if (*(s1 + i) < *(s2 + i))
				return (-13);
			else
				return (13);
		}
		i++;
	}

	return (0);
}
