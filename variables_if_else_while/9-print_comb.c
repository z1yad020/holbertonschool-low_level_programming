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

	int i, j;

	for (i = 0, j = '0'; i <= 9; i++, j++)
	{
		putchar(j);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
