#include "main.h"

/**
 * malloc_checked - returns pointer to mem loc
 * @b: size of memory to allocate
 * Return: pointer to loc on success or exit(98) on failure
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
