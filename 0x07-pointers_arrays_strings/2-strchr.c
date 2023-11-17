#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = strlen(s) + 1;
	while (i)
	{
		if (s[i] == c && c != '\0')
			return (&s[i]);
		if (s[i] == c)
			return ("");
		i++;
	}
	return (NULL);
}
