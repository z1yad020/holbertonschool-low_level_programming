#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - power of value
 * @x: value
 * @y: power
 *
 * Return: square number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (!y)
		return (1);

	return (_pow_recursion(x, y - 1) * x);

}
