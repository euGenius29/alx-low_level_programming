#include "main.h"

/**
 * clear_bit -sets the bit at a set point to 0
 *
 * @n: value to edit
 * @index: location to effect change
 *
 * Return: 1 on success or 0-1 on failure;
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= 32)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
