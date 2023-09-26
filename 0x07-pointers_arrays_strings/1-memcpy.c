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
	int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
		dest++;
		src++;
	}
	return (dest);
}
