#include "lists.h"

/**
 * list_len - function that brings the length of the linked list.
 * @h: the node's content
 * Return: the length.
 */

size_t list_len(const list_t *h)
{
	int length = 0;

	if (!h)
		return (length);

	length++;

	length += list_len(h->next);

	return (length);
}
