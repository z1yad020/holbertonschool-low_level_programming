#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * func_for_count - another function for help
 * @n: number
 * @x: counter
 *
 * Return: result
 */
int func_for_count(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);

	func_for_count(n, x + 1);
	return (0);
}

/**
 * _sqrt_recursion - square root
 * @n: number
 *
 *
 * Return: root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (func_for_count(n, 0));
}
