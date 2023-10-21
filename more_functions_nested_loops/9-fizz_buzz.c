#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * FizzBuzz_test - fizz buzz
 *
 *
 * Return: void.
 */
void FizzBuzz_test(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i != 100)
			printf("Buzz ");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d ", i);
	}
}
