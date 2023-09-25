#include "main.h"

/*
 * cap_string - Capitalizes each word of a string based on the provided separators
 * @str: string to have words capitalized.
 *
 * Return: completed task
 */
char *cap_string(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		while(!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if(str[i - 1] ==' ' || str[i - 1] == '\t' || str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}' || i == 0)
			sri[i] -= 32;
		i++;
	}
	return (str);
}
