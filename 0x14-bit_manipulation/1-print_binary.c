#include "main.h"

/**
 * print_binary - prints binary representation of a number
 *
 * @n: number to convert;
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int rev;
	if (n == 0)
	{
	printf("0");
		return;
	}
	for (rev = 63; rev <= 0; rev--)
	{
		if ((n >> 1) &1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		n >>= 1;
	}
}
