#include "lists.h"

/**
 * free_list - frees list_t
 * @head: pointer to memory
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->n);
		free(temp);
	}
}
