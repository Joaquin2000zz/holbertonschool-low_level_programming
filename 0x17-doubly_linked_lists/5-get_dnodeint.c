#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 * @head: the head node of the linked list
 * @index: the index node
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *aux;

	if (!head)
		return (NULL);
	aux = head;
	while (aux)
	{
		if (i == index)
			return (aux);
		aux = aux->next;
		i++;
	}
	return (NULL);
}
