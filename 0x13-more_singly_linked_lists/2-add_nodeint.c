#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of the linked list
 * @head: - head of linked list
 * @n: data to add
 * Return: pointer to new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (!NewNode)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}
	NewNode->n = n;
	NewNode->next = *head;
	*head = NewNode;
	return (*head);
}
