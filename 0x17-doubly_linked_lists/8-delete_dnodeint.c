#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a specified index
 * @head: head pointer
 * @index: index to delete node
 * Return: 1 on success, -1 on error;
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *previous;
	unsigned int i;

	if ((*head) == NULL)
		return (-1);
	temp = (*head);
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(temp);
		return (1);
	}
	previous = NULL;
	for(i = 0;  i < index && temp != NULL; i++)
	{
		previous = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	previous->next = temp->next;
	free(temp);
	return (1);
}
