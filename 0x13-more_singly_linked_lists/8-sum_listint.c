#include "lists.h"

/**
 * sum_listint - adds up data of a linked list.
 *
 * @head: address of the node;
 * Return: sum of data;
 */
int sum_listint(listint_t *head)
{
	unsigned int sum;
	listint_t *temp;

	if (!head)
		return (0);

	sum = 0;
	while (head)
	{
		temp = head;
		head = head->next;
		sum += temp->n;
	}
	return (sum);
}
