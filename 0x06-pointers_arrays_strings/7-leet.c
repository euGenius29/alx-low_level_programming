#include "main.h"

/*
 * leet - encode a string into 1337
 * @n: string to encode
 * Return: encoded string
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
				n[i] = s2[j];
		}
	}
	return (n);
}
