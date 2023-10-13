#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings in arglist
 * @separator: separates strings
 * @n: number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	char *arg_ptr;
	unsigned int i;

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		arg_ptr = va_arg(arglist, char *);
		if (arg_ptr)
			printf("%s", arg_ptr);
		else
			printf("(nil");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(arglist);
	printf("\n");
}
