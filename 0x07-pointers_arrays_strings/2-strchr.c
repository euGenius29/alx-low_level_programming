#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (i <= strlen(s))
	{
		if (s[i] == c && c != '\0')
			return (&s[i]);
		if (s[i] == c && c == '\0')
			return ("");
		i++;
	}
	return (NULL);
}
