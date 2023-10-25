#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address of nodes
 * @idx: where the new node should be added
 * @n: data to insert
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *inserter;

	if (!(*head))
		return(NULL);

	inserter = malloc(sizeof(listint_t));
	if (!inserter)
		return (NULL);
	
	inserter->n = n;
	inserter->next = NULL;
	for (i = 0; i < (idx - 1); i++)
	{
		if ((*head)->next == NULL)
			return (NULL);
		(*head) = (*head)->next;
	}
	inserter->next = (*head)->next;
	(*head)->next = inserter;
	return (inserter);
}
