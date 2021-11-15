#include "lists.h"

/**
 * listint_len - prints the length of linked list listint_t
 * @h: pointer that you use to go troughout the nodes
 * Return: the length of the linked list (node's cuantity)
 */

size_t listint_len(const listint_t *h)
{
	int length = 0;

	if (!h)
		return (length);

	length++;

	length += listint_len(h->next);

	return (length);

}
