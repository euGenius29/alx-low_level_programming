#include "main.h"
/**
 * string_nconcat - concatenates two string
 * @s1: first string
 * @s2: second string
 * @n: number of s2 to concatenate
 * Return: ptr to string, NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, i, j, k;
	char *ptr;

	i = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	for (j = 0; j < n && s2[j] != '\0'; j++)
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
		ptr[k] = s1[k];
	for (a = 0; a < j; a++)
	{
		ptr[k] = s2[a];
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
