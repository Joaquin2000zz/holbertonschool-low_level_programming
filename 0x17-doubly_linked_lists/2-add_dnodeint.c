#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: the doble pointer to the linked list
 * @n: the head->n value
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}
		new->n = n;
	if (!(*head))
	{
		(*head) = new;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		return (*head);
	}
	new->next = (*head);
	(*head)->prev = new;
	(*head) = new;
	(*head)->prev = NULL;
		return (*head);
}
