#include "main.h"

/**
 * print_most_numbers - prints digits 0 through 9 except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
		{
			continue;
		}
		_putchar (num);
	}

	_putchar ('\n');
}
