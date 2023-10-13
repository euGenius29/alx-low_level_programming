#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: specifies specific formats
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list arglist;
	int i;
	char *arg_ptr;
	char *separator = "";

	i = 0;
	va_start(arglist, format);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arglist, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(arglist, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arglist, double));
					break;
				case 's':
					arg_ptr = va_arg(arglist, char *);
					if (arg_ptr == NULL)
						arg_ptr = "(nil)";
					printf("%s%s", separator, arg_ptr);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(arglist);
}
