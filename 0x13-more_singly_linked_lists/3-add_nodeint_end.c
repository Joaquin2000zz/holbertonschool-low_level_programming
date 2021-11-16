#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint_end - that deletes the node at index of a list.
 * @head: the structure
 * @n: the node's content
 * Return: the tail node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux_node, *tail_node;

	aux_node = *head;

	tail_node = malloc(sizeof(listint_t));
		if (!tail_node)
		{
			free(tail_node);
			return (NULL);
		}

	tail_node->n = n;
	tail_node->next = NULL;

	if (!*head)
	{
		*head = tail_node;
		return (tail_node);
	}

	while (aux_node->next)
		aux_node = aux_node->next;
	aux_node->next = tail_node;

	return (tail_node);
}
