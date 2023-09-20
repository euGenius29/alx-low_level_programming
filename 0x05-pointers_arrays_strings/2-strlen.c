#include "main.h"

/**
 *_strlen - returns the lenght of a string
 *@s: the pointer that returns the string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
