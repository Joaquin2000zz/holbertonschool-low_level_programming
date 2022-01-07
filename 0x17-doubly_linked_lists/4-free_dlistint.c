#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: the head node of a linked list
 * Return: void function without return
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
		exit(1);
	while (head)
	{
		free(head);
		head = head->next;
	}
}
