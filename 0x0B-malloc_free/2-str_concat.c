#include "main.h"

/**
 * str_concat - concatenates two strings;
 * @s1: first string
 * @s2: second string
 * return: pointer to new string or NULL upon failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, add;
	char *str;
	
	if (str == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (s1[i] != '\0')       
		i++;
	while (s2[j] != '\0')
		j++;
	str = malloc(sizeof(char) * (i + j + 1));
	for (add = 0; add < i + 1; add++)
	{
		str[add] = s1[add];
	}
	for (;add < (i + j + 1); add++)
		str[add] = s2[add];
	str[add] = '\0';
	return (str);
}
