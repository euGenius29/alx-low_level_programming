#include "main.h"

/**
 * puts_half - a function that prints the last half of a string
 * @str: input
 *
 * Return: void
 */
void puts_half(char *str)
{
	int a, n;

	a = 0;

	while (str[a] != '\0')
		a++;
	if (a % 2 == 0)
		n = a / 2;
	else
		n = (a - 1) / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
