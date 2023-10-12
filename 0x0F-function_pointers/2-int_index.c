#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: number of elementes in the array
 * @array: list of integers
 * @cmp: comparison function
 * Return: index of first elements where return value is't 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		(*cmp)(array[i]);
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
