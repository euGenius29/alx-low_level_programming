#include "lists.h"

/**
 * dlistint_len - returns all elements of a dlistint_t list
 * @h: the head pointer
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;

	size_t i = 0;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}

