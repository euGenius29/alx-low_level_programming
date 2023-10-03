# include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory with str
 * @str: string to be placed in new memory location.
 * Return: pointer to allocated memory
 */
char *_strdup(char *str)
{
	int i;
	int j;
	char *memloc;

	if (str == NULL)
		return(NULL);
	i = 0;

	while (str[i] != '\0')
		i++;
	memloc = malloc(sizeof(char) * (i +1));
	if (memloc == NULL)
		return(NULL);

	for (j = 0; j < i; j++)
	{
		memloc[j] = str[j];
	}
	memloc[i] = '\0';

	return(memloc);
}
