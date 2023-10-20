#include "lists.h"

/**
 * list_len - finds the length of the linked list
 * @h: pointer to data
 * Return: 0 on failure, lenth on suceess
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	if (!h)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

