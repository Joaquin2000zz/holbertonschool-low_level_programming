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
 * delete_dnodeint_at_index - deletes a new node at a given position
 * @head: the pointer to the head pointer
 * @index: the index of the node
 * Return: the list with a node deleted
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;
	unsigned int i = 0;
	size_t size = dlistint_len(*head);

	if (!head || !*head || index >= size)
		return (-1);
	while (aux)
	{
		if (i == index)
		{
			if (aux->prev)
				aux->prev->next = aux->next;
			if (aux->next)
				aux->next->prev = aux->prev;
			break;
		}
		aux = aux->next;
		i++;
	}
	if (aux == *head)
		*head = aux->next;
	free(aux);
	return (1);
}
