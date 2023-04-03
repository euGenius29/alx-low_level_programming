#include "main.h"

/**
 * print_line - prints a line using _ on the screen
 *
 * @n: takes in a numerical input to determine the lenght
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
