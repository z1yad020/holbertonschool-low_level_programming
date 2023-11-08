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
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}