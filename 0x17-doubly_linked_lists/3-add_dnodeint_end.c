#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: the pointer to the head node
 * @n: the new->n value
 * Return: the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux_node, *tail_node;

	aux_node = *head;

	tail_node = malloc(sizeof(dlistint_t));
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
	tail_node->prev = aux_node;
	return (tail_node);
}
