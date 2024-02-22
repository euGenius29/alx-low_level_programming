#include "main.h"

/**
 * _puts - prints the characters followed by a new line to stdout
 * @str: input for prototype
 * return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
