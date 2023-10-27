#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: integer to edit
 * @index: location to effect change
 * Return: 1 on success, 0 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= 32)
		return (-1);
	*n |= 1 << index;
	return (1);
}
