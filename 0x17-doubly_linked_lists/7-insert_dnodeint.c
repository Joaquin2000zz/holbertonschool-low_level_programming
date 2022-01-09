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
	dlistint_t *aux = *h, *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (!h || !new)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	new->n = n;
	while (aux && i < idx)
	{
		if (i + 1 == idx)
		{
			new->next = aux->next;
			if (aux->next)
				aux->next->prev = new;
			aux->next = new;
			new->prev = aux;
			return (new);
		}
		aux = aux->next;
		i++;
	}
	return (NULL);	
}
