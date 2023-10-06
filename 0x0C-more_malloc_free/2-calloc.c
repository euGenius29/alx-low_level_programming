#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of bytes to allocate
 * Return: ptr to allocated memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, count;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	count = nmemb * size;
	ptr = malloc(count);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		*(ptr + i) = 0;
	}
	return (ptr);
}

