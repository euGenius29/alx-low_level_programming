#include "lists.h"

/**
 * pop_listint - deletes the head node and returns the data containes there
 *
 * @head: the head node
 *
 * Return: data contained in node; 0 if empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (!(*head))
	{
		return (0);
	}

	temp = (*head);
	(*head) = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}
