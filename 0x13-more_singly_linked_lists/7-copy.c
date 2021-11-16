#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the linked list
 * @index: the index of the node that you need
 * Return: returns the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new_node;
	unsigned int i;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}


	for (i = 0; i <= index; i++)
	{
		if (!head)
			break;

		if (i == index)
			new_node->n = head->n;
		head = head->next;
	}
	new_node->next = head;

	head = new_node;

	return (head);
}
