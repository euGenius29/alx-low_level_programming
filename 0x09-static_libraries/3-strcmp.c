#include "main.h"

/*
 * _strcmp - compares string values
 * @s1: first string
 * @s2: second string
 *
 * Return: the integer value from the function
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
