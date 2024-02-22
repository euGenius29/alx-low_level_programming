#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * @head: location to first element
 * Return: pointer to reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t prev_node;
	listint_t next_node;

	while ((*head))
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = (*head);
		(*head) = next_node;
	}
	(*head) = prev_node;
	return ((*head));
}
