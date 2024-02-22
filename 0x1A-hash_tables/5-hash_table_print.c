#include "hash_tables.h"
/**
 * hash_table_print - Print the contents of the hash table
 * @ht: Hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (current->key != NULL && current->value != NULL)	
				printf("'%s': '%s'", current->key, current->value);
			while (current->next != NULL)
			{
				printf(", ");
				break;
			}

			current = current->next;
		}
/*				printf(", ");*/
	}
	printf("}\n");
}
