#include "main.h"

int _sqrt_calculator(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_calculator(n, 0));
}

/**
 * _sqrt_calculator - finds the natural square root
 * @n: input to check square root
 * @i: multiplies to check square root
 *
 * Return: natural square root or -1
 */
int _sqrt_calculator(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt_calculator(n, i + 1));
}
