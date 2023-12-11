#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at the specified index.
 * @h: head pointer
 * @idx: position to insert pointer
 * @n: data to insert
 * Return: NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *head;
	unsigned int i;

	temp = malloc(sizeof(dlistint_t));

	if(!temp)
	{
		dprintf(2, "Malloc Failed");
		return (NULL);
	}

	i = 0;
	head = (*h);
	while(head != NULL && i < (idx - 1))
	{
		head = head->next;
		i++;
	}
	if(head != NULL && i == (idx - 1))
	{
		temp->n = n;
		temp->next = head->next;
		temp->prev = head;
		head->next = temp;
		return (temp);
	}
	free(temp);
	return (NULL);
}
