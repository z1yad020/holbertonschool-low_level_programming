#include <string.h>
#include <stdio.h>
#include "main.h"
#include <math.h>

int check_palindrome(const char *s, int index);

/**
 * is_palindrome - check palindrome
 * @s: string
 *
 * Return: result
 */
int is_palindrome(const char *s)
{
	if (!strlen(s))
		return (1);

	return (check_palindrome(s, strlen(s) - 1));
}

/**
 * check_palindrome - recursive palindrome checker
 * @s: string
 * @index: index
 *
 * Return: result
 */
int check_palindrome(const char *s, int index)
{
	if (*s != *(s + index))
		return (0);

	if ((s == s + index - 1 || s == s + index))
		return (1);

	return (check_palindrome(s + 1, index - 2));

}
