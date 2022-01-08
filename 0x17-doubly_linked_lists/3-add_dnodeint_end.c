#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: the pointer to the head node
 * @n: the new->n value
 * Return: the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux = *head;

	aux = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	if (!*head)
	{
		(*head) = new;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		return ((*head));
	}
	while (aux)
	{
		if (!aux->next)
		{
			aux->next = new;
			new->prev = aux;
			new->next = NULL;
		}
		aux = aux->next;
	}
	return ((*head));
}
