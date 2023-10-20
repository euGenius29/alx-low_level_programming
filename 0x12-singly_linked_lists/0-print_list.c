#include "lists.h"

/**
 * print_list - prints the contents of a linked list
 * @h: iterates through the list
 * Return: 0 on NULL, the number os success
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}


