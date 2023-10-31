#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * factorial - factorial
 * @n: number
 *
 * Return: factorial result
 */

int factorial(int n)
{
	if (n < 0)
		return (- 1);

	if (n == 1)
		return (1);

	return (factorial(n - 1) * n);

}
