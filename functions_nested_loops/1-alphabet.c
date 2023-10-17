#include "main.h"
/**
 * main - entry piont
 *
 * Description: print alphabet
 *
 * print_alphabet: printing a line of
 * alphabet
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void);

int main(void)
{
	_putchar('\n');
	return (0);
}

/**
 * print_alphabet - printing
 * letters
 *
 * Descriptio: doing some code
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
}
