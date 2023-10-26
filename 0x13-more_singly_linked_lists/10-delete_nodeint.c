#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 *
 * @head: address to list
 * @index: nth item to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;

	if (!(*head))
		return (-1);
	prev = (*head);
	current = (*head);
	if (index == 0)
	{
		*head = current->next;
		free(current);
	}
	else
	{
		while (index != 0)
		{
			prev = current;
			current = prev->next;
			index--;
		}
		prev->next = current->next;
		free(current);
	}
	return (1);
}
