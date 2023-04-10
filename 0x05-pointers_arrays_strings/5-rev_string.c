#include "main.h"

/**
 * rev_string - reverses a string
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	char rev = s[2];
	int count;
	int i;

	count = 0;
	while (s[count] != '\0')
		count++;
	for (i = 0; i < count; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev[0];
	}
}
