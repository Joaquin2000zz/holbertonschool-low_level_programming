#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a list_t list
 * @head: the linked list
 * Return: the list free
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
