#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node in the list
 *
 * @head: location of the pointer
 * @index: nth number whose data is to be returned
 * Return: integer data; NULL on failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	for (i = 0; i <= index; i++)
	{
		temp = head;
		head = head->next;
	}
	return (temp);
}
