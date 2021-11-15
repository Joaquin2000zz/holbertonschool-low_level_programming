#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer that you use to go troughout
 * Return: the length of the linked list (node's cuantity)
 */

size_t print_listint(const listint_t *h)
{
	int length = 0;

	if (!h)
		return (length);

	printf("%d\n", h->n);

	length++;

	length += print_listint(h->next);

	return (length);

}
