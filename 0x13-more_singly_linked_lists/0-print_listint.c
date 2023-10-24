#include "lists.h"

/**
 * print_listint - prints all the elements of the linked list
 *
 * @h: pointer to head of linked list;
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *t)
{
	size_t count;

	if (!t)
		return (0);
	count = 0;
	while (t)
	{
		printf("%d\n", t->n);
		count++;
		t = t->next;
	}
	return (count);
}
