#include <string.h>
#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * func_for_count - another function for help
 * @n: number
 * @x: counter
 *
 * Return: result
 */
int func_for_count(int n, int x)
{
	if ((x > n / 2) || !(n % x))
		return (0);
	else if (n % x)
		return (1);
	else
		return (func_for_count(n, x + 1));
}

/**
 * is_prime_number - is prime or not
 * @n: number
 *
 *
 * Return: true false
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (func_for_count(n, 2));
}
