#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 *
 * @size: determines the size of the array.
 * Return: pointer to the newly create hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_ptr;
	unsigned long int i;

	hash_ptr = malloc(sizeof(hash_table_t));
	if (hash_ptr == NULL)
	{
		fprintf(stderr, "Malloc failed!");
		return (NULL);
	}

	hash_ptr->size = size;
	hash_ptr->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_ptr->array == NULL)
	{
		fprintf(stderr, "Malloc for array failed!");
		free(hash_ptr);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_ptr->array[i] = NULL;

	return (hash_ptr);
}
