#include "main.h"

/**
 * main - check the code
 * print_alphabet: prints all alphabets in lower case using the for argument
 *
 * @letter: input for alphabet inspection
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
