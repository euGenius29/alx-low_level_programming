#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list;
 *
 * @head: pointer to head of list
 * @n: data to add
 *
 * Return: pointer to last element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *Lastnode;
	listint_t *Newnode;

	Lastnode = malloc(sizeof(listint_t));
	if (!Lastnode)
		return (NULL);

	Lastnode->n = n;
	Lastnode->next = NULL;

	Newnode = (*head);
	if ((*head) == NULL)
	{
		(*head) = Lastnode;
		return (*head);
	}
	while (Newnode->next != NULL)
	{
		Newnode = Newnode->next;
	}
	Newnode->next = Lastnode;

	return (Newnode);
}


