#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: input for calculating factorial
 *
 * Return: factorial of n or 1 for 0 or -1 for all negative numbers
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
