#include "main.h"
#include <string.h>
/**
 * print_rev - prints the string in reverse
 * @s: the string to be reversed
 * Return: 0
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
