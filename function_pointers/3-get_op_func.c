#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the
 * operation asked by the user
 * @s: operator passed as argument to the program
 *
 * Return:  pointer to the function that corresponds to the
 * operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{op_add, "+"},
		{op_sub, "-"},
		{op_mul, "*"},
		{op_div, "/"},
		{op_mod, "%"},
		{NULL, NULL}
	};
	int i = 0;

	while (i < (int)(sizeof(ops) / sizeof(ops[0])))
	{
		if (s && ops[i].op && *s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
