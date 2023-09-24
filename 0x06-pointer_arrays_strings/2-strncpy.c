#include "main.h"
/**
 * _strncpy - copies a string from a source to a destination
 * @ dest: destination string
 * @src: source string
 * @n: amount to be copied
 *
 * Return: dest
 */
char *_strncpy (char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
