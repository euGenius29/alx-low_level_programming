#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be replaced
 * Return: updated array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *i = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (i);
}
