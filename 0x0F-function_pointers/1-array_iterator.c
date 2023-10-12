#include "function_pointers.h"

/**
 * array_iterator - executes a given function as a parameter on each element
 * @array: pointer to array
 * @size: size of the array
 * @action: action to take on array (function)
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	for(i = 0; i < size; i++)
		(*action)(array[i]);
}
