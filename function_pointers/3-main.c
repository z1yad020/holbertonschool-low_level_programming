#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return:  succeed or exit value
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", (int)strlen(argv[2]));
	if (strlen(argv[2]) != 1 && strlen(argv[2]) != 3)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(argv[2])(a, b));

	return (0);
}
