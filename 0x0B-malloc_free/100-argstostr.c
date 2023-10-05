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
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	j = 0;
	lenght = 0;
	k = 0;

	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			j++;
			lenght++;
		}
		lenght++;
		j = 0;
	}
	str = malloc(sizeof(char) * lenght + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j];
			k++, j++;
		}
		if (i < ac)
		{
			str[k] = '\n';
			k++;
		}
	}
	str[k] = '\0';
	return (str);
}
