#include "main.h"

/**
 * get_endianness -  finds if the system is big or small endian
 *
 * Return: 0 for big, 1 for small, -1 on failure
 */

int get_endianness(void)
{
	unsigned int i = 0x12345678;
	char *c = (char *) & i;
	if (*c == 0x78)
		return (1);
	else if (*c == 0x12)
		return (0);
	else
		return (-1);
}
