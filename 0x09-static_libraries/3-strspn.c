#include "main.h"
/**
 * _strspn - checks for characters in accept from s
 * @s: inspected string
 * @accept: inspection criteria
 * Return: count of the found characters
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, n;

	n = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
