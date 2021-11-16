#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list, and returns their data
 * @head: a pointer to a pointer to a node
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp;

	if (!head)
		return (0);

	i = (*head)->n;

	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (i);
}
