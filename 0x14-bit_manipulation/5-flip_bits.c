#include "main.h"

/**
 * flip_bits - determines the number of bits to be flipped to get new num
 *
 * @n:actual number
 * @m: target number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m;
	unsigned int count = 0;

	while (xor > 0)
	{
		if (xor & 1)
			count++;
	xor >>= 1;
	}
	return (count);
}


