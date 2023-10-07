#include "main.h"
/**
 * _realloc - realocates a dynamic memory block
 *
 * @ptr: pointer holding memory
 * @old_size: old array size
 * @new_size: new array size
 *
 * Return: pointer containing new array size or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *ptr_new;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		ptr_new = malloc(new_size);
		for (i = 0; i < old_size; i++)
			((char *)ptr_new)[i] = ((char *)ptr)[i];
		free(ptr);
		return (ptr_new);
	}
	if (new_size < old_size)
	{
		ptr_new = malloc(new_size);
		for (i = 0; i < new_size; i++)
			((char *)ptr_new)[i] = ((char *)ptr)[i];
		free(ptr);
		return (ptr_new);
	}
