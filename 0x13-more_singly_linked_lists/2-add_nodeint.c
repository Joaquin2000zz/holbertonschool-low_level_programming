#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the end of a listint_t list.
 * @head: the head of the list
 * @n: the node's content
 * Return: the new header's list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_header;

	new_header = malloc(sizeof(listint_t));

	if (!new_header)
	{
		free(new_header);
		return (0);
	}

	new_header->n = n;
	new_header->next = *head;

	*head = new_header;

	return (*head);
}
