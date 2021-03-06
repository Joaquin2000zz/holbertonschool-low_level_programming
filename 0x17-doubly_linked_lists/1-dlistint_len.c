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
