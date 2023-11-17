#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where stored
 * @src: memory where copied
 * *@n: number of bytes
 *
 * Return: copied memory with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	j = 0;
	while (j < n && src != NULL)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
