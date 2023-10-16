#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * void: nothing
 *
 *
 * Description: if else condition
 *
 *
 *
 * Return: 0
 */
int main(void)
{

	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
