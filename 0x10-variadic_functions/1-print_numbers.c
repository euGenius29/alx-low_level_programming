#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: separates numbers
 * @n: arguments list
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;

	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arglist, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(arglist);
	printf("\n");
}
