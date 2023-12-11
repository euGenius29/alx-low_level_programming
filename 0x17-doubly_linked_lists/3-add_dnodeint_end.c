#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a doubly liked lists
 * @head: head pointer
 * @n: int data
 * Return: Updated pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *last;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
	{
		dprintf(2, "Malloc failed\n");
		return(NULL);
	}

	temp->n = n;
	temp->next = NULL;

	if (!(*head))
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}

	last = (*head);
	while (last->next != NULL)
		last = last->next;

	(last)->next = temp;
	temp->prev = last;

	return (temp);
}
