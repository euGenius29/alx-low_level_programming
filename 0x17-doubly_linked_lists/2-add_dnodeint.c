#include "lists.h"

/**
 * add_dnodeint - adds a node to the double linked list.
 * @head: head pointer.
 * @n: data to add.
 * Return: updated pointer.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *first;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		dprintf(2, "Error: malloc failed");
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	first = (*head);

	if (first != NULL)
		while(first->prev != NULL)
			first = first->prev;
	new->next = first;
	if (first != NULL)
		first->prev = new;
	(*head) = new;

	return (new);
}
