#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the linked list
 * @idx: index that you gonna add a node
 * @n: the new node's content
 * Return: the linked list updated
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *aux;
	unsigned int i;

	if (!*head)
		return (NULL);
	aux = (*head);
	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	for (i = 0; i <= idx; i++)
	{
		if (!aux)
			return (NULL);

		if (i == idx)
		{
			new_node->next = aux->next;

			aux->next = new_node;
		}
		aux = aux->next;
	}
	if (i - 1 != idx)
		return (NULL);


	return (*head);
}
