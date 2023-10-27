#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: number to iterate and return bit at index
 * @index: location on string of values to return
 *
 * Return: value of bit (0 || 1), -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
