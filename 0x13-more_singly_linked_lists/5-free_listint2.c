#include "lists.h"

/**
 * free_listint2 - frees memoy allocated to listint_t list
 *
 * @head: pointer to memory space of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while ((*head))
	{
		temp = (*head);
		(*head) = (*head)->next;
		free(temp);
	}
}
