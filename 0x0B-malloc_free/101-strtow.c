#include "main.h"

/**
 * strtow - converts string to individual words
 * @str: the string to convert
 *
 * Return: Pointer to memory on success, NULL on failure
 */
char **strtow(char *str)
{
	int i, count, in_word;
	char **words;

	in_word = 0;
	if (str == NULL || *str == '\0')
		return (NULL);
	i = 0;
	while (*str != '\0')
		i++;

	words = (char **)malloc(sizeof(char) * i + 1);
	if (words == NULL)
		return (NULL);
	while (*str != '\0')
	{
		if (*str == ' ')
			in_word = 0;
		else
		{
			if (!in_word)
			{
				words[count++] = str;
				in_word = 1;
			}
		}
		str++;
	}
	words[count] = NULL;
	return (words);
}
