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
	if ( n == 0)
	{
		printf("0");
		return;
	}
	while (n)
	{
		printf("%lu", n & 1);
		n >>= 1;
	}
}
