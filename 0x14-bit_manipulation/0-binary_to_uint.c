#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: integer dec to convert
 *
 * Return: converted number, or 0 on failure.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;

	if (b == NULL)
		return (0);

	result = 0;
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	result = result << 1 | (b[i] - '0');
	i++;
	}
	return (result);
}
