#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: specifies the array size
 * @c: character to initialize array with
 * Return: NULL if failed, pointer to array if successful
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	int i;

	*str[] = (malloc(sizeof(char) * size))
	if (size == 0 || str == NULL)
		return (NULL);

	for (i =0; i < size; i++)
	{
		str[i] = c;
	}
	return(str);
}
