#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: the head node
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (EXIT_FAILURE);
	if (!h->next)
		printf("%d\n", h->n);
	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
