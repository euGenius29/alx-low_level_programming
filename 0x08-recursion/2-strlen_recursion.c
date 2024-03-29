#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 *
 * @s: The string whose lenght is to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
