#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	int i = 0;
	int j = strlen(s) - 1;

	while (i < j)
	{
		char temp;

		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
