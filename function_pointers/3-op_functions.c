#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"



/**
 * op_add - sum of a and b
 * @a: number 1
 * @b: number 2
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of a and b
 * @a: number 1
 * @b: number 2
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of a and b
 * @a: number 1
 * @b: number 2
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of a and b
 * @a: number 1
 * @b: number 2
 *
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	if (b)
		return (a / b);

	printf("Error\n");
	exit(100);
}

/**
 * op_mod - remainder of the division of a and b
 * @a: number 1
 * @b: number 2
 *
 * Return: remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	if (b)
		return (a % b);

	printf("Error\n");
	exit(100);
}
