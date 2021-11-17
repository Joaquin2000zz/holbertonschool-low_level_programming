#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node in a given position.
 * @head: the linked list
 * @idx: index that you gonna add a node
 * @n: the new node's content
 * Return: the linked list updated
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *aux;
	unsigned int i;

	aux = *head;
	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = (*head);
		*head = new_node;
		return (*head);
	}	
	for (i = 0; i < idx - 1; i++)
	{
		aux = aux->next;
		if (!aux)
			return (NULL);
	}
	if (i >= idx)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = aux->next;

	aux->next = new_node;

	return (new_node);
}
