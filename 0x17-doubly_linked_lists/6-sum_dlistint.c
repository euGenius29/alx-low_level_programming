#include "lists.h"

/**
 * sum_dlistint - sums up all elements of a doubly linked list
 * @head: head pointer
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *current;

	sum = 0;
	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
