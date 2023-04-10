#include "main.h"

/**
 * puts2 - prints every other letter in an array.
 *
 * @str: takes input
 * Return: 0
 */
void puts2(char *str)
{
	int i;
	int t;
	int j;

	i = 0;
	t = 0;
	j = 0;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	t = i - 1;
	for (j = 0; j <= t; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
