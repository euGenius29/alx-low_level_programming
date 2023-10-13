#include "variadic_functions.h"


/**
 * sum_them_all - sums up all parameters
 * @n:first parameter
 * @... number of parameter to find sum
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(arglist, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(arglist, int);
	va_end(arglist);
	return (sum);
}
