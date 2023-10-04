#include "main.h"

/**
 * str_concat - concatenates two strings;
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string or NULL upon failure.
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, add;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	for (add = 0; add < i; add++)
	{
		str[add] = s1[add];
	}
	for (k = 0; k < j; k++, add++)
	{
		str[add] = s2[k];
	}
	str[add] = '\0';
	return (str);
}
