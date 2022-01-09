#include "lists.h"

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

	if (!new && !*h)
	{
		free(new);
		return (NULL);
	}
	len = dlistint_len(*h);
	if (idx == 0)
	{
		add_dnodeint(&new, n);
		return (*h);
	}
	if (idx == len - 1)
	{
		add_dnodeint_end(&new, n);
		return (*h);
	}
	if (idx >= len)
	{
		free(new;)
		return (NULL);
	}
	aux = (*h), new->n = n;
	while (aux)
	{
		if (idx == i + 1)
		{
			new->next = aux->next, aux->next->prev = new;
			new->prev = aux, aux->next = new;
			return (*h);
		}
		i++;
		aux = aux->next;
	}
	return (NULL);
}
