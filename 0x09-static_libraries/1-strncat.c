#include "main.h"

/**
 * _strncat - concatenates two strings using n bytes at most from src
 * @dest: first input
 * @src: adjoining input
 * @n: specifies the number of characters to concatenate
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (*dest)
		x++;
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
