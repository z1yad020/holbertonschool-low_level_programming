#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int checkNumber(char *);
int answer(int, int []);


/**
 * main - start point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2 || !checkNumber(argv[1]))
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}


	printf("%d\n", answer(atoi(argv[1]), coins));

	return (0);
}

/**
 * answer - give answer
 * @cents: cents
 * @coins: coins
 *
 * Return: count of minimum coin
 */
int answer(int cents, int coins[5])
{
	int i = 0, sum = 0;

	for (; i < 5; i++)
	{
		if (cents < coins[i])
			continue;

		sum += cents / coins[i];
		cents %= (cents / coins[i]) * coins[i];

		if (!cents)
			return (sum);
	}
	return (1);
}


/**
 * checkNumber - atoi but hard code
 * @x: coin string
 *
 * Return: true of false
 */
int checkNumber(char *x)
{
	size_t i = 0;

	if (x[0] == '-')
		i = 1;

	for (; i < strlen(x); i++)
		if (!isdigit(x[i]))
			return (0);

	return (1);
}
