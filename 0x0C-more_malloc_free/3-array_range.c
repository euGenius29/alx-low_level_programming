#include "main.h"
/**
 * array_range - returns an array of ints within max and min
 * @max: max value
 * @min: min value
 * Return: pointer to array on success, NULL on failure
 */
int *array_range(int min, int max)
{
	int i, diff, j;
	int *size;

	if (min > max)
		return (NULL);
	diff = max - min;
	size = malloc(sizeof(int) * (diff + 1));
	if (size == NULL)
		return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
	{
		size[j] = i;
		j++;
	}
	return (size);
}
