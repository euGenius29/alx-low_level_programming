#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first input
 * @src: second addition
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (*dest)
	{
		x++;
	}
	y = 0;
	while (*src)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
