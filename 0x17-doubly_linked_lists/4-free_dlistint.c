#include "lists.h"
/**
 * free_dlistint - frees memory for a doubly linked list
 * @head: head pointer
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = head;

	while(current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
