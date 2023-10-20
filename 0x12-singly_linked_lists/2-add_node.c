#include "lists.h"

/**
 * add_node - adds a new node to the begining of a list
 *
 * @head: head pointer
 * @str: data contained in head pointer
 * Return: address of new element or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (!str)
		return (NUL)L;
	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (!(temp->str))
	{
		free(temp);
		return (NULL);
	}
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
