#include "lists.h"

/**
 * sum_dlistint - function that make adds of all node's content
 * @head: the head node of the linked list
 * Return: the addition of the node's content
 */

int sum_dlistint(dlistint_t *head)
{
	int ret = 0;

	if (!head)
		return (0);
	while (head)
		ret += head->n, head = head->next;
	return (ret);
}
