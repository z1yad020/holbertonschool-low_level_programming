#include <stdio.h>

/**
 * main - start point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[argc]);

	return (0);
}
