#include "main.h"

/*
 * string_toupper - change lowercase letters to uppercase
 * @n: letters to convert;
 *
 * Return: n;
 */

char *string_toupper(char *n)
{
	int a;

	while (n[a])
	{
		if (n[a] >= 'a' && n[a] <= 'z')
			n[a] -= ('a' - 'A');
		a++;
	}
	return (n);
}
