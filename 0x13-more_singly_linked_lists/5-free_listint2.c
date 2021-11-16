#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: a node
 * Return: the free list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

		while (*head && head)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
	*head = NULL;
}
