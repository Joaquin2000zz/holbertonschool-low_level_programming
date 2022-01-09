#include "lists.h"

/**
 * dlistint_len - function that returns number of elements in a linked list
 * @h: the head node
 * Return: the length list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the pointer to the head pointer
 * @idx: the index of the node
 * @n: the value of the node to insert
 * Return: the list with the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux, *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;
	size_t len = 0;

	if (!new && !h)
	{
		free(new);
		return (NULL);
	}
	len = dlistint_len(*h);
	if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}
	if (idx == len + 1)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}
	if (idx >= len)
	{
		free(new);
		return (NULL);
	}
	aux = *h, new->n = n;
	while (i < idx && aux)
	{
		if (idx == i + 1)
		{
			new->next = aux->next, aux->next->prev = new;
			new->prev = aux, aux->next = new;
			return (new);
		}
		i++;
		aux = aux->next;
	}
	return (NULL);
}
