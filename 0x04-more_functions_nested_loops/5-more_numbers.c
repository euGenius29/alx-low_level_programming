#include "main.h"

/**
 * more_numbers - prints 10 times 0 through 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('0' + (j / 10));
			}
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
