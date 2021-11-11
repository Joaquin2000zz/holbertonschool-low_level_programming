#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: the node's content
 * Return: the values of the structure.
 */

size_t print_list(const list_t *h)
{
	int length = 0;


	if (!h)
		return (length);

	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	length++;
	length += print_list(h->next);

	return (length);
}
