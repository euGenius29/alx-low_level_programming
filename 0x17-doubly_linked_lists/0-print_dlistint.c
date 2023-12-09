#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: the head pointer
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;

	size_t i = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}

