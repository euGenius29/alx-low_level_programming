#include "main.h"

/**
 * argstostr - concatenates all arguments of program
 * @ac: number of arguments
 * @av: arguments
 * Return: concatenated string or NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, lenght;
	char str;

	if (ac == 0 || av == NULL)
		return (NULL);

	j = 0;
	lenght = 0;

	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
			j++;
		lenght += j + 1;
	}
	char *str = (char *)malloc(sizeof(char) * lenght);
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		if (i < ac - 1)
		{
			str[k] = '\n';
			k++;
		}
	}
	str[k] = '\0';
	return (str);
}
